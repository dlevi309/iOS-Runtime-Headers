/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/


@class NSURL;

@interface STSPayload : NSObject {

	NSURL* _imageURL;
	NSURL* _videoURL;

}

@property (nonatomic,copy) NSURL * imageURL;              //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy) NSURL * videoURL;              //@synthesize videoURL=_videoURL - In the implementation block
-(void)setImageURL:(NSURL *)arg1 ;
-(void)setVideoURL:(NSURL *)arg1 ;
-(NSURL *)videoURL;
-(NSURL *)imageURL;
@end

