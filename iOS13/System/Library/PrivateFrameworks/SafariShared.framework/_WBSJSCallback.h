/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


#import <SafariShared/SafariShared-Structs.h>
@interface _WBSJSCallback : NSObject {

	OpaqueJSValueRef _callbackFunction;
	JSRetainPtr<OpaqueJSContext *>* _globalContext;

}

@property (nonatomic,readonly) id callbackHandler; 
-(void)dealloc;
-(id)initWithCallbackFunction:(OpaqueJSValueRef)arg1 context:(OpaqueJSContextRef)arg2 ;
-(id)callbackHandler;
@end

