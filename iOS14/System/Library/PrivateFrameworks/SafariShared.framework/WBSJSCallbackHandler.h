/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSJSCallbackHandlerErrorReporter;
#import <SafariShared/SafariShared-Structs.h>
@class JSValue;

@interface WBSJSCallbackHandler : NSObject {

	OpaqueJSValueRef _callbackFunction;
	OpaqueJSValueRef _rejectFunction;
	id<WBSJSCallbackHandlerErrorReporter> _errorReporter;
	JSRetainPtr<OpaqueJSContext *>* _globalContext;

}

@property (nonatomic,readonly) OpaqueJSContextRef globalContext; 
@property (nonatomic,readonly) JSValue * jsValue; 
-(id)call;
-(id)initWithCallbackFunction:(OpaqueJSValueRef)arg1 errorReporter:(id)arg2 context:(OpaqueJSContextRef)arg3 ;
-(id)initWithPromiseResolveFunction:(OpaqueJSValueRef)arg1 rejectFunction:(OpaqueJSValueRef)arg2 context:(OpaqueJSContextRef)arg3 ;
-(void)reportErrorWithMessage:(id)arg1 ;
-(id)callWithArgument:(id)arg1 ;
-(id)callWithArgument:(id)arg1 argument:(id)arg2 ;
-(id)callWithArgument:(id)arg1 argument:(id)arg2 argument:(id)arg3 ;
-(JSValue *)jsValue;
-(id)initWithErrorReporter:(id)arg1 context:(OpaqueJSContextRef)arg2 ;
-(OpaqueJSContextRef)globalContext;
-(void)dealloc;
@end

