/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/FPArchiveServiceStreamingInternal.h>
#import <libobjc.A.dylib/FPArchiveServiceProtocol.h>

@protocol FPArchiveServiceUnarchivingDelegate;
@interface FPArchiveService : NSObject <FPArchiveServiceStreamingInternal, FPArchiveServiceProtocol> {

	id<FPArchiveServiceUnarchivingDelegate> _unarchivingDelegate;

}

@property (assign,nonatomic,__weak) id<FPArchiveServiceUnarchivingDelegate> unarchivingDelegate;              //@synthesize unarchivingDelegate=_unarchivingDelegate - In the implementation block
-(id)archiveItemsWithURLs:(id)arg1 compressionFormat:(unsigned long long)arg2 destinationFolderURL:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setUnarchivingDelegate:(id<FPArchiveServiceUnarchivingDelegate>)arg1 ;
-(id)unarchiveItemAtURL:(id)arg1 passphrase:(id)arg2 destinationFolderURL:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)receiveArchivedItemsDescriptors:(id)arg1 ;
-(void)itemDescriptorsForItemAtURL:(id)arg1 passphrases:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)unarchiveItemAtURL:(id)arg1 passphrases:(id)arg2 destinationFolderURL:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id<FPArchiveServiceUnarchivingDelegate>)unarchivingDelegate;
-(void)itemDescriptorsForItemAtURL:(id)arg1 passphrase:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)archiveItemsWithURLs:(id)arg1 compressionFormat:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)unarchiveItemAtURL:(id)arg1 passphrase:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

