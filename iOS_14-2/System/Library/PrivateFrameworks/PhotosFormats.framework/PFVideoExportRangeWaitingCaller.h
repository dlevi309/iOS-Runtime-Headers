/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


@protocol OS_dispatch_semaphore;
#import <PhotosFormats/PhotosFormats-Structs.h>
@class NSObject;

@interface PFVideoExportRangeWaitingCaller : NSObject {

	BOOL _requestedRangeIsAvailable;
	BOOL _cancelled;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSRange _requestedRange;

}

@property (retain) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
@property (assign) NSRange requestedRange;                                  //@synthesize requestedRange=_requestedRange - In the implementation block
@property (assign) BOOL requestedRangeIsAvailable;                          //@synthesize requestedRangeIsAvailable=_requestedRangeIsAvailable - In the implementation block
@property (assign) BOOL cancelled;                                          //@synthesize cancelled=_cancelled - In the implementation block
+(id)waitingCallerWithRequestedRange:(NSRange)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)cancelled;
-(id)init;
-(void)waitWithTimeout:(unsigned long long)arg1 ;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)resume;
-(BOOL)canResumeForRange:(NSRange)arg1 ;
-(NSRange)requestedRange;
-(void)setRequestedRange:(NSRange)arg1 ;
-(BOOL)requestedRangeIsAvailable;
-(void)setRequestedRangeIsAvailable:(BOOL)arg1 ;
@end

