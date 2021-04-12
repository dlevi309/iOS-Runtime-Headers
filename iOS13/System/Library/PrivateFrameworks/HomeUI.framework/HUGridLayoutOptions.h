/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/HUGridDisplayOptions.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIFont, NSNumber, HUGridCameraCellLayoutOptions, HUGridHeadlineCellLayoutOptions, HUGridSceneCellLayoutOptions, HUGridServiceCellLayoutOptions, HUNavigationBarLayoutOptions, HUGridStatusBannerCellLayoutOptions, NSString;

@interface HUGridLayoutOptions : NSObject <HUGridDisplayOptions, NSCopying> {

	BOOL _headlineHidden;
	BOOL _statusHidden;
	BOOL _editing;
	unsigned long long _contentColorStyle;
	long long _scrollDirection;
	unsigned long long _columnStyle;
	UIFont* _headlineFont;
	UIFont* _statusItemFont;
	UIFont* _statusDetailsFont;
	UIFont* _sectionHeaderFont;
	double _headlineBaselineToFirstStatusItemBaselineDistance;
	double _topOfViewToFirstStatusItemBaselineDistance;
	unsigned long long _maxStatusItemCount;
	unsigned long long _maxStatusItemNumberOfLines;
	double _statusItemBaselineToNextStatusItemBaselineDistance;
	double _lastStatusItemBaselineToStatusDetailsBaselineDistance;
	double _statusDetailsBaselineToFirstSectionTitleBaselineDistance;
	double _headlineBaselineToSceneHeaderBaselineDistance;
	double _sectionTopMargin;
	double _sectionBottomMargin;
	double _sectionLeadingMargin;
	double _sectionTrailingMargin;
	double _sectionBottomToNextSectionTitleBaselineDistance;
	double _minimumMarginBelowHeadline;
	double _minimumMarginBelowStatus;
	double _rowSpacing;
	double _columnSpacing;
	NSNumber* _overrideNumberOfColumns;
	HUGridCameraCellLayoutOptions* _cameraCellOptions;
	HUGridHeadlineCellLayoutOptions* _headlineCellOptions;
	HUGridSceneCellLayoutOptions* _sceneCellOptions;
	HUGridServiceCellLayoutOptions* _serviceCellOptions;
	HUNavigationBarLayoutOptions* _navigationBarOptions;
	HUGridStatusBannerCellLayoutOptions* _statusBannerCellOptions;
	long long _numberOfCameraCellsPerRow;
	NSNumber* _overrideViewSizeSubclass;
	CGSize _viewSize;
	UIEdgeInsets _sectionTitleMargin;

}

@property (nonatomic,retain) NSNumber * overrideViewSizeSubclass;                                          //@synthesize overrideViewSizeSubclass=_overrideViewSizeSubclass - In the implementation block
@property (nonatomic,readonly) CGSize viewSize;                                                            //@synthesize viewSize=_viewSize - In the implementation block
@property (assign,nonatomic) long long scrollDirection;                                                    //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (assign,nonatomic) unsigned long long columnStyle;                                               //@synthesize columnStyle=_columnStyle - In the implementation block
@property (assign,nonatomic) BOOL headlineHidden;                                                          //@synthesize headlineHidden=_headlineHidden - In the implementation block
@property (assign,nonatomic) BOOL statusHidden;                                                            //@synthesize statusHidden=_statusHidden - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                                //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) UIFont * headlineFont;                                                        //@synthesize headlineFont=_headlineFont - In the implementation block
@property (nonatomic,retain) UIFont * statusItemFont;                                                      //@synthesize statusItemFont=_statusItemFont - In the implementation block
@property (nonatomic,retain) UIFont * statusDetailsFont;                                                   //@synthesize statusDetailsFont=_statusDetailsFont - In the implementation block
@property (nonatomic,retain) UIFont * sectionHeaderFont;                                                   //@synthesize sectionHeaderFont=_sectionHeaderFont - In the implementation block
@property (assign,nonatomic) double headlineBaselineToFirstStatusItemBaselineDistance;                     //@synthesize headlineBaselineToFirstStatusItemBaselineDistance=_headlineBaselineToFirstStatusItemBaselineDistance - In the implementation block
@property (assign,nonatomic) double topOfViewToFirstStatusItemBaselineDistance;                            //@synthesize topOfViewToFirstStatusItemBaselineDistance=_topOfViewToFirstStatusItemBaselineDistance - In the implementation block
@property (assign,nonatomic) unsigned long long maxStatusItemCount;                                        //@synthesize maxStatusItemCount=_maxStatusItemCount - In the implementation block
@property (assign,nonatomic) unsigned long long maxStatusItemNumberOfLines;                                //@synthesize maxStatusItemNumberOfLines=_maxStatusItemNumberOfLines - In the implementation block
@property (assign,nonatomic) double statusItemBaselineToNextStatusItemBaselineDistance;                    //@synthesize statusItemBaselineToNextStatusItemBaselineDistance=_statusItemBaselineToNextStatusItemBaselineDistance - In the implementation block
@property (assign,nonatomic) double lastStatusItemBaselineToStatusDetailsBaselineDistance;                 //@synthesize lastStatusItemBaselineToStatusDetailsBaselineDistance=_lastStatusItemBaselineToStatusDetailsBaselineDistance - In the implementation block
@property (assign,nonatomic) double statusDetailsBaselineToFirstSectionTitleBaselineDistance;              //@synthesize statusDetailsBaselineToFirstSectionTitleBaselineDistance=_statusDetailsBaselineToFirstSectionTitleBaselineDistance - In the implementation block
@property (assign,nonatomic) double headlineBaselineToSceneHeaderBaselineDistance;                         //@synthesize headlineBaselineToSceneHeaderBaselineDistance=_headlineBaselineToSceneHeaderBaselineDistance - In the implementation block
@property (assign,nonatomic) double sectionTopMargin;                                                      //@synthesize sectionTopMargin=_sectionTopMargin - In the implementation block
@property (assign,nonatomic) double sectionBottomMargin;                                                   //@synthesize sectionBottomMargin=_sectionBottomMargin - In the implementation block
@property (assign,nonatomic) double sectionLeadingMargin;                                                  //@synthesize sectionLeadingMargin=_sectionLeadingMargin - In the implementation block
@property (assign,nonatomic) double sectionTrailingMargin;                                                 //@synthesize sectionTrailingMargin=_sectionTrailingMargin - In the implementation block
@property (assign,nonatomic) double sectionBottomToNextSectionTitleBaselineDistance;                       //@synthesize sectionBottomToNextSectionTitleBaselineDistance=_sectionBottomToNextSectionTitleBaselineDistance - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionTitleMargin;                                              //@synthesize sectionTitleMargin=_sectionTitleMargin - In the implementation block
@property (assign,nonatomic) double minimumMarginBelowHeadline;                                            //@synthesize minimumMarginBelowHeadline=_minimumMarginBelowHeadline - In the implementation block
@property (assign,nonatomic) double minimumMarginBelowStatus;                                              //@synthesize minimumMarginBelowStatus=_minimumMarginBelowStatus - In the implementation block
@property (assign,nonatomic) double rowSpacing;                                                            //@synthesize rowSpacing=_rowSpacing - In the implementation block
@property (assign,nonatomic) double columnSpacing;                                                         //@synthesize columnSpacing=_columnSpacing - In the implementation block
@property (nonatomic,retain) NSNumber * overrideNumberOfColumns;                                           //@synthesize overrideNumberOfColumns=_overrideNumberOfColumns - In the implementation block
@property (nonatomic,copy) HUGridCameraCellLayoutOptions * cameraCellOptions;                              //@synthesize cameraCellOptions=_cameraCellOptions - In the implementation block
@property (nonatomic,copy) HUGridHeadlineCellLayoutOptions * headlineCellOptions;                          //@synthesize headlineCellOptions=_headlineCellOptions - In the implementation block
@property (nonatomic,copy) HUGridSceneCellLayoutOptions * sceneCellOptions;                                //@synthesize sceneCellOptions=_sceneCellOptions - In the implementation block
@property (nonatomic,copy) HUGridServiceCellLayoutOptions * serviceCellOptions;                            //@synthesize serviceCellOptions=_serviceCellOptions - In the implementation block
@property (nonatomic,copy) HUNavigationBarLayoutOptions * navigationBarOptions;                            //@synthesize navigationBarOptions=_navigationBarOptions - In the implementation block
@property (nonatomic,copy) HUGridStatusBannerCellLayoutOptions * statusBannerCellOptions;                  //@synthesize statusBannerCellOptions=_statusBannerCellOptions - In the implementation block
@property (nonatomic,readonly) long long viewSizeSubclass; 
@property (nonatomic,readonly) long long cellSizeSubclass; 
@property (nonatomic,readonly) long long numberOfColumns; 
@property (nonatomic,readonly) double pointWidthForCurrentViewSizeSubclass; 
@property (nonatomic,readonly) double pointWidthForFullWidthCell; 
@property (nonatomic,readonly) double cameraCellWidth; 
@property (nonatomic,readonly) double cameraCellHeight; 
@property (nonatomic,readonly) long long numberOfCameraCellsPerRow;                                        //@synthesize numberOfCameraCellsPerRow=_numberOfCameraCellsPerRow - In the implementation block
@property (nonatomic,readonly) double headlineCellHeight; 
@property (nonatomic,readonly) double statusListCellHeight; 
@property (nonatomic,readonly) double sectionHeaderCellHeight; 
@property (nonatomic,readonly) double statusListCellBottomMargin; 
@property (nonatomic,readonly) double largeTitleCellTopMargin; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long contentColorStyle;                                         //@synthesize contentColorStyle=_contentColorStyle - In the implementation block
+(double)preferredControlCenterModuleHeightForViewWidth:(double)arg1 ;
+(id)controlCenterLayoutOptionsForViewSize:(CGSize)arg1 itemType:(unsigned long long)arg2 ;
+(SCD_Struct_HU12)controlCenterGridLayoutForItemType:(unsigned long long)arg1 sizeSubclass:(unsigned long long)arg2 ;
+(unsigned long long)_controlCenterModuleHCFNumberOfColumnsForSizeSubclass:(unsigned long long)arg1 ;
+(id)defaultOptionsForViewSize:(CGSize)arg1 ;
+(id)defaultOptionsForViewSize:(CGSize)arg1 columnStyle:(unsigned long long)arg2 ;
+(id)defaultOptionsForViewSize:(CGSize)arg1 columnStyle:(unsigned long long)arg2 overrideSizeSubclass:(id)arg3 ;
+(unsigned long long)_numberOfColumnsForFlexibleWidthStyleWithSizeSubclass:(long long)arg1 ;
+(id)defaultOptionsForViewSize:(CGSize)arg1 overrideSizeSubclass:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)numberOfColumns;
-(CGSize)viewSize;
-(BOOL)isEditing;
-(void)setScrollDirection:(long long)arg1 ;
-(long long)scrollDirection;
-(void)setEditing:(BOOL)arg1 ;
-(double)rowSpacing;
-(void)setRowSpacing:(double)arg1 ;
-(void)setColumnSpacing:(double)arg1 ;
-(double)columnSpacing;
-(UIFont *)sectionHeaderFont;
-(unsigned long long)maxStatusItemCount;
-(void)setMaxStatusItemCount:(unsigned long long)arg1 ;
-(HUGridSceneCellLayoutOptions *)sceneCellOptions;
-(HUGridServiceCellLayoutOptions *)serviceCellOptions;
-(double)pointWidthForNumberOfColumns:(long long)arg1 ;
-(double)sectionLeadingMargin;
-(double)sectionTrailingMargin;
-(void)setOverrideNumberOfColumns:(NSNumber *)arg1 ;
-(void)setSectionLeadingMargin:(double)arg1 ;
-(void)setSectionTrailingMargin:(double)arg1 ;
-(void)setSectionBottomMargin:(double)arg1 ;
-(void)setSectionTopMargin:(double)arg1 ;
-(double)preferredSectionHeightForNumberOfServiceRows:(unsigned long long)arg1 spanningColumns:(unsigned long long)arg2 ;
-(UIEdgeInsets)sectionTitleMargin;
-(void)setSectionTitleMargin:(UIEdgeInsets)arg1 ;
-(unsigned long long)contentColorStyle;
-(void)setContentColorStyle:(unsigned long long)arg1 ;
-(long long)viewSizeSubclass;
-(double)sectionTopMargin;
-(double)sectionBottomMargin;
-(double)pointWidthForFullWidthCell;
-(double)sectionHeaderCellHeight;
-(void)setSectionBottomToNextSectionTitleBaselineDistance:(double)arg1 ;
-(unsigned long long)columnStyle;
-(HUGridHeadlineCellLayoutOptions *)headlineCellOptions;
-(double)largeTitleCellTopMargin;
-(HUNavigationBarLayoutOptions *)navigationBarOptions;
-(id)initWithViewSize:(CGSize)arg1 columnStyle:(unsigned long long)arg2 overrideSizeSubclass:(id)arg3 ;
-(long long)cellSizeSubclass;
-(void)setCameraCellOptions:(HUGridCameraCellLayoutOptions *)arg1 ;
-(void)setSceneCellOptions:(HUGridSceneCellLayoutOptions *)arg1 ;
-(void)setServiceCellOptions:(HUGridServiceCellLayoutOptions *)arg1 ;
-(void)setStatusBannerCellOptions:(HUGridStatusBannerCellLayoutOptions *)arg1 ;
-(void)setHeadlineFont:(UIFont *)arg1 ;
-(void)setStatusItemFont:(UIFont *)arg1 ;
-(void)setStatusDetailsFont:(UIFont *)arg1 ;
-(void)setSectionHeaderFont:(UIFont *)arg1 ;
-(UIFont *)statusItemFont;
-(void)setHeadlineBaselineToFirstStatusItemBaselineDistance:(double)arg1 ;
-(void)setTopOfViewToFirstStatusItemBaselineDistance:(double)arg1 ;
-(void)setMaxStatusItemNumberOfLines:(unsigned long long)arg1 ;
-(void)setStatusItemBaselineToNextStatusItemBaselineDistance:(double)arg1 ;
-(UIFont *)statusDetailsFont;
-(void)setLastStatusItemBaselineToStatusDetailsBaselineDistance:(double)arg1 ;
-(void)setStatusDetailsBaselineToFirstSectionTitleBaselineDistance:(double)arg1 ;
-(void)setHeadlineBaselineToSceneHeaderBaselineDistance:(double)arg1 ;
-(void)setNavigationBarOptions:(HUNavigationBarLayoutOptions *)arg1 ;
-(void)setHeadlineCellOptions:(HUGridHeadlineCellLayoutOptions *)arg1 ;
-(void)setMinimumMarginBelowHeadline:(double)arg1 ;
-(void)setMinimumMarginBelowStatus:(double)arg1 ;
-(NSNumber *)overrideViewSizeSubclass;
-(BOOL)statusHidden;
-(void)setStatusHidden:(BOOL)arg1 ;
-(BOOL)headlineHidden;
-(void)setHeadlineHidden:(BOOL)arg1 ;
-(UIFont *)headlineFont;
-(double)headlineBaselineToFirstStatusItemBaselineDistance;
-(double)topOfViewToFirstStatusItemBaselineDistance;
-(unsigned long long)maxStatusItemNumberOfLines;
-(double)statusItemBaselineToNextStatusItemBaselineDistance;
-(double)lastStatusItemBaselineToStatusDetailsBaselineDistance;
-(double)statusDetailsBaselineToFirstSectionTitleBaselineDistance;
-(double)headlineBaselineToSceneHeaderBaselineDistance;
-(double)sectionBottomToNextSectionTitleBaselineDistance;
-(double)minimumMarginBelowHeadline;
-(double)minimumMarginBelowStatus;
-(NSNumber *)overrideNumberOfColumns;
-(HUGridCameraCellLayoutOptions *)cameraCellOptions;
-(HUGridStatusBannerCellLayoutOptions *)statusBannerCellOptions;
-(id)_childDisplayOptions;
-(double)_pointWidthForFractionalNumberOfColumns:(double)arg1 ;
-(double)_pointWidthForFixedColumnStyleWithFractionalNumberOfColumns:(double)arg1 ;
-(double)_pointWidthForFlexibleColumnStyleWithFractionalNumberOfColumns:(double)arg1 totalNumberOfColumns:(long long)arg2 totalWidth:(double)arg3 ;
-(double)cameraCellWidth;
-(double)_preferredSectionHeightForNumberOfRows:(unsigned long long)arg1 withCellHeight:(double)arg2 ;
-(double)pointWidthForCurrentViewSizeSubclass;
-(double)cameraCellHeight;
-(double)headlineCellHeight;
-(double)statusListCellHeight;
-(double)statusListCellTopMargin:(BOOL)arg1 forStatusBannerWidth:(double)arg2 havingTitleAndDescription:(id)arg3 contentSizeCategory:(id)arg4 ;
-(double)statusListCellBottomMargin;
-(double)preferredSectionHeightForNumberOfSceneRows:(unsigned long long)arg1 ;
-(void)setColumnStyle:(unsigned long long)arg1 ;
-(long long)numberOfCameraCellsPerRow;
-(void)setOverrideViewSizeSubclass:(NSNumber *)arg1 ;
@end

