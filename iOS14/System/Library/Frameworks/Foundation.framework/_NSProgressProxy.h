/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSProgress.h>

@protocol NSProgressPublisher;
@interface _NSProgressProxy : NSProgress {

	id<NSProgressPublisher> _forwarder;
	BOOL _isOld;
	/*^block*/id _unpublishingHandler;

}
-(void)resignCurrent;
-(void)setFileURL:(id)arg1 ;
-(BOOL)isOld;
-(void)setPausable:(BOOL)arg1 ;
-(void)setPrioritizable:(BOOL)arg1 ;
-(void)setCancellable:(BOOL)arg1 ;
-(void)pause;
-(void)unpublish;
-(void)setFileOperationKind:(id)arg1 ;
-(void)setByteCompletedCount:(id)arg1 ;
-(void)becomeCurrentWithPendingUnitCount:(long long)arg1 ;
-(void)setEstimatedTimeRemaining:(id)arg1 ;
-(void)setByteTotalCount:(id)arg1 ;
-(void)prioritize;
-(void)setPausingHandler:(/*^block*/id)arg1 ;
-(id)_initWithForwarder:(id)arg1 values:(id)arg2 isOld:(BOOL)arg3 ;
-(id)estimatedTimeRemaining;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(id)throughput;
-(id)fileURL;
-(void)setCancellationHandler:(/*^block*/id)arg1 ;
-(void)_setRemoteUserInfoValue:(id)arg1 forKey:(id)arg2 ;
-(void)publish;
-(void)setKind:(id)arg1 ;
-(void)_acknowledgeWithSuccess:(BOOL)arg1 ;
-(void)setThroughput:(id)arg1 ;
-(id)fileTotalCount;
-(id)byteTotalCount;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(void)setPrioritizationHandler:(/*^block*/id)arg1 ;
-(void)_setRemoteValues:(id)arg1 forKeys:(id)arg2 ;
-(void)_invokePublishingHandler:(/*^block*/id)arg1 ;
-(void)_invokeUnpublishingHandler;
-(id)fileOperationKind;
-(void)setTotalUnitCount:(long long)arg1 ;
-(void)setFileCompletedCount:(id)arg1 ;
-(void)setLocalizedDescription:(id)arg1 ;
-(void)setFileTotalCount:(id)arg1 ;
-(id)fileCompletedCount;
-(id)byteCompletedCount;
-(double)fractionCompleted;
-(void)acknowledgeWithSuccess:(BOOL)arg1 ;
-(void)cancel;
-(void)resume;
-(void)dealloc;
@end

