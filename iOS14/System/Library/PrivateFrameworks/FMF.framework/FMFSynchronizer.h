/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
*/


@protocol OS_dispatch_semaphore;
@class NSObject, NSString;

@interface FMFSynchronizer : NSObject {

	BOOL _timeoutOccurred;
	double _timeout;
	NSObject*<OS_dispatch_semaphore> _sem;
	NSString* _info;

}

@property (assign,nonatomic) BOOL timeoutOccurred;                              //@synthesize timeoutOccurred=_timeoutOccurred - In the implementation block
@property (assign,nonatomic) double timeout;                                    //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSString * info;                                   //@synthesize info=_info - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> sem;              //@synthesize sem=_sem - In the implementation block
-(NSObject*<OS_dispatch_semaphore>)sem;
-(NSString *)info;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)setSem:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)wait;
-(void)setTimeoutOccurred:(BOOL)arg1 ;
-(void)setInfo:(NSString *)arg1 ;
-(void)signal;
-(id)initWithDescription:(id)arg1 andTimeout:(double)arg2 ;
-(BOOL)timeoutOccurred;
-(id)loggingID;
@end

