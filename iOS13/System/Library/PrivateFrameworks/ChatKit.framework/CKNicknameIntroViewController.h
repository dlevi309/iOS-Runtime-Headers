/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <OnBoardingKit/OBWelcomeController.h>

@class CKNicknamePreviewView;

@interface CKNicknameIntroViewController : OBWelcomeController {

	CKNicknamePreviewView* _nicknamePreviewView;

}

@property (nonatomic,retain) CKNicknamePreviewView * nicknamePreviewView;              //@synthesize nicknamePreviewView=_nicknamePreviewView - In the implementation block
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(double)_contentViewHeight;
-(void)setNicknamePreviewView:(CKNicknamePreviewView *)arg1 ;
-(CKNicknamePreviewView *)nicknamePreviewView;
@end

