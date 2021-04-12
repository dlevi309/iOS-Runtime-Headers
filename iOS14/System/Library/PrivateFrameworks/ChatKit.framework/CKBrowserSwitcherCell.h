/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class IMBalloonPlugin, UIView, CKSnapshotCacheKey;

@interface CKBrowserSwitcherCell : UIView {

	BOOL _usingFallbackSnapshot;
	IMBalloonPlugin* _plugin;
	UIView* _browserSnapshotView;
	UIView* _extensionInterruptedView;
	CKSnapshotCacheKey* _snapshotCacheKey;

}

@property (nonatomic,retain) UIView * browserSnapshotView;                                           //@synthesize browserSnapshotView=_browserSnapshotView - In the implementation block
@property (nonatomic,retain) UIView * extensionInterruptedView;                                      //@synthesize extensionInterruptedView=_extensionInterruptedView - In the implementation block
@property (nonatomic,retain) IMBalloonPlugin * plugin;                                               //@synthesize plugin=_plugin - In the implementation block
@property (nonatomic,retain) CKSnapshotCacheKey * snapshotCacheKey;                                  //@synthesize snapshotCacheKey=_snapshotCacheKey - In the implementation block
@property (assign,getter=isUsingFallbackSnapshot,nonatomic) BOOL usingFallbackSnapshot;              //@synthesize usingFallbackSnapshot=_usingFallbackSnapshot - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(IMBalloonPlugin *)plugin;
-(void)layoutSubviews;
-(id)balloonPluginManager;
-(void)_handleBrowserSnapshotDidChange:(id)arg1 ;
-(void)setSnapshotCacheKey:(CKSnapshotCacheKey *)arg1 ;
-(void)_updateSnapshotView;
-(UIView *)extensionInterruptedView;
-(UIView *)browserSnapshotView;
-(void)setBrowserSnapshotView:(UIView *)arg1 ;
-(void)setExtensionInterruptedView:(UIView *)arg1 ;
-(CKSnapshotCacheKey *)snapshotCacheKey;
-(void)setUsingFallbackSnapshot:(BOOL)arg1 ;
-(BOOL)isUsingFallbackSnapshot;
-(void)setPlugin:(id)arg1 withSnapshotCacheKey:(id)arg2 ;
-(void)showExtensionInterruptedViewWithDisplayName:(id)arg1 ;
-(void)setPlugin:(IMBalloonPlugin *)arg1 ;
-(void)dealloc;
@end

