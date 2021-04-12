/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKTextBalloonView.h>

@class UIImage;

@interface CKOnboardingBalloonView : CKTextBalloonView {

	UIImage* _largeBalloonImage;

}

@property (nonatomic,retain) UIImage * largeBalloonImage;              //@synthesize largeBalloonImage=_largeBalloonImage - In the implementation block
-(void)prepareForDisplay;
-(UIImage *)largeBalloonImage;
-(void)setLargeBalloonImage:(UIImage *)arg1 ;
@end

