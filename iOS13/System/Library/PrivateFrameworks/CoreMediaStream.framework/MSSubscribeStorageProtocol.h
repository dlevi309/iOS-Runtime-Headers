/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/


@protocol MSSubscribeStorageProtocol <MSStorageProtocol>
@property (assign,nonatomic) id<MSSubscribeStorageProtocolDelegate> delegate; 
@required
-(id<MSSubscribeStorageProtocolDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)abort;
-(void)retrieveAssets:(id)arg1;

@end

