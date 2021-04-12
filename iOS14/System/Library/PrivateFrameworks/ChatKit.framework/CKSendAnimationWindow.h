/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CKGradientReferenceView *)gradientReferenceView;
-(id)initWithWindowScene:(id)arg1 frame:(CGRect)arg2 ;
@end

