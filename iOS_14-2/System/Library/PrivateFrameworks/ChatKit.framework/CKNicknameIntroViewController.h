/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <OnBoardingKit/OBWelcomeController.h>

@class CKNicknamePreviewView;

@interface CKNicknameIntroViewController : OBWelcomeController {

	CKNicknamePreviewView* _nicknamePreviewView;

}

@property (nonatomic,retain) CKNicknamePreviewView * nicknamePreviewView;              //@synthesize nicknamePreviewView=_nicknamePreviewView - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(CKNicknamePreviewView *)nicknamePreviewView;
-(double)_contentViewHeight;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)setNicknamePreviewView:(CKNicknamePreviewView *)arg1 ;
@end

