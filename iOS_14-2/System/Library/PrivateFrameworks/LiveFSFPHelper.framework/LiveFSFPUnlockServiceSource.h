/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <LiveFSFPHelper/LiveFS_Unlock.h>
#import <libobjc.A.dylib/NSFileProviderServiceSource.h>

@class LiveFSFPExtensionHelper, NSString, NSOperationQueue, NSHashTable;

@interface LiveFSFPUnlockServiceSource : NSObject <NSXPCListenerDelegate, LiveFS_Unlock, NSFileProviderServiceSource> {

	LiveFSFPExtensionHelper* _fileProviderExtension;
	NSString* _itemIdentifier;
	NSOperationQueue* _operationQueue;
	NSHashTable* _listeners;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * serviceName; 
-(id)makeListenerEndpointAndReturnError:(id*)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSString *)serviceName;
-(void)unlockWithPassword:(id)arg1 saveToKeychain:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithFileProviderExtension:(id)arg1 itemIdentifier:(id)arg2 ;
@end

