/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithArchiveFileURL:(id)arg1 ;
-(BOOL)applicationIsRegisteredWithBundleIdentifier:(id)arg1 ;
-(BOOL)registerApplicationWithBundleIdentifier:(id)arg1 ;
-(void)_requestArchiveToDisk;
-(void)_validateRegisteredApplications;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)dealloc;
@end

