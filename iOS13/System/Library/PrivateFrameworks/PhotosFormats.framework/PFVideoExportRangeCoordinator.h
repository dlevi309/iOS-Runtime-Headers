/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


@protocol OS_dispatch_queue;
#import <PhotosFormats/PhotosFormats-Structs.h>
@class NSMutableArray, NSObject;

@interface PFVideoExportRangeCoordinator : NSObject {

	BOOL _cancelled;
	NSMutableArray* _waitingCallers;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSRange _availableRange;

}

@property (assign) NSRange availableRange;                               //@synthesize availableRange=_availableRange - In the implementation block
@property (retain) NSMutableArray * waitingCallers;                      //@synthesize waitingCallers=_waitingCallers - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> stateQueue;              //@synthesize stateQueue=_stateQueue - In the implementation block
@property (assign) BOOL cancelled;                                       //@synthesize cancelled=_cancelled - In the implementation block
-(id)init;
-(void)cancel;
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)stateQueue;
-(void)setStateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)waitForAvailabilityOfRange:(NSRange)arg1 timeout:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)updateAvailableRange:(NSRange)arg1 ;
-(NSRange)availableRange;
-(void)setAvailableRange:(NSRange)arg1 ;
-(NSMutableArray *)waitingCallers;
-(void)setWaitingCallers:(NSMutableArray *)arg1 ;
@end

