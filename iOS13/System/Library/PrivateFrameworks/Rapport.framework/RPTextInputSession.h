/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)invalidate;
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)handleTextActionPayload:(id)arg1 ;
-(id<RPMessageable>)messenger;
-(void)setMessenger:(id<RPMessageable>)arg1 ;
-(void)_handleTextInputStarted:(id)arg1 ;
-(void)_handleTextInputStopped:(id)arg1 ;
-(void)_handleTextInputChange:(id)arg1 started:(BOOL)arg2 ;
-(RTIInputSystemSourceSession *)rtiSession;
-(id)rtiUpdatedHandler;
-(void)setRtiUpdatedHandler:(id)arg1 ;
@end

