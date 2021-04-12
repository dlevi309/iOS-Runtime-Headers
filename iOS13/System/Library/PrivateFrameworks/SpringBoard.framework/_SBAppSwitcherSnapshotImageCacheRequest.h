/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBAppLayout, SBDisplayItem, XBApplicationSnapshot;

@interface _SBAppSwitcherSnapshotImageCacheRequest : NSObject {

	BOOL _loadFullSizeSnapshot;
	unsigned long long _sequenceID;
	SBAppLayout* _appLayout;
	SBDisplayItem* _displayItem;
	XBApplicationSnapshot* _snapshot;

}

@property (nonatomic,readonly) unsigned long long sequenceID;               //@synthesize sequenceID=_sequenceID - In the implementation block
@property (assign,nonatomic) BOOL loadFullSizeSnapshot;                     //@synthesize loadFullSizeSnapshot=_loadFullSizeSnapshot - In the implementation block
@property (nonatomic,retain) SBAppLayout * appLayout;                       //@synthesize appLayout=_appLayout - In the implementation block
@property (nonatomic,retain) SBDisplayItem * displayItem;                   //@synthesize displayItem=_displayItem - In the implementation block
@property (nonatomic,retain) XBApplicationSnapshot * snapshot;              //@synthesize snapshot=_snapshot - In the implementation block
-(id)description;
-(XBApplicationSnapshot *)snapshot;
-(void)setSnapshot:(XBApplicationSnapshot *)arg1 ;
-(SBDisplayItem *)displayItem;
-(void)setDisplayItem:(SBDisplayItem *)arg1 ;
-(unsigned long long)sequenceID;
-(SBAppLayout *)appLayout;
-(void)setAppLayout:(SBAppLayout *)arg1 ;
-(BOOL)loadFullSizeSnapshot;
-(id)initWithSequenceID:(unsigned long long)arg1 ;
-(void)setLoadFullSizeSnapshot:(BOOL)arg1 ;
@end

