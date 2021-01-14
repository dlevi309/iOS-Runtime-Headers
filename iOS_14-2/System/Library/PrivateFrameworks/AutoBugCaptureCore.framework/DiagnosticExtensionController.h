/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/


@protocol OS_dispatch_queue;
@class NSDateFormatter, NSObject, NSString;

@interface DiagnosticExtensionController : NSObject {

	NSDateFormatter* dateFormatter;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _destinationRootDirectory;

}

@property (nonatomic,readonly) NSString * destinationRootDirectory;              //@synthesize destinationRootDirectory=_destinationRootDirectory - In the implementation block
-(void)collectDEPayloadsWithIdentifier:(id)arg1 diagnosticExtensionsWithParameters:(id)arg2 queue:(id)arg3 reply:(/*^block*/id)arg4 ;
-(NSString *)destinationRootDirectory;
-(id)initWithDestinationDirectory:(id)arg1 ;
-(void)collectDEPayloadsWithIdentifier:(id)arg1 diagnosticExtensions:(id)arg2 queue:(id)arg3 reply:(/*^block*/id)arg4 ;
@end

