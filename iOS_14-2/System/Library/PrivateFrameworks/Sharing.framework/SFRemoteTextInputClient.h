/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/RTIInputSystemClientDelegate.h>
#import <libobjc.A.dylib/RTIInputSystemDelegate.h>
#import <libobjc.A.dylib/RTIInputSystemPayloadDelegate.h>
#import <libobjc.A.dylib/RTIInputSystemSessionDelegate.h>

@protocol OS_dispatch_queue;
@class RTIInputSystemService, RTIInputSystemSourceSession, NSObject, NSDictionary, NSString;

@interface SFRemoteTextInputClient : NSObject <RTIInputSystemClientDelegate, RTIInputSystemDelegate, RTIInputSystemPayloadDelegate, RTIInputSystemSessionDelegate> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _paused;
	RTIInputSystemService* _rtiService;
	RTIInputSystemSourceSession* _rtiSourceSession;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _eventHandler;
	/*^block*/id _textInputDidBegin;
	/*^block*/id _textInputDidEnd;

}

@property (nonatomic,copy,readonly) NSDictionary * currentPayload; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                 //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id eventHandler;                                              //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,readonly) RTIInputSystemSourceSession * sourceSession; 
@property (nonatomic,copy) id textInputDidBegin;                                         //@synthesize textInputDidBegin=_textInputDidBegin - In the implementation block
@property (nonatomic,copy) id textInputDidEnd;                                           //@synthesize textInputDidEnd=_textInputDidEnd - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(void)inputSystemService:(id)arg1 inputSessionDocumentDidChange:(id)arg2 ;
-(void)_cleanup;
-(id)init;
-(void)handleTextActionPayload:(id)arg1 ;
-(void)_handleSessionEvent:(long long)arg1 forSession:(id)arg2 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)inputSystemService:(id)arg1 didCreateInputSession:(id)arg2 ;
-(void)_fireEventHandlerWithPayload:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)flushOperations;
-(NSDictionary *)currentPayload;
-(void)inputSystemService:(id)arg1 inputSessionDidBegin:(id)arg2 ;
-(void)activate;
-(void)setTextInputDidBegin:(id)arg1 ;
-(void)handleUsername:(id)arg1 password:(id)arg2 ;
-(void)setTextInputDidEnd:(id)arg1 ;
-(void)handleTextInputData:(id)arg1 ;
-(id)textInputDidEnd;
-(void)performTextOperations:(id)arg1 ;
-(void)inputSystemService:(id)arg1 inputSessionDidUnpause:(id)arg2 withReason:(id)arg3 ;
-(void)invalidate;
-(void)inputSystemService:(id)arg1 inputSessionDidDie:(id)arg2 ;
-(void)inputSystemService:(id)arg1 inputSessionDidPause:(id)arg2 withReason:(id)arg3 ;
-(void)fireEventHandlerWithPayload:(id)arg1 ;
-(RTIInputSystemSourceSession *)sourceSession;
-(id)textInputDidBegin;
-(void)inputSystemService:(id)arg1 inputSessionDidEnd:(id)arg2 ;
-(void)dealloc;
@end

