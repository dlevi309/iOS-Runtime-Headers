/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
*/


#import <BookCoverUtility/BookCoverUtility-Structs.h>
@interface _BCUCoverEffectsAssets : NSObject {

	CGImageRef _spineNormalBlend;
	CGImageRef _spineLinearBurnBlend;
	CGImageRef _spineSoftLightBlend;
	CGImageRef _edges;
	CGColorRef _overlayColor;

}

@property (nonatomic,readonly) CGImageRef spineNormalBlend;                  //@synthesize spineNormalBlend=_spineNormalBlend - In the implementation block
@property (nonatomic,readonly) CGImageRef spineLinearBurnBlend;              //@synthesize spineLinearBurnBlend=_spineLinearBurnBlend - In the implementation block
@property (nonatomic,readonly) CGImageRef spineSoftLightBlend;               //@synthesize spineSoftLightBlend=_spineSoftLightBlend - In the implementation block
@property (nonatomic,readonly) CGImageRef edges;                             //@synthesize edges=_edges - In the implementation block
@property (nonatomic,readonly) CGColorRef overlayColor;                      //@synthesize overlayColor=_overlayColor - In the implementation block
-(CGImageRef)edges;
-(CGColorRef)overlayColor;
-(id)initWithBundle:(id)arg1 rtl:(BOOL)arg2 night:(BOOL)arg3 ;
-(CGImageRef)spineNormalBlend;
-(CGImageRef)spineLinearBurnBlend;
-(CGImageRef)spineSoftLightBlend;
@end

