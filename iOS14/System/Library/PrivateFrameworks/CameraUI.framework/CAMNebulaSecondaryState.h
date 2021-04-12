/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface CAMNebulaSecondaryState : NSObject <NSSecureCoding> {

	NSDate* _stopTime;
	long long _stopReasons;
	NSDate* _lastMovieWriteAttemptTime;
	long long _movieWriteAttemptsCount;
	long long _failedStateReadAttemptsCount;

}

@property (nonatomic,retain) NSDate * stopTime;                                   //@synthesize stopTime=_stopTime - In the implementation block
@property (assign,nonatomic) long long stopReasons;                               //@synthesize stopReasons=_stopReasons - In the implementation block
@property (nonatomic,readonly) NSDate * lastMovieWriteAttemptTime;                //@synthesize lastMovieWriteAttemptTime=_lastMovieWriteAttemptTime - In the implementation block
@property (nonatomic,readonly) long long movieWriteAttemptsCount;                 //@synthesize movieWriteAttemptsCount=_movieWriteAttemptsCount - In the implementation block
@property (assign,nonatomic) long long failedStateReadAttemptsCount;              //@synthesize failedStateReadAttemptsCount=_failedStateReadAttemptsCount - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)secondaryStateWithContentsOfFile:(id)arg1 ;
-(NSDate *)stopTime;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setStopTime:(NSDate *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)writeToFile:(id)arg1 ;
-(long long)stopReasons;
-(BOOL)addStopReasons:(long long)arg1 stopTime:(id)arg2 ;
-(void)setStopReasons:(long long)arg1 ;
-(void)notifyWillAttemptToWriteMovie;
-(void)setFailedStateReadAttemptsCount:(long long)arg1 ;
-(long long)failedStateReadAttemptsCount;
-(NSDate *)lastMovieWriteAttemptTime;
-(long long)movieWriteAttemptsCount;
@end

