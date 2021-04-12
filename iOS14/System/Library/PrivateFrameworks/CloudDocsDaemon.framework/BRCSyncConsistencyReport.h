/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class NSURL, NSError, BRCItemGlobalID, BRMangledID;

@interface BRCSyncConsistencyReport : NSObject {

	long long _failureRetryCount;
	NSURL* _fileURL;
	BOOL _containsSharedToMeItem;
	BOOL _wasAbleToRun;
	long long _itemCountDifference;
	NSError* _lastError;
	BRCItemGlobalID* _itemGlobalID;
	BRMangledID* _zoneMangledID;

}

@property (nonatomic,readonly) long long itemCountDifference;               //@synthesize itemCountDifference=_itemCountDifference - In the implementation block
@property (nonatomic,readonly) BOOL wasAbleToRun;                           //@synthesize wasAbleToRun=_wasAbleToRun - In the implementation block
@property (nonatomic,readonly) NSError * lastError;                         //@synthesize lastError=_lastError - In the implementation block
@property (nonatomic,readonly) BRCItemGlobalID * itemGlobalID;              //@synthesize itemGlobalID=_itemGlobalID - In the implementation block
@property (nonatomic,readonly) BRMangledID * zoneMangledID;                 //@synthesize zoneMangledID=_zoneMangledID - In the implementation block
+(void)generateReportForSharedFolder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)_finishReport:(id)arg1 session:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSError *)lastError;
-(id)initWithURL:(id)arg1 ;
-(BRCItemGlobalID *)itemGlobalID;
-(void)shareChangedDuringCheckWithSession:(id)arg1 ;
-(id)telemetryEvent;
-(void)incrementErrorRetryCountWithSession:(id)arg1 ;
-(BOOL)wasAbleToRun;
-(long long)itemCountDifference;
-(BRMangledID *)zoneMangledID;
@end

