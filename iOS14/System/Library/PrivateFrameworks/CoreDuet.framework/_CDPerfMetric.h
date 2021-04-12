/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


#import <CoreDuet/CoreDuet-Structs.h>
@class NSString, _CDPerfMetricFamily, NSDate;

@interface _CDPerfMetric : NSObject {

	os_unfair_lock_s _lock;
	unsigned long long _count;
	double _lastElapsedTime;
	double _minimumElapsedTime;
	double _maximumElapsedTime;
	double _totalElapsedTime;
	double _lastUpdateTime;
	unsigned long long _lastResultCount;
	unsigned long long _errorCount;
	NSString* _name;
	NSString* _string;
	_CDPerfMetricFamily* _family;

}

@property (__weak,readonly) _CDPerfMetricFamily * family;              //@synthesize family=_family - In the implementation block
@property (readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (readonly) NSString * string;                                //@synthesize string=_string - In the implementation block
@property (readonly) unsigned long long count; 
@property (readonly) NSDate * lastUpdate; 
@property (readonly) double lastElapsedTime; 
@property (readonly) double totalElapsedTime;                          //@synthesize totalElapsedTime=_totalElapsedTime - In the implementation block
@property (readonly) double minimumElapsedTime; 
@property (readonly) double maximumElapsedTime; 
@property (readonly) double averageElapsedTime; 
@property (readonly) unsigned long long lastResultCount; 
@property (readonly) unsigned long long errorCount; 
-(NSDate *)lastUpdate;
-(unsigned long long)count;
-(_CDPerfMetricFamily *)family;
-(NSString *)name;
-(id)initWithName:(id)arg1 string:(id)arg2 family:(id)arg3 ;
-(double)lastElapsedTime;
-(double)minimumElapsedTime;
-(double)maximumElapsedTime;
-(double)averageElapsedTime;
-(unsigned long long)lastResultCount;
-(double)totalElapsedTime;
-(NSString *)string;
-(unsigned long long)errorCount;
@end

