/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@class NSString;

@interface MCAggregateLogKey : NSObject

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long value; 
+(id)keys;
+(unsigned long long)bucket;
+(id)bucketSpecificKeys:(unsigned long long)arg1 ;
+(id)keysForAllBuckets;
+(id)debugKeys;
-(NSString *)name;
-(unsigned long long)value;
@end

