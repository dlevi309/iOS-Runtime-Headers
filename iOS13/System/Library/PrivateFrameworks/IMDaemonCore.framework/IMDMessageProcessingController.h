/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)messageProcessingTaskAdded:(id)arg1 ;
-(id)initWithMessagesPTaskStore:(id)arg1 ;
-(void)_scheduleDeferredProcessingWithTimeInterval:(double)arg1 ;
-(void)_processingTimerFired;
-(void)_indexSpotlightIfNeedForPTask:(id)arg1 ;
-(BOOL)_pref_IMDCoreSpotlightHasMigrated;
-(void)_xpc_IMDCoreSpotlightAddMessageGUID:(id)arg1 ;
-(void)scheduleInitialProcessingCheck;
-(id<IMDMessagePTaskStore>)pTaskStore;
-(void)setPTaskStore:(id<IMDMessagePTaskStore>)arg1 ;
-(NSTimer *)processingTimer;
-(void)setProcessingTimer:(NSTimer *)arg1 ;
@end

