/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/MFAttachmentDataProviderProtocol.h>

@class NSData, MFMimePart, MFMailMessage, NSString;

@interface MFRFC822AttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol> {

	NSData* _messageData;
	MFMimePart* _parentPart;
	MFMailMessage* _message;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMessageData:(id)arg1 parentPart:(id)arg2 ;
-(void)fetchDataForAttachment:(id)arg1 consumer:(id)arg2 progress:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)messageForAttachment:(id)arg1 ;
-(id)fetchLocalDataForAttachment:(id)arg1 ;
-(id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2 ;
-(id)initWithMessageData:(id)arg1 parentPart:(id)arg2 managed:(BOOL)arg3 ;
-(id)initWithMessage:(id)arg1 parentPart:(id)arg2 ;
-(id)initWithMessage:(id)arg1 parentPart:(id)arg2 managed:(BOOL)arg3 ;
@end

