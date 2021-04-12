/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_isReady;
-(id)init;
-(void)handleCallback:(id)arg1 ;
-(void)dealloc;
-(id)_lazyConnection;
-(void)_killConnection;
-(NSObject*<OS_dispatch_queue>)_scriptDispatchQueue;
-(BOOL)runScriptFile:(id)arg1 ;
-(void)set_scriptDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

