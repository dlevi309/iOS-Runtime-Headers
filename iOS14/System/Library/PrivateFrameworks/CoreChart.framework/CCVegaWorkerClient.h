/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/


@protocol CCVegaWorkerClientDelegate;
@class NSMutableDictionary, CCVegaWorker, NSObject;

@interface CCVegaWorkerClient : NSObject {

	NSMutableDictionary* _expressionFunctions;
	BOOL isValid;
	CCVegaWorker* worker;
	NSObject*<CCVegaWorkerClientDelegate> delegate;

}

@property (retain) CCVegaWorker * worker; 
@property (__weak) NSObject*<CCVegaWorkerClientDelegate> delegate; 
@property (assign) BOOL isValid; 
-(CCVegaWorker *)worker;
-(NSObject*<CCVegaWorkerClientDelegate>)delegate;
-(void)setDelegate:(NSObject*<CCVegaWorkerClientDelegate>)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
-(BOOL)isValid;
-(void)setWorker:(CCVegaWorker *)arg1 ;
-(void)registerExpressionFunction:(/*^block*/id)arg1 withName:(id)arg2 ;
-(id)evaluateExpressionFunction:(id)arg1 ;
-(void)clientEnter;
-(void)clientDidExecuteTimerCallback;
-(void)clientExit;
-(void)waitForWorker;
-(id)initWithWorker:(id)arg1 delegate:(id)arg2 ;
-(void)runBlockAsync:(/*^block*/id)arg1 ;
-(void)runBlockSync:(/*^block*/id)arg1 ;
@end

