/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFRemoteUserInterface.h>

@protocol WFRemoteUserInterface;
@class NSString;

@interface WFRemoteActionUserInterface : NSObject <WFRemoteUserInterface> {

	NSString* _userInterfaceType;
	id<WFRemoteUserInterface> _remoteUserInterface;

}

@property (nonatomic,readonly) NSString * userInterfaceType;                               //@synthesize userInterfaceType=_userInterfaceType - In the implementation block
@property (nonatomic,readonly) id<WFRemoteUserInterface> remoteUserInterface;              //@synthesize remoteUserInterface=_remoteUserInterface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(NSString *)userInterfaceType;
-(id)initWithUserInterfaceType:(id)arg1 listenerEndpoint:(id)arg2 interface:(id)arg3 ;
-(id<WFRemoteUserInterface>)remoteUserInterface;
@end

