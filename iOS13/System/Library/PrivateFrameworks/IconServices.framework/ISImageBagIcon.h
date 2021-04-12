/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)images;
-(ISImageCache *)imageCache;
-(void)setImageCache:(ISImageCache *)arg1 ;
-(id)decorations;
-(id)imageForImageDescriptor:(id)arg1 ;
-(id)initWithImages:(id)arg1 ;
-(void)prepareImagesForImageDescriptors:(id)arg1 ;
-(CGImageRef)CGImageForImageDescriptor:(id)arg1 ;
-(void)getImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithImages:(id)arg1 decorations:(id)arg2 ;
-(void)getCGImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

