/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@protocol MFAttachmentDataProviderProtocol <NSObject>
@required
-(void)fetchDataForAttachment:(id)arg1 consumer:(id)arg2 progress:(id)arg3 completion:(/*^block*/id)arg4;
-(id)messageForAttachment:(id)arg1;
-(id)fetchLocalDataForAttachment:(id)arg1;
-(id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;

@end

