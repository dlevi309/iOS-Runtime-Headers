/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputDeviceAuthorizationSessionImpl.h>

@class AVOutputDeviceAuthorizationSession, AVWeakReference, AVOutputDeviceAuthorizationRequest, AVFigEndpointUIAgentOutputDeviceAuthorizationRequestImpl, NSString;

@interface AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl : NSObject <AVOutputDeviceAuthorizationSessionImpl> {

	AVOutputDeviceAuthorizationSession* _parentSession;
	OpaqueFigEndpointUIAgentRef _agent;
	AVWeakReference* _weakObserver;
	AVOutputDeviceAuthorizationRequest* _currentRequest;
	AVFigEndpointUIAgentOutputDeviceAuthorizationRequestImpl* _currentRequestImpl;

}

@property (nonatomic,readonly) OpaqueFigEndpointUIAgentRef figEndpointUIAgent; 
@property (__weak) AVOutputDeviceAuthorizationSession * parentAuthorizationSession;              //@synthesize parentSession=_parentSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setParentAuthorizationSession:(AVOutputDeviceAuthorizationSession *)arg1 ;
-(void)_finishedWithPrompt;
-(void)outputDeviceAuthorizationRequestImpl:(id)arg1 didRespondWithAuthorizationToken:(id)arg2 ;
-(void)_startNewRequest:(id)arg1 impl:(id)arg2 ;
-(OpaqueFigEndpointUIAgentRef)figEndpointUIAgent;
-(id)initWithFigEndpointUIAgent:(OpaqueFigEndpointUIAgentRef)arg1 ;
-(void)outputDeviceAuthorizationRequestImplDidCancel:(id)arg1 ;
-(void)_notifyCurrentRequestOfTerminalStatus:(long long)arg1 error:(id)arg2 ;
-(void)_showAuthPromptWithUniqueID:(id)arg1 routeDescriptor:(CFDictionaryRef)arg2 pinMode:(BOOL)arg3 reason:(CFStringRef)arg4 ;
-(AVOutputDeviceAuthorizationSession *)parentAuthorizationSession;
-(void)dealloc;
@end

