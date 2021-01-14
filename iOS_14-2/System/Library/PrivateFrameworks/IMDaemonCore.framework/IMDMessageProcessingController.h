/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@protocol IMDMessagePTaskStore;
@class NSTimer;

@interface IMDMessageProcessingController : NSObject {

	id<IMDMessagePTaskStore> _pTaskStore;
	NSTimer* _processingTimer;

}

@property (nonatomic,retain) id<IMDMessagePTaskStore> pTaskStore;              //@synthesize pTaskStore=_pTaskStore - In the implementation block
@property (nonatomic,retain) NSTimer * processingTimer;                        //@synthesize processingTimer=_processingTimer - In the implementation block
-(id)init;
-(void)messageProcessingTaskAdded:(id)arg1 ;
-(void)_indexSpotlightIfNeedForPTask:(id)arg1 ;
-(id)initWithMessagesPTaskStore:(id)arg1 ;
-(void)_xpc_IMDCoreSpotlightAddMessageGUID:(id)arg1 ;
-(void)setProcessingTimer:(NSTimer *)arg1 ;
-(BOOL)_pref_IMDCoreSpotlightHasMigrated;
-(void)_scheduleDeferredProcessingWithTimeInterval:(double)arg1 ;
-(id<IMDMessagePTaskStore>)pTaskStore;
-(NSTimer *)processingTimer;
-(void)scheduleInitialProcessingCheck;
-(void)_processingTimerFired;
-(void)setPTaskStore:(id<IMDMessagePTaskStore>)arg1 ;
-(void)dealloc;
@end

