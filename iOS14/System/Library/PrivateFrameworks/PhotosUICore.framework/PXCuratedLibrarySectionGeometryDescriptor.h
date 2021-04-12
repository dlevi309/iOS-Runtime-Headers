/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXDisplayAsset;
#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXCuratedLibrarySectionGeometryDescriptor : NSObject {

	id<PXDisplayAsset> _headerAsset;
	long long _visualPosition;
	SCD_Struct_PX81 _headerCornerRadius;
	CGRect _sectionRect;
	CGRect _keyAssetRect;
	CGRect _headerRect;

}

@property (nonatomic,readonly) CGRect sectionRect;                              //@synthesize sectionRect=_sectionRect - In the implementation block
@property (nonatomic,readonly) CGRect keyAssetRect;                             //@synthesize keyAssetRect=_keyAssetRect - In the implementation block
@property (nonatomic,readonly) CGRect headerRect;                               //@synthesize headerRect=_headerRect - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PX82 headerCornerRadius;              //@synthesize headerCornerRadius=_headerCornerRadius - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> headerAsset;                  //@synthesize headerAsset=_headerAsset - In the implementation block
@property (nonatomic,readonly) long long visualPosition;                        //@synthesize visualPosition=_visualPosition - In the implementation block
-(CGRect)sectionRect;
-(SCD_Struct_PX82)cornerRadiusForRect:(CGRect)arg1 ;
-(CGRect)keyAssetRect;
-(id)init;
-(id)sectionGeometryDescriptorTransformedBy:(CGAffineTransform)arg1 ;
-(CGRect)headerRect;
-(id)sectionGeometryDescriptorWithHeaderRect:(CGRect)arg1 ;
-(long long)visualPosition;
-(SCD_Struct_PX82)headerCornerRadius;
-(id)description;
-(CGRect)resizeRect:(CGRect)arg1 fromGeometryDesciptor:(id)arg2 inContainer:(long long)arg3 resizing:(unsigned long long)arg4 ;
-(id)sectionGeometryDescriptorOffsetBy:(CGPoint)arg1 ;
-(id)sectionGeometryDescriptorWithVisualPosition:(long long)arg1 ;
-(id)initWithSectionRect:(CGRect)arg1 headerRect:(CGRect)arg2 keyAssetRect:(CGRect)arg3 headerCornerRadius:(SCD_Struct_PX82)arg4 headerAsset:(id)arg5 ;
-(id<PXDisplayAsset>)headerAsset;
-(unsigned long long)hash;
-(id)initWithSectionRect:(CGRect)arg1 headerRect:(CGRect)arg2 keyAssetRect:(CGRect)arg3 headerCornerRadius:(SCD_Struct_PX82)arg4 headerAsset:(id)arg5 visualPosition:(long long)arg6 ;
-(id)sectionGeometryDescriptorWithMaximumHeightBelowHeader:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

