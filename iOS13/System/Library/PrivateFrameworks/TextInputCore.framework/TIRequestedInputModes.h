/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject, NSMutableDictionary;

@interface TIRequestedInputModes : NSObject {

	BOOL _didLoad;
	NSURL* _databaseURL;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableDictionary* _inputModesByDate;

}
+(id)defaultDatabaseURL;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(void)_loadIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)_saveInputModes;
-(id)_inputModes;
-(void)_inputModes:(/*^block*/id)arg1 ;
-(void)_addInputMode:(id)arg1 date:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_removeInputModesBeforeDate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_removeAllInputModes:(/*^block*/id)arg1 ;
-(void)inputModes:(/*^block*/id)arg1 ;
-(void)addInputMode:(id)arg1 date:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)removeInputModesBeforeDate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)removeAllInputModes:(/*^block*/id)arg1 ;
@end

