//
//  Parents41ViewController.h
//  iPad-YOU-Pad
//
//  Created by Yuki Robson on 3/10/13.
//  Copyright (c) 2013 Andrew Edwards. All rights reserved.
//

#import <UIKit/UIKit.h>

//extern int checkBox[8];
extern bool optionalQuestions;

@interface Parents41ViewController : UIViewController {
    int start;
    int end;
}


@property (weak, nonatomic) IBOutlet UIButton *nextButton;
-(IBAction)nextButton:(id)sender;

@end