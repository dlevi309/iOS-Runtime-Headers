/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSProgress.h>

@protocol NSProgressPublisher;
@interface _NSProgressProxy : NSProgress {

	id<NSProgressPublisher> _forwarder;
	BOOL _isOld;
	/*^block*/id _unpublishingHandler;

}
-(void)dealloc;
-(void)cancel;
-(void)pause;
-(void)resume;
-(void)prioritize;
-(void)setTotalUnitCount:(long long)arg1 ;
-(void)becomeCurrentWithPendingUnitCount:(long long)arg1 ;
-(void)resignCurrent;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(void)setCancellationHandler:(/*^block*/id)arg1 ;
-(void)setPausingHandler:(/*^block*/id)arg1 ;
-(double)fractionCompleted;
-(void)publish;
-(void)unpublish;
-(void)setLocalizedDescription:(id)arg1 ;
-(void)setCancellable:(BOOL)arg1 ;
-(void)setPausable:(BOOL)arg1 ;
-(id)estimatedTimeRemaining;
-(void)setEstimatedTimeRemaining:(id)arg1 ;
-(id)throughput;
-(void)setThroughput:(id)arg1 ;
-(id)fileOperationKind;
-(void)setFileOperationKind:(id)arg1 ;
-(id)fileURL;
-(void)setFileURL:(id)arg1 ;
-(id)fileTotalCount;
-(void)setFileTotalCount:(id)arg1 ;
-(id)fileCompletedCount;
-(void)setFileCompletedCount:(id)arg1 ;
-(id)byteTotalCount;
-(void)setByteTotalCount:(id)arg1 ;
-(id)byteCompletedCount;
-(void)setByteCompletedCount:(id)arg1 ;
-(void)setKind:(id)arg1 ;
-(void)acknowledgeWithSuccess:(BOOL)arg1 ;
-(BOOL)isOld;
-(void)setPrioritizable:(BOOL)arg1 ;
-(void)setPrioritizationHandler:(/*^block*/id)arg1 ;
-(void)_setRemoteUserInfoValue:(id)arg1 forKey:(id)arg2 ;
-(void)_setRemoteValues:(id)arg1 forKeys:(id)arg2 ;
-(id)_initWithForwarder:(id)arg1 values:(id)arg2 isOld:(BOOL)arg3 ;
-(void)_invokePublishingHandler:(/*^block*/id)arg1 ;
-(void)_invokeUnpublishingHandler;
-(void)_acknowledgeWithSuccess:(BOOL)arg1 ;
@end

