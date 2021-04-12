/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)perfMetricForFetchRequest:(id)arg1 type:(id)arg2 ;
-(NSString *)string;
-(NSString *)name;
-(unsigned long long)count;
-(_CDPerfMetricFamily *)family;
-(id)initWithName:(id)arg1 string:(id)arg2 family:(id)arg3 ;
-(double)lastElapsedTime;
-(double)minimumElapsedTime;
-(double)maximumElapsedTime;
-(double)averageElapsedTime;
-(NSDate *)lastUpdate;
-(unsigned long long)lastResultCount;
-(unsigned long long)errorCount;
-(double)totalElapsedTime;
@end

