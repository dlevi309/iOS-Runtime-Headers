/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/


#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
@class NSString, IPAImageSizePolicy;

@interface IPAPreviewSizePolicy : NSObject {

	NSString* _name;
	id _style;
	IPAImageSizePolicy* _sizePolicy;
	/*^block*/id _styleNeededThreshold;
	/*^block*/id _styleProducedThreshold;
	NSString* _suffix;

}

@property (retain) NSString * suffix;              //@synthesize suffix=_suffix - In the implementation block
@property (readonly) NSString * name;              //@synthesize name=_name - In the implementation block
-(id)description;
-(NSString *)name;
-(CGSize)transformSize:(CGSize)arg1 ;
-(id)style;
-(NSString *)suffix;
-(void)setSuffix:(NSString *)arg1 ;
-(PFIntSize_st)integralTransformSize:(CGSize)arg1 ;
-(id)initWithName:(id)arg1 style:(id)arg2 sizePolicy:(id)arg3 styleNeededThreshold:(/*^block*/id)arg4 styleProducedThreshold:(/*^block*/id)arg5 ;
-(id)initWithName:(id)arg1 suffix:(id)arg2 style:(id)arg3 sizePolicy:(id)arg4 styleNeededThreshold:(/*^block*/id)arg5 styleProducedThreshold:(/*^block*/id)arg6 ;
-(id)sizeTransformationPolicy;
-(BOOL)styleIsNeededForFullSize:(CGSize)arg1 ;
-(BOOL)styleCanBeProducedFromSize:(CGSize)arg1 ;
-(id)styleShouldBeProducedFrom:(/*^block*/id)arg1 ;
@end

