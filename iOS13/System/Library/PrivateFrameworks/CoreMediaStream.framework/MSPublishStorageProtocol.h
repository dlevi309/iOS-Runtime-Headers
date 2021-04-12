/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/


@protocol MSPublishStorageProtocol <MSStorageProtocol>
@property (assign,nonatomic) id<MSPublishStorageProtocolDelegate> delegate; 
@required
-(id<MSPublishStorageProtocolDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)abort;
-(void)computeHashForAsset:(id)arg1;
-(void)publishAssets:(id)arg1 URL:(id)arg2;

@end

