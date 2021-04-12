/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/


@class NSURL, NSString, PFVideoSharingOperation, PFPhotoSharingOperation;

@interface PFSharingRemakerOperation : NSObject {

	long long _inputType;
	NSURL* _imageOutputURL;
	NSURL* _videoOutputURL;
	NSString* __uuid;
	PFVideoSharingOperation* __videoOperation;
	PFPhotoSharingOperation* __imageOperation;

}

@property (setter=_setUUID:,nonatomic,copy) NSString * _uuid;                                                   //@synthesize _uuid=__uuid - In the implementation block
@property (assign,setter=_setInputType:,nonatomic) long long inputType;                                         //@synthesize inputType=_inputType - In the implementation block
@property (setter=_setVideoOperation:,nonatomic,retain) PFVideoSharingOperation * _videoOperation;              //@synthesize _videoOperation=__videoOperation - In the implementation block
@property (setter=_setImageOperation:,nonatomic,retain) PFPhotoSharingOperation * _imageOperation;              //@synthesize _imageOperation=__imageOperation - In the implementation block
@property (setter=_setImageOutputURL:,nonatomic,copy) NSURL * imageOutputURL;                                   //@synthesize imageOutputURL=_imageOutputURL - In the implementation block
@property (setter=_setVideoOutputURL:,nonatomic,copy) NSURL * videoOutputURL;                                   //@synthesize videoOutputURL=_videoOutputURL - In the implementation block
+(id)remakerOperationWithInputType:(long long)arg1 videoURL:(id)arg2 imageURL:(id)arg3 adjustmentData:(id)arg4 ;
-(id)init;
-(void)_setUUID:(id)arg1 ;
-(long long)inputType;
-(NSURL *)videoOutputURL;
-(NSString *)_uuid;
-(void)_setInputType:(long long)arg1 ;
-(NSURL *)imageOutputURL;
-(void)_setImageOutputURL:(id)arg1 ;
-(void)_setVideoOutputURL:(id)arg1 ;
-(PFVideoSharingOperation *)_videoOperation;
-(void)_setVideoOperation:(id)arg1 ;
-(PFPhotoSharingOperation *)_imageOperation;
-(void)_setImageOperation:(id)arg1 ;
@end

