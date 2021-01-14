/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDate, NSSet;

@interface PPSourceStats : NSObject <MLFeatureProvider> {

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
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(double)medianRefCount;
-(id)initWithMinRefCount:(long long)arg1 maxRefCount:(long long)arg2 avgRefCount:(double)arg3 medianRefCount:(double)arg4 earliestDate:(id)arg5 latestDate:(id)arg6 uniqueBundleIdCount:(long long)arg7 uniqueDocIdCount:(long long)arg8 ;
-(long long)minRefCount;
-(long long)maxRefCount;
-(double)avgRefCount;
-(id)toDictionary;
-(NSDate *)earliestDate;
-(NSDate *)latestDate;
-(long long)uniqueBundleIdCount;
-(long long)uniqueDocIdCount;
@end

