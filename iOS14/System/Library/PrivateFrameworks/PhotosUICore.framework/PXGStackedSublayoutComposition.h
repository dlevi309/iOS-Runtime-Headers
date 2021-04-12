/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGSublayoutComposition.h>

@interface PXGStackedSublayoutComposition : PXGSublayoutComposition {

	long long _axis;
	double _interlayoutSpacing;
	UIEdgeInsets _padding;

}

@property (assign,nonatomic) long long axis;                         //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic) double interlayoutSpacing;              //@synthesize interlayoutSpacing=_interlayoutSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                   //@synthesize padding=_padding - In the implementation block
-(CGRect)contentBounds;
-(void)setAxis:(long long)arg1 ;
-(long long)axis;
-(id)init;
-(double)interlayoutSpacing;
-(void)setInterlayoutSpacing:(double)arg1 ;
-(void)referenceSizeDidChange;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)updateEstimatedSublayoutGeometries;
-(void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(long long)arg1 usingSublayoutUpdateBlock:(/*^block*/id)arg2 ;
@end

