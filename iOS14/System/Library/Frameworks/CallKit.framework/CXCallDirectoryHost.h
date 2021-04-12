/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <libobjc.A.dylib/CXCallDirectoryManagerDefaultHostProtocol.h>
#import <libobjc.A.dylib/CXCallDirectoryManagerMaintenanceHostProtocol.h>

@protocol OS_dispatch_queue, CXCallDirectoryHostDelegate;
@class NSObject, NSString;

@interface CXCallDirectoryHost : NSObject <CXCallDirectoryManagerDefaultHostProtocol, CXCallDirectoryManagerMaintenanceHostProtocol> {

	NSObject*<OS_dispatch_queue> _queue;
	id<CXCallDirectoryHostDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<CXCallDirectoryHostDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                   //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)getExtensionsWithReply:(/*^block*/id)arg1 ;
-(BOOL)_connectionContainsCallDirectoryHostEntitlementCapability:(id)arg1 ;
-(id)init;
-(oneway void)compactStoreWithReply:(/*^block*/id)arg1 ;
-(id<CXCallDirectoryHostDelegate>)delegate;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)_nsExtensionWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<CXCallDirectoryHostDelegate>)arg1 ;
-(oneway void)setPrioritizedExtensionIdentifiers:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)getEnabledStatusForExtensionWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)synchronizeExtensionsWithReply:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(oneway void)setEnabled:(BOOL)arg1 forExtensionWithIdentifier:(id)arg2 reply:(/*^block*/id)arg3 ;
-(oneway void)reloadExtensionWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)launchCallDirectorySettingsWithReply:(/*^block*/id)arg1 ;
-(void)performDelegateCallback:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)prepareStoreIfNecessary;
@end

