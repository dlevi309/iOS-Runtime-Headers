/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEExtensionProviderContext.h>
#import <libobjc.A.dylib/NEFilterExtensionProviderProtocol.h>
#import <libobjc.A.dylib/NEFilterExtensionProviderHostProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface NEFilterExtensionProviderContext : NEExtensionProviderContext <NEFilterExtensionProviderProtocol, NEFilterExtensionProviderHostProtocol> {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _description;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2 ;
-(void)stopWithReason:(int)arg1 ;
-(void)startFilterWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

