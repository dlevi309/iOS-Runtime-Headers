/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBFloatingApplicationLiveContentOverlayView.h>

@class SBInlineAppExposeContainerViewController, UIView, NSString;

@interface SBFloatingApplicationInlineAppExposeLiveContentOverlayView : NSObject <SBFloatingApplicationLiveContentOverlayView> {

	SBInlineAppExposeContainerViewController* _inlineAppExposeContainerViewController;

}

@property (nonatomic,readonly) SBInlineAppExposeContainerViewController * inlineAppExposeContainerViewController;              //@synthesize inlineAppExposeContainerViewController=_inlineAppExposeContainerViewController - In the implementation block
@property (nonatomic,readonly) UIView * contentOverlayView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)disableAsynchronousRenderingForNextCommit;
-(void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)arg1 ;
-(void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(BOOL)arg2 ;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg1 ;
-(void)setHomeGrabberHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setLiveContentRasterizationDisabled:(BOOL)arg1 ;
-(id)contentViewController;
-(long long)rasterizationStyle;
-(UIView *)contentOverlayView;
-(void)invalidate;
-(void)setStatusBarHidden:(BOOL)arg1 nubViewHidden:(BOOL)arg2 animator:(/*^block*/id)arg3 ;
-(SBInlineAppExposeContainerViewController *)inlineAppExposeContainerViewController;
-(void)configureWithWorkspaceEntity:(id)arg1 referenceFrame:(CGRect)arg2 interfaceOrientation:(long long)arg3 ;
@end

