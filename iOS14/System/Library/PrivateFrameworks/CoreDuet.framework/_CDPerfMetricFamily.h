/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSString, NSMutableDictionary;

@interface _CDPerfMetricFamily : NSObject {

	NSString* _name;
	NSMutableDictionary* _perfMetrics;

}

@property (readonly) NSMutableDictionary * perfMetrics;              //@synthesize perfMetrics=_perfMetrics - In the implementation block
@property (readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
+(id)perfMetricFamilyWithName:(id)arg1 ;
-(id)perfMetricWithName:(id)arg1 string:(id)arg2 ;
-(NSString *)name;
-(id)allPerfMetrics;
-(NSMutableDictionary *)perfMetrics;
-(id)initWithName:(id)arg1 ;
-(id)perfMetricWithName:(id)arg1 ;
-(id)description;
@end

