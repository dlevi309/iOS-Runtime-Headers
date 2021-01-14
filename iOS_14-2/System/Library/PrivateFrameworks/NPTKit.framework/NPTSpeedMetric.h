/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NPTKit.framework/NPTKit
*/

#import <NPTKit/NPTKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface NPTSpeedMetric : NSObject <NSCopying> {

	NSDate* _pointInTime;
	double _timeSinceStart;
	long long _bytesTransferred;
	long long _totalBytesExpected;

}

@property (nonatomic,retain) NSDate * pointInTime;                      //@synthesize pointInTime=_pointInTime - In the implementation block
@property (assign,nonatomic) double timeSinceStart;                     //@synthesize timeSinceStart=_timeSinceStart - In the implementation block
@property (assign,nonatomic) long long bytesTransferred;                //@synthesize bytesTransferred=_bytesTransferred - In the implementation block
@property (assign,nonatomic) long long totalBytesExpected;              //@synthesize totalBytesExpected=_totalBytesExpected - In the implementation block
-(void)setBytesTransferred:(long long)arg1 ;
-(long long)bytesTransferred;
-(double)speed;
-(double)timeSinceStart;
-(void)setTimeSinceStart:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPointInTime:(id)arg1 timeSinceStart:(double)arg2 bytesTransferred:(long long)arg3 totalBytesExpected:(long long)arg4 ;
-(NSDate *)pointInTime;
-(void)setPointInTime:(NSDate *)arg1 ;
-(long long)totalBytesExpected;
-(void)setTotalBytesExpected:(long long)arg1 ;
@end

