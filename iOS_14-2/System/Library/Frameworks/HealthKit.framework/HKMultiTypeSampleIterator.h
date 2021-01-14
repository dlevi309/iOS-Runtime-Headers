/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/HKIterator.h>

@class NSArray, HKQueryAnchor, HKHealthStore, HKMultiTypeQueryCursor, NSMutableArray, HKSample, NSString;

@interface HKMultiTypeSampleIterator : NSObject <HKIterator> {

	NSArray* _sampleQueryDescriptions;
	NSArray* _sortDescriptors;
	HKQueryAnchor* _followingAnchor;
	HKQueryAnchor* _upToAndIncludingAnchor;
	NSArray* _distinctByKeyPaths;
	unsigned long long _bufferSize;
	unsigned long long _limit;
	HKHealthStore* _healthStore;
	unsigned long long _state;
	HKMultiTypeQueryCursor* _queryCursor;
	NSMutableArray* _buffer;
	HKSample* _current;
	unsigned long long _numberOfSamplesDelivered;

}

@property (nonatomic,copy,readonly) HKSample * sample; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSampleQueryDescriptions:(id)arg1 sortDescriptors:(id)arg2 followingAnchor:(id)arg3 upToAndIncludingAnchor:(id)arg4 distinctByKeyPaths:(id)arg5 bufferSize:(unsigned long long)arg6 limit:(unsigned long long)arg7 healthStore:(id)arg8 ;
-(HKSample *)sample;
-(id)init;
-(id)object;
-(BOOL)_queryForNextPageIfNecessaryWithError:(id*)arg1 ;
-(BOOL)advanceWithError:(id*)arg1 ;
-(id)initWithSampleQueryDescriptions:(id)arg1 sortDescriptors:(id)arg2 bufferSize:(long long)arg3 healthStore:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

