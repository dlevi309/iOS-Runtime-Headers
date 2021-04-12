/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@interface PKPassthroughView : UIView {

	BOOL _inHitTest;
	BOOL _hitTestEnabled;
	BOOL _portalled;
	BOOL _inPortalHitTest;
	PKPassthroughView* _portal;

}

@property (assign,getter=isPortalled,nonatomic) BOOL portalled;                        //@synthesize portalled=_portalled - In the implementation block
@property (assign,nonatomic) BOOL inPortalHitTest;                                     //@synthesize inPortalHitTest=_inPortalHitTest - In the implementation block
@property (assign,getter=isHitTestEnabled,nonatomic) BOOL hitTestEnabled;              //@synthesize hitTestEnabled=_hitTestEnabled - In the implementation block
@property (assign,nonatomic,__weak) PKPassthroughView * portal;                        //@synthesize portal=_portal - In the implementation block
-(PKPassthroughView *)portal;
-(void)setPortal:(PKPassthroughView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setInPortalHitTest:(BOOL)arg1 ;
-(void)setPortalled:(BOOL)arg1 ;
-(BOOL)isHitTestEnabled;
-(void)setHitTestEnabled:(BOOL)arg1 ;
-(BOOL)isPortalled;
-(BOOL)inPortalHitTest;
@end

