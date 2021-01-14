/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <IconServices/IconServices-Structs.h>
#import <IconServices/ISIcon.h>

@class ISImageCache;

@interface ISGenericIconIOS : ISIcon {

	ISImageCache* _imageCache;

}

@property (retain) ISImageCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
-(void)getCGImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)imageForImageDescriptor:(id)arg1 ;
-(id)prepareImageForDescriptor:(id)arg1 ;
-(id)_prepareImageForImageDescriptor:(id)arg1 ;
-(void)getImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(ISImageCache *)imageCache;
-(void)setImageCache:(ISImageCache *)arg1 ;
-(CGImageRef)CGImageForImageDescriptor:(id)arg1 ;
-(id)_init;
-(void)prepareImagesForImageDescriptors:(id)arg1 ;
@end

