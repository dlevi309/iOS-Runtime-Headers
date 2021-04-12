/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSMutableDictionary;

@interface FPProgressManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _downloadProgressPerItemIDs;
	NSMapTable* _uploadProgressPerItemIDs;
	NSMapTable* _copyProgressPerItemIDs;
	NSMutableDictionary* _downloadProgressPerProviderDomainID;
	NSMutableDictionary* _publishingHandlersPerProviderDomainID;
	NSMutableDictionary* _unpublishingHandlersPerProviderDomainID;

}
+(id)defaultManager;
-(id)init;
-(id)downloadProgressForItem:(id)arg1 ;
-(id)uploadProgressForItem:(id)arg1 ;
-(id)copyProgressForItem:(id)arg1 ;
-(id)downloadProgressForProviderDomainID:(id)arg1 ;
-(void)_resetDownloadProgressWithProviderDomainID:(id)arg1 ;
-(id)_progressForItem:(id)arg1 usingProgressMap:(id)arg2 ;
-(void)attachProgressToItemsIfNeeded:(id)arg1 ;
-(void)removeCopyProgress:(id)arg1 ;
-(void)registerCopyProgress:(id)arg1 forItemID:(id)arg2 ;
-(void)removeCopyProgressForItemID:(id)arg1 ;
-(void)removeDownloadProgressForItemID:(id)arg1 ;
-(void)setPublishingHandler:(/*^block*/id)arg1 forProviderDomainID:(id)arg2 ;
-(void)childProgressDidComplete:(id)arg1 providerDomainID:(id)arg2 ;
-(void)addChild:(id)arg1 toGlobalProgressWithProviderDomainID:(id)arg2 ;
@end

