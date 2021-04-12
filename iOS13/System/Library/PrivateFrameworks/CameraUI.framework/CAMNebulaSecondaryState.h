/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)stopTime;
-(BOOL)writeToFile:(id)arg1 ;
-(void)setStopTime:(NSDate *)arg1 ;
-(long long)stopReasons;
-(BOOL)addStopReasons:(long long)arg1 stopTime:(id)arg2 ;
-(void)setStopReasons:(long long)arg1 ;
-(void)notifyWillAttemptToWriteMovie;
-(void)setFailedStateReadAttemptsCount:(long long)arg1 ;
-(long long)failedStateReadAttemptsCount;
-(NSDate *)lastMovieWriteAttemptTime;
-(long long)movieWriteAttemptsCount;
@end

