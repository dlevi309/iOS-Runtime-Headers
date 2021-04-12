/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(XBApplicationSnapshot *)snapshot;
-(SBAppLayout *)appLayout;
-(void)setSnapshot:(XBApplicationSnapshot *)arg1 ;
-(SBDisplayItem *)displayItem;
-(void)setAppLayout:(SBAppLayout *)arg1 ;
-(id)initWithSequenceID:(unsigned long long)arg1 ;
-(BOOL)loadFullSizeSnapshot;
-(void)setLoadFullSizeSnapshot:(BOOL)arg1 ;
-(void)setDisplayItem:(SBDisplayItem *)arg1 ;
-(id)description;
-(unsigned long long)sequenceID;
@end

