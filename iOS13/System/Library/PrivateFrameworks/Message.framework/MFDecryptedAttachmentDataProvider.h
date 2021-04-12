/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/MFAttachmentDataProviderProtocol.h>

@class MFMailMessage, NSString;

@interface MFDecryptedAttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol> {

	MFMailMessage* _message;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchDataForAttachment:(id)arg1 consumer:(id)arg2 progress:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)messageForAttachment:(id)arg1 ;
-(id)fetchLocalDataForAttachment:(id)arg1 ;
-(id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2 ;
-(id)initWithDecryptedMessage:(id)arg1 ;
@end

