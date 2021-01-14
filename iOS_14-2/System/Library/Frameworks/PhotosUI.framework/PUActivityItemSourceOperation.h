/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <Foundation/NSOperation.h>

@protocol PUActivityItemSourceOperationDelegate, OS_dispatch_semaphore;
@class NSObject, NSString;

@interface PUActivityItemSourceOperation : NSOperation {

	BOOL __pu_cancelled;
	id<PUActivityItemSourceOperationDelegate> _delegate;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSString* _activityType;

}

@property (copy,readonly) NSString * activityType;                                           //@synthesize activityType=_activityType - In the implementation block
@property (setter=_pu_setCancelled:,getter=_pu_isCancelled) BOOL _pu_cancelled;              //@synthesize _pu_cancelled=__pu_cancelled - In the implementation block
@property (__weak,readonly) id<PUActivityItemSourceOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=pu_isCancelled,readonly) BOOL pu_cancelled; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> semaphore;                   //@synthesize semaphore=_semaphore - In the implementation block
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(NSString *)activityType;
-(id<PUActivityItemSourceOperationDelegate>)delegate;
-(void)pu_cancel;
-(void)main;
-(BOOL)pu_isCancelled;
-(id)initWithDelegate:(id)arg1 activityType:(id)arg2 ;
-(BOOL)_pu_isCancelled;
-(void)_pu_setCancelled:(BOOL)arg1 ;
@end

