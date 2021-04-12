/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOutputDeviceAuthorizationSessionImpl.h>

@class AVOutputDeviceAuthorizationSession, AVWeakReference, AVOutputDeviceAuthorizationRequest, AVFigEndpointUIAgentOutputDeviceAuthorizationRequestImpl, NSString;

@interface AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl : NSObject <AVOutputDeviceAuthorizationSessionImpl> {

	AVOutputDeviceAuthorizationSession* _parentSession;
	OpaqueFigEndpointUIAgentRef _agent;
	AVWeakReference* _weakObserver;
	AVOutputDeviceAuthorizationRequest* _currentRequest;
	AVFigEndpointUIAgentOutputDeviceAuthorizationRequestImpl* _currentRequestImpl;

}

@property (nonatomic,readonly) OpaqueFigEndpointUIAgentRef figEndpointUIAgent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) AVOutputDeviceAuthorizationSession * parentAuthorizationSession;              //@synthesize parentSession=_parentSession - In the implementation block
-(void)dealloc;
-(id)initWithFigEndpointUIAgent:(OpaqueFigEndpointUIAgentRef)arg1 ;
-(void)setParentAuthorizationSession:(AVOutputDeviceAuthorizationSession *)arg1 ;
-(void)_startNewRequest:(id)arg1 impl:(id)arg2 ;
-(AVOutputDeviceAuthorizationSession *)parentAuthorizationSession;
-(void)_notifyCurrentRequestOfTerminalStatus:(long long)arg1 error:(id)arg2 ;
-(OpaqueFigEndpointUIAgentRef)figEndpointUIAgent;
-(void)_showAuthPromptWithUniqueID:(id)arg1 routeDescriptor:(CFDictionaryRef)arg2 pinMode:(BOOL)arg3 reason:(CFStringRef)arg4 ;
-(void)_finishedWithPrompt;
-(void)outputDeviceAuthorizationRequestImpl:(id)arg1 didRespondWithAuthorizationToken:(id)arg2 ;
-(void)outputDeviceAuthorizationRequestImplDidCancel:(id)arg1 ;
@end

