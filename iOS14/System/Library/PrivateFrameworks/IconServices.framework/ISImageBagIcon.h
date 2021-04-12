/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <IconServices/IconServices-Structs.h>
#import <IconServices/ISIcon.h>

@class NSArray, ISImageCache;

@interface ISImageBagIcon : ISIcon {

	NSArray* _images;
	NSArray* _decorations;
	ISImageCache* _imageCache;

}

@property (retain) ISImageCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
@property (readonly) NSArray * images;                     //@synthesize images=_images - In the implementation block
-(void)getCGImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)imageForImageDescriptor:(id)arg1 ;
-(id)initWithImages:(id)arg1 decorations:(id)arg2 ;
-(void)getImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)decorations;
-(id)initWithImages:(id)arg1 ;
-(ISImageCache *)imageCache;
-(void)setImageCache:(ISImageCache *)arg1 ;
-(NSArray *)images;
-(CGImageRef)CGImageForImageDescriptor:(id)arg1 ;
-(BOOL)hasValidImage;
-(void)prepareImagesForImageDescriptors:(id)arg1 ;
@end

