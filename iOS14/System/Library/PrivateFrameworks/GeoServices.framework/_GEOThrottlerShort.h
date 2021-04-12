/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/_GEOThrottler.h>

@class NSString;

@interface _GEOThrottlerShort : NSObject <_GEOThrottler> {

	NSString* _keyPath;
	vector<(anonymous namespace)::Timestamp, std::__1::allocator<(anonymous namespace)::Timestamp> >* _lastRequestTimes;
	unsigned _currentIndex;
	double _timeWindow;

}

@property (nonatomic,readonly) NSString * keyPath;                  //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) double timeWindow;                   //@synthesize timeWindow=_timeWindow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)stateIsExpired:(id)arg1 ;
-(id)captureState;
-(unsigned)maxReqCount;
-(NSString *)description;
-(double)timeWindow;
-(BOOL)addRequestTimestamp;
-(id)initWithKeyPath:(id)arg1 requestCount:(unsigned long long)arg2 interval:(double)arg3 savedState:(id)arg4 ;
-(BOOL)isExpired;
-(unsigned long long)remainingEntries;
-(NSString *)keyPath;
-(double)timeUntilReset;
-(id)userInfoForError;
@end

