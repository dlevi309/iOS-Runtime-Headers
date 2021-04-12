/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIViewServiceDeputyXPCInterface.h>

@class NSXPCInterface, NSString;

@interface _UIViewServiceViewControllerDeputyXPCInterface : NSObject <_UIViewServiceDeputyXPCInterface> {

	NSXPCInterface* _exportedInterface;
	NSXPCInterface* _remoteViewControllerInterface;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interfaceWithExportedInterface:(id)arg1 remoteViewControllerInterface:(id)arg2 ;
-(id)hostObjectInterface;
-(id)exportedInterface;
-(SEL)connectionSelector;
-(id)connectionProtocol;
-(id)connectionInvocation;
@end

