/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <FileProviderDaemon/FPDProvider.h>
#import <libobjc.A.dylib/FPDPushMessageDelegate.h>

@protocol OS_dispatch_queue;
@class NSExtension, NSObject, NSUUID, NSString;

@interface FPDExtension : FPDProvider <FPDPushMessageDelegate> {

	NSExtension* _extension;
	NSObject*<OS_dispatch_queue> _presentersQueue;
	NSObject*<OS_dispatch_queue> _sharedSessionQueue;

}

@property (nonatomic,retain) NSExtension * extension;                                        //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> presentersQueue;                 //@synthesize presentersQueue=_presentersQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sharedSessionQueue;              //@synthesize sharedSessionQueue=_sharedSessionQueue - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithExtension:(id)arg1 queue:(id)arg2 server:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)uuid;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(id)customPushTopics;
-(void)_test_callFileProviderManagerAPIs:(/*^block*/id)arg1 ;
-(void)currentMaterializedSetSyncAnchorForDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)didReceiveMessage:(id)arg1 ;
-(id)initWithExtension:(id)arg1 queue:(id)arg2 server:(id)arg3 ;
-(BOOL)isAppExtensionReachable;
-(id)asAppExtensionBackedProvider;
-(void)removeTrashedItemsOlderThanDate:(id)arg1 request:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)reindexAllSearchableItemsForRequest:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)enumerateMaterializedSetForDomain:(id)arg1 syncAnchor:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)presentersQueue;
-(NSObject*<OS_dispatch_queue>)sharedSessionQueue;
@end

