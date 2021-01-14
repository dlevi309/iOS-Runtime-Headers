/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSString;


@protocol _GEOThrottler <NSObject>
@property (nonatomic,readonly) NSString * keyPath; 
@property (nonatomic,readonly) double timeWindow; 
@required
+(BOOL)stateIsExpired:(id)arg1;
-(id)captureState;
-(unsigned)maxReqCount;
-(double)timeWindow;
-(BOOL)addRequestTimestamp;
-(id)initWithKeyPath:(id)arg1 requestCount:(unsigned long long)arg2 interval:(double)arg3 savedState:(id)arg4;
-(BOOL)isExpired;
-(unsigned long long)remainingEntries;
-(NSString *)keyPath;
-(double)timeUntilReset;
-(id)userInfoForError;

@end

