/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSMutableSet, NSURL, NSObject, NSString;

@interface PKApplicationRegistry : NSObject <LSApplicationWorkspaceObserverProtocol> {

	NSMutableSet* _registeredBundleIdentifiers;
	NSURL* _archiveFileURL;
	NSObject*<OS_dispatch_semaphore> _archiveSemaphore;
	NSObject*<OS_dispatch_queue> _applicationRegistryQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)applicationsDidUninstall:(id)arg1 ;
-(id)initWithArchiveFileURL:(id)arg1 ;
-(BOOL)applicationIsRegisteredWithBundleIdentifier:(id)arg1 ;
-(BOOL)registerApplicationWithBundleIdentifier:(id)arg1 ;
-(void)_validateRegisteredApplications;
-(void)_requestArchiveToDisk;
@end

