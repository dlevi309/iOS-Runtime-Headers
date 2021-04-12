/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)perfMetricWithName:(id)arg1 string:(id)arg2 ;
-(NSMutableDictionary *)perfMetrics;
-(id)perfMetricWithName:(id)arg1 ;
-(id)allPerfMetrics;
@end

