/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
*/


@protocol OS_dispatch_semaphore;
@class NSString, NSObject;

@interface FMSynchronizer : NSObject {

	BOOL _timeoutOccurred;
	double _timeout;
	NSString* _info;
	NSObject*<OS_dispatch_semaphore> _sem;

}

@property (assign,nonatomic) BOOL timeoutOccurred;                              //@synthesize timeoutOccurred=_timeoutOccurred - In the implementation block
@property (assign,nonatomic) double timeout;                                    //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSString * info;                                   //@synthesize info=_info - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> sem;              //@synthesize sem=_sem - In the implementation block
-(void)wait;
-(void)signal;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)sem;
-(NSString *)info;
-(void)setInfo:(NSString *)arg1 ;
-(void)setSem:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setTimeoutOccurred:(BOOL)arg1 ;
-(BOOL)timeoutOccurred;
-(id)initWithDescription:(id)arg1 andTimeout:(double)arg2 ;
@end

