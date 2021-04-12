/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOutputContextManagerImpl.h>

@class AVOutputContextManager, AVWeakReference, NSString;

@interface AVFigEndpointUIAgentOutputContextManagerImpl : NSObject <AVOutputContextManagerImpl> {

	OpaqueFigEndpointUIAgentRef _agent;
	AVWeakReference* _weakObserver;
	AVOutputContextManager* _parentManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) AVOutputContextManager * parentOutputContextManager;              //@synthesize parentManager=_parentManager - In the implementation block
+(OpaqueFigEndpointUIAgentRef)copySharedEndpointUIAgent;
-(void)dealloc;
-(id)initWithEndpointUIAgent:(OpaqueFigEndpointUIAgentRef)arg1 ;
-(void)setParentOutputContextManager:(AVOutputContextManager *)arg1 ;
-(AVOutputContextManager *)parentOutputContextManager;
-(void)_showErrorPromptForRouteDescriptor:(CFDictionaryRef)arg1 reason:(CFStringRef)arg2 ;
@end

