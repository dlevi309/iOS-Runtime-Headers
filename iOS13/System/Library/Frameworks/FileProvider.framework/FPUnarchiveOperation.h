/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPActionOperation.h>
#import <libobjc.A.dylib/FPArchiveServiceUnarchivingDelegate.h>

@class FPItem, NSURL, FPItemID, NSFileCoordinator, NSString;

@interface FPUnarchiveOperation : FPActionOperation <FPArchiveServiceUnarchivingDelegate> {

	FPItem* _item;
	NSURL* _itemURL;
	FPItemID* _placeholderID;
	FPItem* _destinationFolder;
	BOOL _hasStitchedUnarchivedItems;
	NSFileCoordinator* _coordinator;
	id _coordinationAccessToken;
	/*^block*/id _passphraseRequestBlock;
	/*^block*/id _unarchiveCompletionBlock;

}

@property (nonatomic,copy) id passphraseRequestBlock;                //@synthesize passphraseRequestBlock=_passphraseRequestBlock - In the implementation block
@property (nonatomic,copy) id unarchiveCompletionBlock;              //@synthesize unarchiveCompletionBlock=_unarchiveCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)actionMain;
-(id)_newParentProgressWithCompletedUnitCount:(long long)arg1 ;
-(void)_completeWithItemURL:(id)arg1 item:(id)arg2 service:(id)arg3 resultURL:(id)arg4 error:(id)arg5 ;
-(id)passphraseRequestBlock;
-(BOOL)_handleArchiveDecryptionError:(id)arg1 item:(id)arg2 service:(id)arg3 itemURL:(id)arg4 ;
-(void)__completeWithItem:(id)arg1 service:(id)arg2 resultURL:(id)arg3 error:(id)arg4 ;
-(BOOL)getHasUnarchivedMultipleItems:(BOOL*)arg1 firstUnarchivedItemURL:(id*)arg2 forArchiveFolderURL:(id)arg3 error:(id*)arg4 ;
-(id)unarchiveCompletionBlock;
-(void)setUnarchiveCompletionBlock:(id)arg1 ;
-(void)service:(id)arg1 didReceiveArchivedItemsDescriptors:(id)arg2 ;
-(id)initWithItem:(id)arg1 destinationFolder:(id)arg2 ;
-(void)setPassphraseRequestBlock:(id)arg1 ;
@end

