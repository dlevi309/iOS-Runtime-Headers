/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/_GEOThrottler.h>

@class NSString;

@interface _GEOThrottlerLong : NSObject <_GEOThrottler> {

	NSString* _keyPath;
	unsigned _maxRequestCount;
	double _timeWindow;
	unsigned _currentRequestCount;
	double _lastResetTime;
	double _lastUseTime;

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
-(double)expiresAt;
-(double)timeWindow;
-(BOOL)addRequestTimestamp;
-(id)initWithKeyPath:(id)arg1 requestCount:(unsigned long long)arg2 interval:(double)arg3 savedState:(id)arg4 ;
-(BOOL)isExpired;
-(unsigned long long)remainingEntries;
-(NSString *)keyPath;
-(double)timeUntilReset;
-(id)userInfoForError;
-(void)loadState:(id)arg1 ;
@end

