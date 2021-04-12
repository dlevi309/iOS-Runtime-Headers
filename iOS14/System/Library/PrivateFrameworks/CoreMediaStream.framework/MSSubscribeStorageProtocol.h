/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/


@protocol MSSubscribeStorageProtocol <MSStorageProtocol>
@property (assign,nonatomic) id<MSSubscribeStorageProtocolDelegate> delegate; 
@required
-(void)abort;
-(id<MSSubscribeStorageProtocolDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)retrieveAssets:(id)arg1;

@end

