/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputContextManagerImpl.h>

@class AVOutputContextManager, AVWeakReference, NSString;

@interface AVFigEndpointUIAgentOutputContextManagerImpl : NSObject <AVOutputContextManagerImpl> {

	OpaqueFigEndpointUIAgentRef _agent;
	AVWeakReference* _weakObserver;
	AVOutputContextManager* _parentManager;

}

@property (__weak) AVOutputContextManager * parentOutputContextManager;              //@synthesize parentManager=_parentManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(OpaqueFigEndpointUIAgentRef)copySharedEndpointUIAgent;
-(void)_showErrorPromptForRouteDescriptor:(CFDictionaryRef)arg1 reason:(CFStringRef)arg2 ;
-(AVOutputContextManager *)parentOutputContextManager;
-(void)setParentOutputContextManager:(AVOutputContextManager *)arg1 ;
-(id)initWithEndpointUIAgent:(OpaqueFigEndpointUIAgentRef)arg1 ;
-(void)dealloc;
@end

