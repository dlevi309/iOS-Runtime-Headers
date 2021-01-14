/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHostView:(UIView *)arg1 ;
-(void)didMoveToWindow;
-(UIView *)hostView;
-(void)dealloc;
-(void)_setDisabled:(BOOL)arg1 ;
-(void)_disablement:(id)arg1 ;
@end

