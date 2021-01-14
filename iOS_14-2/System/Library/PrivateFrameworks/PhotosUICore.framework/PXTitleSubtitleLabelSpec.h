/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXViewSpec.h>

@class PXLabelSpec;

@interface PXTitleSubtitleLabelSpec : PXViewSpec {

	PXLabelSpec* _titleLabelSpec;
	PXLabelSpec* _subtitleLabelSpec;
	double _interLabelSpacing;
	double _distanceBetweenTitleBaselineAndSubtitleBaseline;
	UIEdgeInsets _padding;

}

@property (nonatomic,retain) PXLabelSpec * titleLabelSpec;                                        //@synthesize titleLabelSpec=_titleLabelSpec - In the implementation block
@property (nonatomic,retain) PXLabelSpec * subtitleLabelSpec;                                     //@synthesize subtitleLabelSpec=_subtitleLabelSpec - In the implementation block
@property (assign,nonatomic) double interLabelSpacing;                                            //@synthesize interLabelSpacing=_interLabelSpacing - In the implementation block
@property (assign,nonatomic) double distanceBetweenTitleBaselineAndSubtitleBaseline;              //@synthesize distanceBetweenTitleBaselineAndSubtitleBaseline=_distanceBetweenTitleBaselineAndSubtitleBaseline - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                                //@synthesize padding=_padding - In the implementation block
@property (nonatomic,readonly) double maximumTitleSubtitleHeight; 
+(id)memoriesTitleSubtitleSpecForTileKind:(long long)arg1 gadgetSpec:(id)arg2 boundedByRect:(CGRect)arg3 ;
+(id)memoriesTitleSubtitleSpecForViewSpecDescriptor:(PXViewSpecDescriptor)arg1 featureSpec:(id)arg2 ;
+(id)memoriesTitleSubtitleSpecForTileKind:(long long)arg1 viewMode:(id)arg2 boundedByRect:(CGRect)arg3 ;
+(id)memoriesTitleSubtitleSpecForTileKind:(long long)arg1 featureSpec:(id)arg2 boundedByRect:(CGRect)arg3 ;
+(id)_memoriesTitleSubtitleSpecForContext:(SCD_Struct_PX78)arg1 ;
+(id)px_headerTitleSubtitleLabelSpecForZoomLevel:(long long)arg1 featureSpec:(id)arg2 ;
-(void)setDistanceBetweenTitleBaselineAndSubtitleBaseline:(double)arg1 ;
-(double)maximumTitleSubtitleHeight;
-(void)setSubtitleLabelSpec:(PXLabelSpec *)arg1 ;
-(void)setInterLabelSpacing:(double)arg1 ;
-(void)setTitleLabelSpec:(PXLabelSpec *)arg1 ;
-(PXLabelSpec *)titleLabelSpec;
-(unsigned long long)hash;
-(PXLabelSpec *)subtitleLabelSpec;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(double)interLabelSpacing;
-(double)distanceBetweenTitleBaselineAndSubtitleBaseline;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

