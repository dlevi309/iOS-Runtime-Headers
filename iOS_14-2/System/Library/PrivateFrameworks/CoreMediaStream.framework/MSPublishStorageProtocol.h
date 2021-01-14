/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/


@protocol MSPublishStorageProtocol <MSStorageProtocol>
@property (assign,nonatomic) id<MSPublishStorageProtocolDelegate> delegate; 
@required
-(void)abort;
-(id<MSPublishStorageProtocolDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)computeHashForAsset:(id)arg1;
-(void)publishAssets:(id)arg1 URL:(id)arg2;

@end

