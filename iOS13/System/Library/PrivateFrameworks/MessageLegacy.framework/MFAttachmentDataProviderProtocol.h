/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


@protocol MFAttachmentDataProviderProtocol <NSObject>
@required
-(void)fetchDataForAttachment:(id)arg1 consumer:(id)arg2 progress:(id)arg3 completion:(/*^block*/id)arg4;
-(id)messageForAttachment:(id)arg1;
-(id)fetchLocalDataForAttachment:(id)arg1;
-(id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;

@end
