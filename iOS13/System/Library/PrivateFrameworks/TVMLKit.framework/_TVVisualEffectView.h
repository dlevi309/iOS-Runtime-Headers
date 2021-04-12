/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <UIKitCore/UIVisualEffectView.h>

@class UIView;

@interface _TVVisualEffectView : UIVisualEffectView {

	UIView* _hostView;

}

@property (assign,nonatomic,__weak) UIView * hostView;              //@synthesize hostView=_hostView - In the implementation block
+(void)removeHostView:(id)arg1 ;
+(void)disableForHostView:(id)arg1 ;
+(void)enableForHostView:(id)arg1 ;
+(void)addHostView:(id)arg1 ;
+(id)hostViewDisablements;
-(void)dealloc;
-(void)didMoveToWindow;
-(UIView *)hostView;
-(void)setHostView:(UIView *)arg1 ;
-(void)_setDisabled:(BOOL)arg1 ;
-(void)_disablement:(id)arg1 ;
@end

