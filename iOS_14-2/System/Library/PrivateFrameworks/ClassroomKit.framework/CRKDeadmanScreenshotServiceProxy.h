/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/CRKScreenshotServiceInterface.h>

@protocol CRKScreenshotServiceInterface;
@class NSTimer;

@interface CRKDeadmanScreenshotServiceProxy : NSObject <CRKScreenshotServiceInterface> {

	id<CRKScreenshotServiceInterface> _underlyingProxy;
	double _timeout;
	unsigned long long _countOfInFlightRequests;
	NSTimer* _timer;

}

@property (nonatomic,readonly) double timeout;                                               //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) id<CRKScreenshotServiceInterface> underlyingProxy;              //@synthesize underlyingProxy=_underlyingProxy - In the implementation block
@property (assign,nonatomic) unsigned long long countOfInFlightRequests;                     //@synthesize countOfInFlightRequests=_countOfInFlightRequests - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                                //@synthesize timer=_timer - In the implementation block
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(void)startTimer;
-(id)initWithTimeout:(double)arg1 ;
-(void)stopTimer;
-(double)timeout;
-(void)dealloc;
-(void)fetchScreenshotDataWithMaximumSizeInPixels:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)countOfInFlightRequests;
-(void)setCountOfInFlightRequests:(unsigned long long)arg1 ;
-(id<CRKScreenshotServiceInterface>)underlyingProxy;
-(void)setUnderlyingProxy:(id<CRKScreenshotServiceInterface>)arg1 ;
@end

