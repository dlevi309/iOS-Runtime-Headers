/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSDate;

@interface PPSourceStats : NSObject {

	long long _minRefCount;
	long long _maxRefCount;
	double _avgRefCount;
	double _medianRefCount;
	NSDate* _earliestDate;
	NSDate* _latestDate;
	long long _uniqueBundleIdCount;
	long long _uniqueDocIdCount;

}

@property (nonatomic,readonly) long long minRefCount;                      //@synthesize minRefCount=_minRefCount - In the implementation block
@property (nonatomic,readonly) long long maxRefCount;                      //@synthesize maxRefCount=_maxRefCount - In the implementation block
@property (nonatomic,readonly) double avgRefCount;                         //@synthesize avgRefCount=_avgRefCount - In the implementation block
@property (nonatomic,readonly) double medianRefCount;                      //@synthesize medianRefCount=_medianRefCount - In the implementation block
@property (nonatomic,readonly) NSDate * earliestDate;                      //@synthesize earliestDate=_earliestDate - In the implementation block
@property (nonatomic,readonly) NSDate * latestDate;                        //@synthesize latestDate=_latestDate - In the implementation block
@property (nonatomic,readonly) long long uniqueBundleIdCount;              //@synthesize uniqueBundleIdCount=_uniqueBundleIdCount - In the implementation block
@property (nonatomic,readonly) long long uniqueDocIdCount;                 //@synthesize uniqueDocIdCount=_uniqueDocIdCount - In the implementation block
-(id)toDictionary;
-(NSDate *)earliestDate;
-(id)initWithMinRefCount:(long long)arg1 maxRefCount:(long long)arg2 avgRefCount:(double)arg3 medianRefCount:(double)arg4 earliestDate:(id)arg5 latestDate:(id)arg6 uniqueBundleIdCount:(long long)arg7 uniqueDocIdCount:(long long)arg8 ;
-(long long)minRefCount;
-(long long)maxRefCount;
-(double)avgRefCount;
-(double)medianRefCount;
-(NSDate *)latestDate;
-(long long)uniqueBundleIdCount;
-(long long)uniqueDocIdCount;
@end

