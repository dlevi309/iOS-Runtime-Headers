/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(double)_spacingAdjustmentFontSize;
+(id)timeMarkerFontForSizeClass:(long long)arg1 ;
-(void)updateTime;
-(id)initWithFrame:(CGRect)arg1 sizeClass:(long long)arg2 ;
-(BOOL)showsThumb;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateTimeWithForce:(BOOL)arg1 ;
-(BOOL)showsLine;
-(void)drawRect:(CGRect)arg1 ;
-(void)setShowsLine:(BOOL)arg1 ;
-(void)_updateTimeLabelColor;
-(UILabel *)currentTimeLabel;
-(CGRect)_lineFrame;
-(CGRect)currentTimeFrame;
-(double)markerMidHeight;
-(void)invalidateFonts;
-(void)setCurrentTimeLabel:(UILabel *)arg1 ;
-(void)setShowsThumb:(BOOL)arg1 ;
-(double)markerWidth;
@end

