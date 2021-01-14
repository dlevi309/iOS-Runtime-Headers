/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class NSString;

@interface PUCropAspect : NSObject {

	double _width;
	double _height;
	NSString* _localizedName;

}

@property (nonatomic,readonly) double width;                          //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) double height;                         //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) double ratio; 
@property (nonatomic,readonly) NSString * localizedName;              //@synthesize localizedName=_localizedName - In the implementation block
+(id)allAspectsWithOriginalSize:(CGSize)arg1 currentSize:(CGSize)arg2 ;
-(NSString *)localizedName;
-(double)width;
-(double)heightForWidth:(double)arg1 ;
-(id)init;
-(double)height;
-(id)initWithWidth:(double)arg1 height:(double)arg2 ;
-(double)ratio;
-(id)description;
-(unsigned long long)hash;
-(id)inverseAspect;
-(BOOL)isFreeformCrop;
-(id)_initWithWidth:(double)arg1 height:(double)arg2 localizedName:(id)arg3 ;
-(BOOL)isEqualToCropAspect:(id)arg1 ;
-(BOOL)isEquivalentToCropAspect:(id)arg1 ;
-(double)widthForHeight:(double)arg1 ;
-(CGRect)constrainRect:(CGRect)arg1 boundingRect:(CGRect)arg2 boundingAngle:(double)arg3 minSize:(CGSize)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
@end

