/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/


@protocol OS_dispatch_queue;
@class NSLock, SCROConnection, SCRCTargetSelectorTimer, NSObject;

@interface SCROScriptClient : NSObject {

	NSLock* _lock;
	SCROConnection* _connection;
	SCRCTargetSelectorTimer* _timer;
	BOOL _isReady;
	NSObject*<OS_dispatch_queue> __scriptDispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> _scriptDispatchQueue;              //@synthesize _scriptDispatchQueue=__scriptDispatchQueue - In the implementation block
+(id)sharedClient;
-(id)init;
-(void)dealloc;
-(BOOL)_isReady;
-(void)handleCallback:(id)arg1 ;
-(id)_lazyConnection;
-(void)_killConnection;
-(NSObject*<OS_dispatch_queue>)_scriptDispatchQueue;
-(BOOL)runScriptFile:(id)arg1 ;
-(void)set_scriptDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

