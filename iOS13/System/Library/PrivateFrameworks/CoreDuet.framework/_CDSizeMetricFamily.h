/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSString, NSMutableDictionary;

@interface _CDSizeMetricFamily : NSObject {

	NSString* _name;
	NSMutableDictionary* _sizeMetrics;

}

@property (readonly) NSMutableDictionary * sizeMetrics;              //@synthesize sizeMetrics=_sizeMetrics - In the implementation block
@property (readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
+(id)sizeMetricFamilyWithName:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)sizeMetricWithName:(id)arg1 string:(id)arg2 scale:(unsigned long long)arg3 ;
-(NSMutableDictionary *)sizeMetrics;
-(id)sizeMetricWithName:(id)arg1 ;
-(id)allSizeMetrics;
@end

