/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface DDSAnalytics : NSObject {

	NSMutableDictionary* _analyticByIdentifier;
	NSObject*<OS_dispatch_queue> _analyticQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * analyticByIdentifier;              //@synthesize analyticByIdentifier=_analyticByIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> analyticQueue;              //@synthesize analyticQueue=_analyticQueue - In the implementation block
+(id)sharedInstance;
+(id)roundNumber:(id)arg1 toSignificantDigits:(id)arg2 ;
+(BOOL)isInteger:(id)arg1 ;
-(id)init;
-(id)processName;
-(NSObject*<OS_dispatch_queue>)analyticQueue;
-(NSMutableDictionary *)analyticByIdentifier;
-(id)stringForAction:(int)arg1 ;
-(void)reportAssetDownloadAnalytic:(id)arg1 ;
-(id)bucketForValue:(id)arg1 fromBuckets:(id)arg2 ;
-(void)cancelRecordingForAsset:(id)arg1 ;
-(void)recordAssetAction:(int)arg1 forAsset:(id)arg2 ;
-(void)recordUpdateCycleState:(int)arg1 ;
-(void)reportUpdateCycleAnalytic:(id)arg1 ;
-(void)dumpAssetLogWithInstalledAssets:(id)arg1 ;
@end

