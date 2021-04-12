/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/


@class NSMutableDictionary;

@interface CPAnalyticsSystemProperties : NSObject {

	NSMutableDictionary* _systemProperties;
	NSMutableDictionary* _dynamicProperties;

}

@property (nonatomic,retain) NSMutableDictionary * systemProperties;               //@synthesize systemProperties=_systemProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dynamicProperties;              //@synthesize dynamicProperties=_dynamicProperties - In the implementation block
-(id)init;
-(NSMutableDictionary *)dynamicProperties;
-(void)addProperty:(id)arg1 withValue:(id)arg2 ;
-(NSMutableDictionary *)systemProperties;
-(void)addDynamicProperty:(id)arg1 withProvider:(id)arg2 ;
-(id)propertyForKey:(id)arg1 forEventName:(id)arg2 payloadForSystemPropertyExtraction:(id)arg3 ;
-(void)setSystemProperties:(NSMutableDictionary *)arg1 ;
-(void)setDynamicProperties:(NSMutableDictionary *)arg1 ;
@end

