/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/


@protocol OS_dispatch_queue, EFCancelable;
@class NSObject;

@interface EMCollectionItemIDStateCapturer : NSObject {

	NSObject*<OS_dispatch_queue> _stateCaptureQueue;
	id<EFCancelable> _stateCaptureCancelable;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> stateCaptureQueue;              //@synthesize stateCaptureQueue=_stateCaptureQueue - In the implementation block
@property (nonatomic,readonly) id<EFCancelable> stateCaptureCancelable;                     //@synthesize stateCaptureCancelable=_stateCaptureCancelable - In the implementation block
-(id<EFCancelable>)stateCaptureCancelable;
-(id)initWithTitle:(id)arg1 delegate:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)stateCaptureQueue;
-(void)dealloc;
@end

