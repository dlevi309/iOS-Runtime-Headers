/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <UIKitCore/UIView.h>

@class STUsageReportGraphDataPoint, UIColor, NSArray, UIView;

@interface STBarView : UIView {

	BOOL _useVibrancy;
	STUsageReportGraphDataPoint* _dataPoint;
	UIColor* _color;
	NSArray* _sectionViews;
	NSArray* _sectionHeightConstraints;
	UIView* _darkenedView;

}

@property (readonly) BOOL useVibrancy;                                             //@synthesize useVibrancy=_useVibrancy - In the implementation block
@property (nonatomic,copy) NSArray * sectionViews;                                 //@synthesize sectionViews=_sectionViews - In the implementation block
@property (nonatomic,copy) NSArray * sectionHeightConstraints;                     //@synthesize sectionHeightConstraints=_sectionHeightConstraints - In the implementation block
@property (readonly) UIView * darkenedView;                                        //@synthesize darkenedView=_darkenedView - In the implementation block
@property (nonatomic,retain) STUsageReportGraphDataPoint * dataPoint;              //@synthesize dataPoint=_dataPoint - In the implementation block
@property (nonatomic,copy) UIColor * color;                                        //@synthesize color=_color - In the implementation block
@property (getter=isDarkened) BOOL darkened; 
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setDarkened:(BOOL)arg1 ;
-(BOOL)isDarkened;
-(void)setDataPoint:(STUsageReportGraphDataPoint *)arg1 ;
-(STUsageReportGraphDataPoint *)dataPoint;
-(NSArray *)sectionViews;
-(void)setSectionViews:(NSArray *)arg1 ;
-(void)setUpSections;
-(BOOL)useVibrancy;
-(void)setUpSectionHeightConstraints;
-(UIView *)darkenedView;
-(void)setSectionHeightConstraints:(NSArray *)arg1 ;
-(NSArray *)sectionHeightConstraints;
-(id)initWithDataPoint:(id)arg1 useVibrancy:(BOOL)arg2 ;
@end

