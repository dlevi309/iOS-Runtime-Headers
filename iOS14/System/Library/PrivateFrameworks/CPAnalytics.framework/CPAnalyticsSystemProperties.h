/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
*/


@class NSMutableDictionary;

@interface CPAnalyticsSystemProperties : NSObject {

	NSMutableDictionary* _systemProperties;
	NSMutableDictionary* _dynamicProperties;

}

@property (nonatomic,retain) NSMutableDictionary * systemProperties;               //@synthesize systemProperties=_systemProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dynamicProperties;              //@synthesize dynamicProperties=_dynamicProperties - In the implementation block
+(id)dynamicPhotoLibraryProperties;
+(id)staticPhotoLibraryProperties;
-(id)init;
-(id)propertyForKey:(id)arg1 forEventName:(id)arg2 payloadForSystemPropertyExtraction:(id)arg3 ;
-(void)removePhotoLibraryProperties;
-(void)addDynamicProperty:(id)arg1 withProvider:(id)arg2 ;
-(NSMutableDictionary *)systemProperties;
-(void)setDynamicProperties:(NSMutableDictionary *)arg1 ;
-(void)addProperty:(id)arg1 withValue:(id)arg2 ;
-(void)setSystemProperties:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)dynamicProperties;
@end

