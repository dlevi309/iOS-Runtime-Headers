/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/NSFileProviderExtension.h>

@interface NSFileProviderInPlaceExtension : NSFileProviderExtension
-(void)startProvidingItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)itemChangedAtURL:(id)arg1 ;
-(id)persistentIdentifierForItemAtURL:(id)arg1 ;
-(void)stopProvidingItemAtURL:(id)arg1 ;
-(void)setLastUsedDate:(id)arg1 forItemIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)providePlaceholderAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)URLForItemWithPersistentIdentifier:(id)arg1 ;
-(void)reparentItemWithIdentifier:(id)arg1 toParentItemWithIdentifier:(id)arg2 newName:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)renameItemWithIdentifier:(id)arg1 toName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setTagData:(id)arg1 forItemIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setFavoriteRank:(id)arg1 forItemIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)trashItemWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)untrashItemWithIdentifier:(id)arg1 toParentItemIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)importDocumentAtURL:(id)arg1 toParentItemIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)createDirectoryWithName:(id)arg1 inParentItemIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteItemWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

