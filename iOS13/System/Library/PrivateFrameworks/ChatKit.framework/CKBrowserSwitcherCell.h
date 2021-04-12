/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class IMBalloonPlugin, UIView, CKSnapshotCacheKey;

@interface CKBrowserSwitcherCell : UICollectionViewCell {

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
+(id)identifier;
-(void)dealloc;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(IMBalloonPlugin *)plugin;
-(void)setPlugin:(IMBalloonPlugin *)arg1 ;
-(void)_handleBrowserSnapshotDidChange:(id)arg1 ;
-(void)setSnapshotCacheKey:(CKSnapshotCacheKey *)arg1 ;
-(void)_updateSnapshotView;
-(void)resetSnapshotView;
-(void)setBrowserSnapshotView:(UIView *)arg1 ;
-(UIView *)extensionInterruptedView;
-(void)setExtensionInterruptedView:(UIView *)arg1 ;
-(UIView *)browserSnapshotView;
-(CKSnapshotCacheKey *)snapshotCacheKey;
-(void)setUsingFallbackSnapshot:(BOOL)arg1 ;
-(BOOL)isUsingFallbackSnapshot;
-(void)setPlugin:(id)arg1 withSnapshotCacheKey:(id)arg2 ;
-(void)showExtensionInterruptedView;
@end

