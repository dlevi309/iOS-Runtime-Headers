/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVOutputDeviceAuthorizationSessionInternal;

@interface AVOutputDeviceAuthorizationSession : NSObject {

	AVOutputDeviceAuthorizationSessionInternal* _ivars;

}

@property (__weak) id<AVOutputDeviceAuthorizationSessionDelegate> delegate; 
+(void)initialize;
+(id)sharedAuthorizationSession;
+(id)outputDeviceAuthorizationSessionWithEndpointUIAgent:(OpaqueFigEndpointUIAgentRef)arg1 ;
-(id)initWithOutputDeviceAuthorizationSessionImpl:(id)arg1 ;
-(id<AVOutputDeviceAuthorizationSessionDelegate>)delegate;
-(BOOL)outputDeviceAuthorizationSessionImpl:(id)arg1 shouldRetryAuthorizationRequest:(id)arg2 reason:(id)arg3 ;
-(void)outputDeviceAuthorizationSessionImplDidExpireWithReplacementImpl:(id)arg1 ;
-(void)outputDeviceAuthorizationSessionImpl:(id)arg1 didProvideAuthorizationRequest:(id)arg2 ;
-(void)setDelegate:(id<AVOutputDeviceAuthorizationSessionDelegate>)arg1 ;
-(void)dealloc;
-(id)impl;
@end

