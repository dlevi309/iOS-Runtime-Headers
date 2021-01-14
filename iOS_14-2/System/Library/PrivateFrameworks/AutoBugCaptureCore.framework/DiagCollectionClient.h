/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface DiagCollectionClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* destinationDirectory;

}
-(id)init;
-(id)setupXPCInterface;
-(void)collectDEPayloadsWithIdentifier:(id)arg1 diagnosticExtensionsWithParameters:(id)arg2 queue:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)initWithDestinationDirectory:(id)arg1 ;
-(unsigned)currentLoginUserID;
-(void)moveDiagnosticFilesToDestination:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

