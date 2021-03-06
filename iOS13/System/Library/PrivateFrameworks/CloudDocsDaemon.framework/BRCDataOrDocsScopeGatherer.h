/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class BRCNotificationPipe, NSMutableArray, NSString, BRCAccountSession, BRCItemGlobalID;

@interface BRCDataOrDocsScopeGatherer : NSObject {

	BRCNotificationPipe* _pipe;
	/*^block*/id _gatherReply;
	NSMutableArray* _gatheringAppLibraries;
	unsigned long long _gatheringRankMin;
	unsigned long long _gatheringRankMax;
	unsigned long long _lastSentRank;
	NSString* _gatheringNamePrefix;
	BRCAccountSession* _session;
	BOOL _includesDeadItems;
	BRCItemGlobalID* _gatheredChildrenItemGlobalID;

}

@property (nonatomic,retain) BRCItemGlobalID * gatheredChildrenItemGlobalID;              //@synthesize gatheredChildrenItemGlobalID=_gatheredChildrenItemGlobalID - In the implementation block
-(void)invalidate;
-(void)done;
-(void)gatherWithBatchSize:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(/*^block*/id)_popGatherReply;
-(id)initWithNotificationPipe:(id)arg1 appLibraries:(id)arg2 startingRank:(unsigned long long)arg3 maxRank:(unsigned long long)arg4 withDeadItems:(BOOL)arg5 gatherReply:(/*^block*/id)arg6 ;
-(BRCItemGlobalID *)gatheredChildrenItemGlobalID;
-(void)setGatheredChildrenItemGlobalID:(BRCItemGlobalID *)arg1 ;
@end

