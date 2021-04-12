/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSMapTable, NSProgress;

@interface PXImportManager : NSObject {

	NSMapTable* _progressToProvidersMapping;
	NSMapTable* _progressToCompletionHandlerMapping;
	NSMapTable* _progressToSharedSourcesCompletionHandlerMapping;
	NSMapTable* _progressToErrorsMapping;
	NSMapTable* _providersToImportedResultObjectMapping;
	NSProgress* _progress;

}

@property (nonatomic,readonly) NSProgress * progress;              //@synthesize progress=_progress - In the implementation block
+(id)supportedTypeIdentifiers;
+(id)defaultManager;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(id)init;
-(id)importDragItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleCompletionOfImportForItemProvider:(id)arg1 resultObject:(id)arg2 progress:(id)arg3 error:(id)arg4 ;
-(void)_addProgress:(id)arg1 forItemProviders:(id)arg2 sharedSourceCompletionHandler:(/*^block*/id)arg3 ;
-(void)_addProgress:(id)arg1 forItemProviders:(id)arg2 assetCreationCompletionHandler:(/*^block*/id)arg3 ;
-(void)_addProgress:(id)arg1 forItemProviders:(id)arg2 ;
-(void)_removeObserverFromProgress:(id)arg1 ;
-(id)_assetsForImportedItemProviders:(id)arg1 ;
-(id)_sourcesForItemProviders:(id)arg1 ;
-(void)fetchAssetsFromDrop:(id)arg1 importIfNeeded:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)importSharedSourcesForDragItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

