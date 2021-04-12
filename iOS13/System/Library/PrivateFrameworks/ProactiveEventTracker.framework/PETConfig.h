/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
*/


@class NSDictionary;

@interface PETConfig : NSObject {

	NSDictionary* _config;
	unsigned long long _version;
	NSDictionary* _messageGroups;

}

@property (readonly) unsigned long long version;              //@synthesize version=_version - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)version;
-(id)initWithFile:(id)arg1 ;
-(void)writeToFile:(id)arg1 ;
-(unsigned long long)samplingLimitForMessageGroup:(id)arg1 ;
-(void)_enumerateGroupConfigsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateMessageConfigsWithBlock:(/*^block*/id)arg1 ;
-(id)groupForMessageName:(id)arg1 ;
-(id)_configForMessageName:(id)arg1 ;
-(id)_groupConfigForMessageName:(id)arg1 ;
-(id)_whitelistHelper:(id)arg1 ;
-(id)whitelistForMessageName:(id)arg1 ;
-(double)deviceSamplingForMessageName:(id)arg1 isSeed:(BOOL)arg2 ;
-(double)messageSamplingForMessageName:(id)arg1 ;
-(id)bucketsForMessageName:(id)arg1 ;
-(unsigned long long)sigFigsForMessageName:(id)arg1 ;
-(BOOL)isAggregatedForMessageName:(id)arg1 ;
@end

