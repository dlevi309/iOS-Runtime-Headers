/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)exportedInterface;
-(id)connectionInvocation;
-(id)hostObjectInterface;
-(SEL)connectionSelector;
-(id)connectionProtocol;
@end

