/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVOutputDeviceAuthorizationSessionInternal;

@interface AVOutputDeviceAuthorizationSession : NSObject {

	AVOutputDeviceAuthorizationSessionInternal* _ivars;

}

@property (__weak) id<AVOutputDeviceAuthorizationSessionDelegate> delegate; 
+(void)initialize;
+(id)sharedAuthorizationSession;
+(id)outputDeviceAuthorizationSessionWithEndpointUIAgent:(OpaqueFigEndpointUIAgentRef)arg1 ;
-(void)dealloc;
-(id<AVOutputDeviceAuthorizationSessionDelegate>)delegate;
-(void)setDelegate:(id<AVOutputDeviceAuthorizationSessionDelegate>)arg1 ;
-(id)impl;
-(id)initWithOutputDeviceAuthorizationSessionImpl:(id)arg1 ;
-(void)outputDeviceAuthorizationSessionImplDidExpireWithReplacementImpl:(id)arg1 ;
-(void)outputDeviceAuthorizationSessionImpl:(id)arg1 didProvideAuthorizationRequest:(id)arg2 ;
-(BOOL)outputDeviceAuthorizationSessionImpl:(id)arg1 shouldRetryAuthorizationRequest:(id)arg2 reason:(id)arg3 ;
@end

