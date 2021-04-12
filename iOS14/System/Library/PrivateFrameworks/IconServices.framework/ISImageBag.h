/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISScalableCompositorResource.h>

@class NSMutableDictionary, NSString, NSArray;

@interface ISImageBag : NSObject <ISScalableCompositorResource> {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _imagesByScale;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSMutableDictionary * imagesByScale;              //@synthesize imagesByScale=_imagesByScale - In the implementation block
@property (assign) os_unfair_lock_s lock;                            //@synthesize lock=_lock - In the implementation block
@property (copy,readonly) NSArray * images; 
+(id)imageBagWithResourcesNamed:(id)arg1 fromBundle:(id)arg2 ;
+(id)imageBagWithResourcesNames:(id)arg1 fromBundle:(id)arg2 ;
+(id)imageBagWithResourcesNamed:(id)arg1 fromBundle:(id)arg2 subdirectory:(id)arg3 ;
+(id)imageBagWithResourcesNamed:(id)arg1 directory:(id)arg2 ;
-(id)imageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)init;
-(void)insertImage:(id)arg1 ;
-(NSString *)debugDescription;
-(os_unfair_lock_s)lock;
-(void)setImagesByScale:(NSMutableDictionary *)arg1 ;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(id)initWithImages:(id)arg1 ;
-(NSArray *)images;
-(id)imagesForScale:(double)arg1 ;
-(NSMutableDictionary *)imagesByScale;
@end

