/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/MFAttachmentDataProviderProtocol.h>

@class NSMutableDictionary, NSCache, NSString;

@interface MFComposeAttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol> {

	NSMutableDictionary* _attachmentsData;
	NSCache* _attachmentsPlaceholderData;
	NSMutableDictionary* _attachmentsPasteboardData;
	NSMutableDictionary* _attachmentsUndoData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchDataForAttachment:(id)arg1 consumer:(id)arg2 progress:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)rawDataForContentID:(id)arg1 ;
-(id)messageForAttachment:(id)arg1 ;
-(void)addData:(id)arg1 forContentID:(id)arg2 ;
-(id)initWithData:(id)arg1 forContentID:(id)arg2 ;
-(void)addDataItemProvider:(id)arg1 forContentID:(id)arg2 ;
-(id)initWithAttachmentDataItemProvider:(id)arg1 forContentID:(id)arg2 ;
-(void)removeDataForAttachment:(id)arg1 ;
-(void)recordPasteboardDataForAttachments:(id)arg1 ;
-(void)recordUndoDataForAttachments:(id)arg1 ;
-(id)fetchLocalDataForAttachment:(id)arg1 ;
-(id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2 ;
-(id)dataForContentID:(id)arg1 ;
-(void)_commonInitWithDataProvider:(id)arg1 forContentID:(id)arg2 ;
-(id)_dataForAttachment:(id)arg1 ;
@end

