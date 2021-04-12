/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDSampleIterator.h>
#import <libobjc.A.dylib/HDRestorableIterator.h>

@class NSArray, HDProfile, HKSortedQueryAnchor, NSMutableArray, HDSortedSampleIterator, HKSample, NSString;

@interface HDMultiTypeSortedSampleIterator : NSObject <HDSampleIterator, HDRestorableIterator> {

	NSArray* _sampleQueryDescriptions;
	NSArray* _sortDescriptors;
	long long _bufferSize;
	HDProfile* _profile;
	HKSortedQueryAnchor* _anchor;
	NSMutableArray* _iterators;
	HDSortedSampleIterator* _nextIterator;
	BOOL _isInitialized;

}

@property (nonatomic,readonly) HKSample * sample; 
@property (nonatomic,readonly) long long objectID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_upstreamIteratorsWithSampleQueryDescriptions:(id)arg1 sortDescriptors:(id)arg2 anchor:(id)arg3 bufferSize:(long long)arg4 profile:(id)arg5 ;
-(HKSample *)sample;
-(id)init;
-(id)object;
-(long long)objectID;
-(unsigned long long)hash;
-(BOOL)advanceWithError:(id*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)_prepareIteratorsWithError:(id*)arg1 ;
-(id)initForCopying;
-(BOOL)restoreIteratorStateFromData:(id)arg1 error:(id*)arg2 ;
-(id)iteratorStateData;
-(id)initWithSampleQueryDescriptions:(id)arg1 sortDescriptors:(id)arg2 bufferSize:(long long)arg3 profile:(id)arg4 ;
@end

