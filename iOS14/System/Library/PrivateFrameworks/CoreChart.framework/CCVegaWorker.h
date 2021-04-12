/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, JSContext, JSVirtualMachine, CCVegaJSDocument, CCVegaWorkerClient;

@interface CCVegaWorker : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	int _currentTimerIndex;
	NSMutableDictionary* _timers;
	BOOL _vegaLiteLoaded;
	BOOL _vegaParserLoaded;
	JSContext* context;
	JSVirtualMachine* virtualMachine;
	CCVegaJSDocument* document;
	CCVegaWorkerClient* currentClient;
	unsigned long long _dispatchQueueID;
	/*^block*/id _onDealloc;

}

@property (retain) JSVirtualMachine * virtualMachine; 
@property (retain) JSContext * context; 
@property (nonatomic,retain) CCVegaJSDocument * document; 
@property (__weak) CCVegaWorkerClient * currentClient; 
@property (copy) id onDealloc;                                         //@synthesize onDealloc=_onDealloc - In the implementation block
@property (readonly) unsigned long long dispatchQueueID;               //@synthesize dispatchQueueID=_dispatchQueueID - In the implementation block
+(void)cleanUp;
+(void)cleanUpWithCallback:(/*^block*/id)arg1 ;
+(id)sharedWorker;
-(id)initWithQueue:(id)arg1 ;
-(id)init;
-(void)setDocument:(CCVegaJSDocument *)arg1 ;
-(JSVirtualMachine *)virtualMachine;
-(void)setupContext;
-(id)dispatchQueue;
-(JSContext *)context;
-(CCVegaWorkerClient *)currentClient;
-(void)setupConsole;
-(CCVegaJSDocument *)document;
-(void)dealloc;
-(void)setContext:(JSContext *)arg1 ;
-(void)registerExpressionFunction:(/*^block*/id)arg1 withName:(id)arg2 ;
-(void)setVirtualMachine:(JSVirtualMachine *)arg1 ;
-(void)setupTimerFunctions;
-(void)registerProxyExpressionFunction:(id)arg1 ;
-(int)nextTimerIndex;
-(void)setOnDealloc:(id)arg1 ;
-(void)requireVegaLite;
-(void)requireVegaParser;
-(void)waitForWorker;
-(void)setCurrentClient:(CCVegaWorkerClient *)arg1 ;
-(unsigned long long)dispatchQueueID;
-(id)onDealloc;
@end

