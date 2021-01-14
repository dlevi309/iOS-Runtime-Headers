/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/


@protocol MSPublishStorageProtocolDelegate <NSObject>
@required
-(void)publishStorageProtocol:(id)arg1 didFinishUploadingAsset:(id)arg2 error:(id)arg3;
-(int)publishStorageProtocol:(id)arg1 didRequestFDForAsset:(id)arg2;
-(void)publishStorageProtocol:(id)arg1 didFinishUsingFD:(int)arg2 forAsset:(id)arg3;
-(void)publishStorageProtocolDidFinishPublishingAllAssets:(id)arg1;

@end

