/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
*/


@protocol AFServiceHelper, OS_dispatch_queue;
@class CFCommandQueuer, NSObject;

@interface CFClient : NSObject {

	id<AFServiceHelper> _serviceHelper;
	CFCommandQueuer* _commandQueuer;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) id<AFServiceHelper> serviceHelper;               //@synthesize serviceHelper=_serviceHelper - In the implementation block
@property (retain) CFCommandQueuer * commandQueuer;                 //@synthesize commandQueuer=_commandQueuer - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)executeCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)warmUpWithSignal:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelOperationsForRequestID:(id)arg1 ;
-(void)resetScriptExecutorCache;
-(id<AFServiceHelper>)serviceHelper;
-(void)setServiceHelper:(id<AFServiceHelper>)arg1 ;
-(id)initWithServiceHelper:(id)arg1 withConnectionName:(id)arg2 ;
-(id)initWithClientLiteWithConnectionName:(id)arg1 ;
-(void)rebootScripter;
-(CFCommandQueuer *)commandQueuer;
-(void)setCommandQueuer:(CFCommandQueuer *)arg1 ;
-(void)_executeRemoteCommand:(id)arg1 peerInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)runMaintenanceWithCompletion:(/*^block*/id)arg1 ;
-(void)executeCommand:(id)arg1 peerInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

