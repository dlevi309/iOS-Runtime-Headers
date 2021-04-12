/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


#import <CoreDuet/CoreDuet-Structs.h>
@class NSDate, NSString, _CDSizeMetricFamily;

@interface _CDSizeMetric : NSObject {

	os_unfair_lock_s _lock;
	unsigned long long _scale;
	unsigned long long _count;
	unsigned long long _firstSize;
	unsigned long long _lastSize;
	unsigned long long _minimumSize;
	unsigned long long _maximumSize;
	unsigned long long _totalSizes;
	NSDate* _firstUpdate;
	NSDate* _lastUpdate;
	NSString* _name;
	NSString* _string;
	_CDSizeMetricFamily* _family;

}

@property (__weak,readonly) _CDSizeMetricFamily * family;              //@synthesize family=_family - In the implementation block
@property (readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (readonly) NSString * string;                                //@synthesize string=_string - In the implementation block
@property (readonly) unsigned long long count; 
@property (readonly) NSDate * firstUpdate; 
@property (readonly) unsigned long long firstSize; 
@property (readonly) NSDate * lastUpdate; 
@property (readonly) unsigned long long lastSize; 
@property (readonly) unsigned long long minimumSize; 
@property (readonly) unsigned long long maximumSize; 
@property (readonly) double averageSize; 
-(NSString *)string;
-(NSString *)name;
-(unsigned long long)count;
-(_CDSizeMetricFamily *)family;
-(NSDate *)lastUpdate;
-(id)initWithName:(id)arg1 string:(id)arg2 scale:(unsigned long long)arg3 family:(id)arg4 ;
-(unsigned long long)firstSize;
-(unsigned long long)lastSize;
-(unsigned long long)minimumSize;
-(unsigned long long)maximumSize;
-(double)averageSize;
-(NSDate *)firstUpdate;
@end

