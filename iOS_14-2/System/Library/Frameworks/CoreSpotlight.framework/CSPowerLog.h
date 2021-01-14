/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/


@class NSMutableDictionary, NSDate;

@interface CSPowerLog : NSObject {

	NSMutableDictionary* _operationsByBundleID;
	NSDate* _lastFlushDate;
	unsigned long long _cachedCount;

}

@property (nonatomic,retain) NSMutableDictionary * operationsByBundleID;              //@synthesize operationsByBundleID=_operationsByBundleID - In the implementation block
@property (nonatomic,retain) NSDate * lastFlushDate;                                  //@synthesize lastFlushDate=_lastFlushDate - In the implementation block
@property (assign,nonatomic) unsigned long long cachedCount;                          //@synthesize cachedCount=_cachedCount - In the implementation block
+(id)sharedInstance;
+(id)keyNameForOperation:(long long)arg1 ;
-(id)init;
-(void)setOperationsByBundleID:(NSMutableDictionary *)arg1 ;
-(void)setLastFlushDate:(NSDate *)arg1 ;
-(NSDate *)lastFlushDate;
-(void)setCachedCount:(unsigned long long)arg1 ;
-(void)logWithBundleID:(id)arg1 indexOperation:(long long)arg2 itemCount:(unsigned long long)arg3 ;
-(NSMutableDictionary *)operationsByBundleID;
-(void)flushToPowerLog;
-(void)_addToDictionary:(long long)arg1 bundleID:(id)arg2 itemCount:(unsigned long long)arg3 ;
-(unsigned long long)cachedCount;
@end

