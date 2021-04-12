/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, UIFont;

@interface PXWidgetBarSpec : NSObject <NSCopying> {

	BOOL _shouldUseSingleLine;
	UIColor* _textColor;
	UIFont* _primaryFont;
	UIFont* _secondaryFont;
	double _distanceBetweenTopAndFirstBaseline;
	double _distanceBetweenLastBaselineAndBottom;
	double _minimumDistanceBetweenTopAndFirstAscender;
	double _minimumDistanceBetweenLastDescenderAndBottom;
	double _distanceBetweenTitleBaselineAndSubtitleBaseline;
	double _horizontalSpacingBetweenTitleAndSubtitle;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,retain) UIColor * textColor;                                                 //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIFont * primaryFont;                                                //@synthesize primaryFont=_primaryFont - In the implementation block
@property (nonatomic,retain) UIFont * secondaryFont;                                              //@synthesize secondaryFont=_secondaryFont - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                          //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSingleLine;                                            //@synthesize shouldUseSingleLine=_shouldUseSingleLine - In the implementation block
@property (assign,nonatomic) double distanceBetweenTopAndFirstBaseline;                           //@synthesize distanceBetweenTopAndFirstBaseline=_distanceBetweenTopAndFirstBaseline - In the implementation block
@property (assign,nonatomic) double distanceBetweenLastBaselineAndBottom;                         //@synthesize distanceBetweenLastBaselineAndBottom=_distanceBetweenLastBaselineAndBottom - In the implementation block
@property (assign,nonatomic) double minimumDistanceBetweenTopAndFirstAscender;                    //@synthesize minimumDistanceBetweenTopAndFirstAscender=_minimumDistanceBetweenTopAndFirstAscender - In the implementation block
@property (assign,nonatomic) double minimumDistanceBetweenLastDescenderAndBottom;                 //@synthesize minimumDistanceBetweenLastDescenderAndBottom=_minimumDistanceBetweenLastDescenderAndBottom - In the implementation block
@property (assign,nonatomic) double distanceBetweenTitleBaselineAndSubtitleBaseline;              //@synthesize distanceBetweenTitleBaselineAndSubtitleBaseline=_distanceBetweenTitleBaselineAndSubtitleBaseline - In the implementation block
@property (assign,nonatomic) double horizontalSpacingBetweenTitleAndSubtitle;                     //@synthesize horizontalSpacingBetweenTitleAndSubtitle=_horizontalSpacingBetweenTitleAndSubtitle - In the implementation block
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIColor *)textColor;
-(void)setDistanceBetweenTitleBaselineAndSubtitleBaseline:(double)arg1 ;
-(UIEdgeInsets)contentInsets;
-(UIFont *)primaryFont;
-(UIFont *)secondaryFont;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setPrimaryFont:(UIFont *)arg1 ;
-(void)setSecondaryFont:(UIFont *)arg1 ;
-(BOOL)shouldUseSingleLine;
-(void)setShouldUseSingleLine:(BOOL)arg1 ;
-(double)distanceBetweenTopAndFirstBaseline;
-(void)setDistanceBetweenTopAndFirstBaseline:(double)arg1 ;
-(void)setDistanceBetweenLastBaselineAndBottom:(double)arg1 ;
-(double)minimumDistanceBetweenTopAndFirstAscender;
-(void)setMinimumDistanceBetweenTopAndFirstAscender:(double)arg1 ;
-(double)minimumDistanceBetweenLastDescenderAndBottom;
-(void)setMinimumDistanceBetweenLastDescenderAndBottom:(double)arg1 ;
-(double)horizontalSpacingBetweenTitleAndSubtitle;
-(void)setHorizontalSpacingBetweenTitleAndSubtitle:(double)arg1 ;
-(double)distanceBetweenLastBaselineAndBottom;
-(double)distanceBetweenTitleBaselineAndSubtitleBaseline;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

