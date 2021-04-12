/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBAppLayout, SBDisplayItem, XBApplicationSnapshot, UIImage;

@interface SBAppSwitcherSnapshotCacheEntry : NSObject {

	BOOL _fromFullSizeSnapshotRequest;
	BOOL _needsUpdate;
	SBAppLayout* _appLayout;
	SBDisplayItem* _displayItem;
	XBApplicationSnapshot* _snapshot;
	UIImage* _snapshotImage;

}

@property (nonatomic,retain) SBAppLayout * appLayout;                       //@synthesize appLayout=_appLayout - In the implementation block
@property (nonatomic,retain) SBDisplayItem * displayItem;                   //@synthesize displayItem=_displayItem - In the implementation block
@property (nonatomic,retain) XBApplicationSnapshot * snapshot;              //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,retain) UIImage * snapshotImage;                       //@synthesize snapshotImage=_snapshotImage - In the implementation block
@property (nonatomic,readonly) long long role; 
@property (assign,nonatomic) BOOL fromFullSizeSnapshotRequest;              //@synthesize fromFullSizeSnapshotRequest=_fromFullSizeSnapshotRequest - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                              //@synthesize needsUpdate=_needsUpdate - In the implementation block
-(id)description;
-(long long)role;
-(BOOL)needsUpdate;
-(XBApplicationSnapshot *)snapshot;
-(void)setSnapshot:(XBApplicationSnapshot *)arg1 ;
-(SBDisplayItem *)displayItem;
-(void)setDisplayItem:(SBDisplayItem *)arg1 ;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(UIImage *)snapshotImage;
-(void)setSnapshotImage:(UIImage *)arg1 ;
-(SBAppLayout *)appLayout;
-(void)setAppLayout:(SBAppLayout *)arg1 ;
-(BOOL)fromFullSizeSnapshotRequest;
-(void)setFromFullSizeSnapshotRequest:(BOOL)arg1 ;
@end

