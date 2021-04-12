/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSString;


@protocol _GEOThrottler <NSObject>
@property (nonatomic,readonly) NSString * keyPath; 
@property (nonatomic,readonly) double timeWindow; 
@required
+(BOOL)stateIsExpired:(id)arg1;
-(NSString *)keyPath;
-(BOOL)isExpired;
-(unsigned long long)remainingEntries;
-(unsigned)maxReqCount;
-(double)timeWindow;
-(double)timeUntilReset;
-(id)userInfoForError;
-(BOOL)addRequestTimestamp;
-(id)captureState;
-(id)initWithKeyPath:(id)arg1 requestCount:(unsigned long long)arg2 interval:(double)arg3 savedState:(id)arg4;

@end

