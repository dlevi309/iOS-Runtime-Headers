/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

#import <libobjc.A.dylib/MFAttachmentDataProviderProtocol.h>

@class MFMessageLibrary, NSString;

@interface MFAttachmentLibraryDataProvider : NSObject <MFAttachmentDataProviderProtocol> {

	MFMessageLibrary* _messageLibrary;

}

@property (__weak) MFMessageLibrary * messageLibrary;               //@synthesize messageLibrary=_messageLibrary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLibrary:(id)arg1 ;
-(void)fetchDataForAttachment:(id)arg1 consumer:(id)arg2 progress:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)messageForAttachment:(id)arg1 ;
-(void)setMessageLibrary:(MFMessageLibrary *)arg1 ;
-(MFMessageLibrary *)messageLibrary;
-(id)fetchLocalDataForAttachment:(id)arg1 ;
-(id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2 ;
@end

