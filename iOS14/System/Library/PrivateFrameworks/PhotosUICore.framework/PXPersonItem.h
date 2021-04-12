/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PHPerson, UIImage;

@interface PXPersonItem : NSObject {

	int _faceImageRequestID;
	PHPerson* _modelObject;
	/*^block*/id _faceImageLoadingCompletionBlock;
	/*^block*/id _fastDisplayBlock;
	UIImage* _faceImage;

}

@property (assign) int faceImageRequestID;                        //@synthesize faceImageRequestID=_faceImageRequestID - In the implementation block
@property (copy) id faceImageLoadingCompletionBlock;              //@synthesize faceImageLoadingCompletionBlock=_faceImageLoadingCompletionBlock - In the implementation block
@property (copy) id fastDisplayBlock;                             //@synthesize fastDisplayBlock=_fastDisplayBlock - In the implementation block
@property (__weak) UIImage * faceImage;                           //@synthesize faceImage=_faceImage - In the implementation block
@property (nonatomic,retain) PHPerson * modelObject;              //@synthesize modelObject=_modelObject - In the implementation block
-(void)setModelObject:(PHPerson *)arg1 ;
-(void)setFastDisplayBlock:(id)arg1 ;
-(PHPerson *)modelObject;
-(void)updateWithModel:(id)arg1 ;
-(UIImage *)faceImage;
-(void)setFaceImageRequestID:(int)arg1 ;
-(id)faceImageLoadingCompletionBlock;
-(id)fastDisplayBlock;
-(int)faceImageRequestID;
-(void)setFaceImage:(UIImage *)arg1 ;
-(id)initWithPerson:(id)arg1 ;
-(void)setFaceImageLoadingCompletionBlock:(id)arg1 ;
@end

