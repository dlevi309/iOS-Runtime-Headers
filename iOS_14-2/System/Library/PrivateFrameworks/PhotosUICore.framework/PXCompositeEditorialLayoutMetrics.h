/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutMetrics.h>

@class PXCompositeEditorialLayoutSpec;

@interface PXCompositeEditorialLayoutMetrics : PXLayoutMetrics {

	BOOL _useSaliency;
	double _interTileSpacing;
	PXCompositeEditorialLayoutSpec* _editorialLayoutSpec;
	UIEdgeInsets _padding;

}

@property (nonatomic,readonly) PXCompositeEditorialLayoutSpec * editorialLayoutSpec;              //@synthesize editorialLayoutSpec=_editorialLayoutSpec - In the implementation block
@property (assign,nonatomic) double interTileSpacing;                                             //@synthesize interTileSpacing=_interTileSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                                //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) BOOL useSaliency;                                                    //@synthesize useSaliency=_useSaliency - In the implementation block
-(id)init;
-(void)setUseSaliency:(BOOL)arg1 ;
-(void)setInterTileSpacing:(double)arg1 ;
-(UIEdgeInsets)padding;
-(PXCompositeEditorialLayoutSpec *)editorialLayoutSpec;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)useSaliency;
-(double)interTileSpacing;
@end

