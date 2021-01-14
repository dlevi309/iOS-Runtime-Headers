/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDSampleIterator.h>

@class HKSample, HDSampleQueryDescription, NSArray, HKSortedQueryAnchor, NSSet, HDProfile, NSError, NSString;

@interface HDSortedSampleIterator : NSObject <HDSampleIterator> {

	HDSampleQueryDescription* _sampleQueryDescription;
	NSArray* _sortDescriptors;
	HKSortedQueryAnchor* _anchor;
	long long _bufferSize;
	NSSet* _restrictedSourceEntities;
	HDProfile* _profile;
	NSError* _lastError;
	BOOL _isComplete;
	vector<std::__1::tuple<long long, HKSample *>, std::__1::allocator<std::__1::tuple<long long, HKSample *> > >* _buffer;
	tuple<long long, HKSample *> _current;

}

@property (nonatomic,copy,readonly) HKSortedQueryAnchor * nextAnchor; 
@property (nonatomic,readonly) HKSample * sample; 
@property (nonatomic,readonly) long long objectID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKSample *)sample;
-(id)init;
-(id)object;
-(HKSortedQueryAnchor *)nextAnchor;
-(long long)objectID;
-(unsigned long long)hash;
-(BOOL)_queryForNextPageIfNecessaryWithError:(id*)arg1 ;
-(BOOL)advanceWithError:(id*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSampleQueryDescription:(id)arg1 sortDescriptors:(id)arg2 anchor:(id)arg3 bufferSize:(long long)arg4 profile:(id)arg5 ;
@end

