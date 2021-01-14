/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutMetrics.h>

@interface PXMonthsLayoutMetrics : PXLayoutMetrics {

	long long _sizeClass;
	long long _orientation;
	double _interitemSpacing;
	double _defaultSectionAspectRatio;
	double _chapterHeaderHeight;
	UIEdgeInsets _padding;
	UIEdgeInsets _chapterHeaderPadding;

}

@property (assign,nonatomic) long long sizeClass;                            //@synthesize sizeClass=_sizeClass - In the implementation block
@property (assign,nonatomic) long long orientation;                          //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                        //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) double defaultSectionAspectRatio;               //@synthesize defaultSectionAspectRatio=_defaultSectionAspectRatio - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                           //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) double chapterHeaderHeight;                     //@synthesize chapterHeaderHeight=_chapterHeaderHeight - In the implementation block
@property (assign,nonatomic) UIEdgeInsets chapterHeaderPadding;              //@synthesize chapterHeaderPadding=_chapterHeaderPadding - In the implementation block
-(void)setSizeClass:(long long)arg1 ;
-(id)init;
-(double)interitemSpacing;
-(UIEdgeInsets)chapterHeaderPadding;
-(long long)sizeClass;
-(double)defaultSectionAspectRatio;
-(unsigned long long)hash;
-(double)chapterHeaderHeight;
-(long long)orientation;
-(void)setChapterHeaderHeight:(double)arg1 ;
-(UIEdgeInsets)padding;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(void)setChapterHeaderPadding:(UIEdgeInsets)arg1 ;
-(void)setInteritemSpacing:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDefaultSectionAspectRatio:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setOrientation:(long long)arg1 ;
@end

