/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXPerson;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSTimer;

@interface PXPersonImageRequest : NSObject {

	id<PXPerson> _person;
	NSTimer* _imageLoadInvalidationTimer;
	unsigned long long _imageRequestTag;

}

@property (nonatomic,retain) NSTimer * imageLoadInvalidationTimer;              //@synthesize imageLoadInvalidationTimer=_imageLoadInvalidationTimer - In the implementation block
@property (assign,nonatomic) unsigned long long imageRequestTag;                //@synthesize imageRequestTag=_imageRequestTag - In the implementation block
@property (nonatomic,readonly) id<PXPerson> person;                             //@synthesize person=_person - In the implementation block
-(id<PXPerson>)person;
-(void)requestImageWithTargetSize:(CGSize)arg1 cropFactor:(unsigned long long)arg2 cacheResult:(BOOL)arg3 boundFaceRect:(BOOL)arg4 timeout:(double)arg5 withCompletion:(/*^block*/id)arg6 ;
-(unsigned long long)imageRequestTag;
-(NSTimer *)imageLoadInvalidationTimer;
-(void)setImageLoadInvalidationTimer:(NSTimer *)arg1 ;
-(void)setImageRequestTag:(unsigned long long)arg1 ;
-(void)cancel;
-(id)initWithPerson:(id)arg1 ;
-(void)dealloc;
@end

