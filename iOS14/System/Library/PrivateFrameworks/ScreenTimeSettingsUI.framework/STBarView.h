/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)useVibrancy;
-(void)setColor:(UIColor *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setDarkened:(BOOL)arg1 ;
-(BOOL)isDarkened;
-(NSArray *)sectionViews;
-(void)setSectionViews:(NSArray *)arg1 ;
-(void)setDataPoint:(STUsageReportGraphDataPoint *)arg1 ;
-(STUsageReportGraphDataPoint *)dataPoint;
-(void)setUpSections;
-(void)setUpSectionHeightConstraints;
-(UIView *)darkenedView;
-(void)setSectionHeightConstraints:(NSArray *)arg1 ;
-(NSArray *)sectionHeightConstraints;
-(id)initWithDataPoint:(id)arg1 useVibrancy:(BOOL)arg2 ;
@end

