/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIAutoRotatingWindow.h>

@class CKGradientReferenceView;

@interface CKSendAnimationWindow : UIAutoRotatingWindow {

	CKGradientReferenceView* _gradientReferenceView;

}

@property (nonatomic,retain) CKGradientReferenceView * gradientReferenceView;              //@synthesize gradientReferenceView=_gradientReferenceView - In the implementation block
-(BOOL)_canAffectStatusBarAppearance;
-(void)setGradientReferenceView:(CKGradientReferenceView *)arg1 ;
-(id)initWithWindowScene:(id)arg1 frame:(CGRect)arg2 ;
-(CKGradientReferenceView *)gradientReferenceView;
@end

