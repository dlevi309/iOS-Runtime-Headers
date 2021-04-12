/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/

#import <libobjc.A.dylib/RTIInputSystemPayloadDelegate.h>

@protocol OS_dispatch_queue, RPMessageable;
@class NSObject, RTIInputSystemSourceSession, NSString;

@interface RPTextInputSession : NSObject <RTIInputSystemPayloadDelegate> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _started;
	id<RPMessageable> _messenger;
	RTIInputSystemSourceSession* _rtiSession;
	/*^block*/id _rtiUpdatedHandler;

}

@property (nonatomic,retain) id<RPMessageable> messenger;                             //@synthesize messenger=_messenger - In the implementation block
@property (nonatomic,readonly) RTIInputSystemSourceSession * rtiSession;              //@synthesize rtiSession=_rtiSession - In the implementation block
@property (nonatomic,copy) id rtiUpdatedHandler;                                      //@synthesize rtiUpdatedHandler=_rtiUpdatedHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)handleTextActionPayload:(id)arg1 ;
-(void)invalidate;
-(id<RPMessageable>)messenger;
-(void)setMessenger:(id<RPMessageable>)arg1 ;
-(void)_handleTextInputStarted:(id)arg1 ;
-(void)_handleTextInputStopped:(id)arg1 ;
-(void)_handleTextInputChange:(id)arg1 started:(BOOL)arg2 ;
-(RTIInputSystemSourceSession *)rtiSession;
-(id)rtiUpdatedHandler;
-(void)setRtiUpdatedHandler:(id)arg1 ;
@end

