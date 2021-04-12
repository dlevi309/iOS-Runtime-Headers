/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface EKCurrentTimeMarkerView : UIView {

	BOOL _showsThumb;
	BOOL _showsLine;
	UILabel* _currentTimeLabel;

}

@property (nonatomic,retain) UILabel * currentTimeLabel;              //@synthesize currentTimeLabel=_currentTimeLabel - In the implementation block
@property (assign,nonatomic) BOOL showsThumb;                         //@synthesize showsThumb=_showsThumb - In the implementation block
@property (assign,nonatomic) BOOL showsLine;                          //@synthesize showsLine=_showsLine - In the implementation block
@property (nonatomic,readonly) double markerWidth; 
@property (nonatomic,readonly) double markerMidHeight; 
@property (nonatomic,readonly) CGRect currentTimeFrame; 
+(id)timeMarkerFontForSizeClass:(long long)arg1 ;
+(double)_spacingAdjustmentFontSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)updateTime;
-(id)initWithFrame:(CGRect)arg1 sizeClass:(long long)arg2 ;
-(void)setShowsThumb:(BOOL)arg1 ;
-(BOOL)showsThumb;
-(CGRect)currentTimeFrame;
-(void)invalidateFonts;
-(double)markerWidth;
-(void)setShowsLine:(BOOL)arg1 ;
-(void)setCurrentTimeLabel:(UILabel *)arg1 ;
-(UILabel *)currentTimeLabel;
-(void)_updateTimeWithForce:(BOOL)arg1 ;
-(void)_updateTimeLabelColor;
-(CGRect)_lineFrame;
-(double)markerMidHeight;
-(BOOL)showsLine;
@end

