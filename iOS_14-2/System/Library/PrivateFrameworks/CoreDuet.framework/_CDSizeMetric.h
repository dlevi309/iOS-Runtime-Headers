/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithName:(id)arg1 string:(id)arg2 scale:(unsigned long long)arg3 family:(id)arg4 ;
@end

