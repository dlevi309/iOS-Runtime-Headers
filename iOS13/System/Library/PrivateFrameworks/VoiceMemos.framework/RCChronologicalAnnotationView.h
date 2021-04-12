/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKitCore/UIView.h>

@class UIFont, RCUIConfiguration, UIColor;

@interface RCChronologicalAnnotationView : UIView {

	double _majorTickMinimumSpacing;
	UIFont* _timeLabelFont;
	BOOL _isPlayback;
	double _contentDuration;
	RCUIConfiguration* _UIConfiguration;
	UIColor* _backgroundDebugColor;
	unsigned long long _debugID;
	SCD_Struct_RC3 _visibleTimeRange;
	SCD_Struct_RC3 _markerClippingRange;

}

@property (assign,nonatomic) SCD_Struct_RC3 visibleTimeRange;                 //@synthesize visibleTimeRange=_visibleTimeRange - In the implementation block
@property (assign,nonatomic) double contentDuration;                          //@synthesize contentDuration=_contentDuration - In the implementation block
@property (assign,nonatomic) SCD_Struct_RC3 markerClippingRange;              //@synthesize markerClippingRange=_markerClippingRange - In the implementation block
@property (assign,nonatomic) BOOL isPlayback;                                 //@synthesize isPlayback=_isPlayback - In the implementation block
@property (nonatomic,copy) RCUIConfiguration * UIConfiguration;               //@synthesize UIConfiguration=_UIConfiguration - In the implementation block
@property (nonatomic,retain) UIColor * backgroundDebugColor;                  //@synthesize backgroundDebugColor=_backgroundDebugColor - In the implementation block
@property (assign,nonatomic) unsigned long long debugID;                      //@synthesize debugID=_debugID - In the implementation block
-(id)description;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setContentDuration:(double)arg1 ;
-(double)contentDuration;
-(void)setVisibleTimeRange:(SCD_Struct_RC3)arg1 ;
-(SCD_Struct_RC3)visibleTimeRange;
-(BOOL)isPlayback;
-(void)setIsPlayback:(BOOL)arg1 ;
-(void)setDebugID:(unsigned long long)arg1 ;
-(void)setMarkerClippingRange:(SCD_Struct_RC3)arg1 ;
-(RCUIConfiguration *)UIConfiguration;
-(void)setUIConfiguration:(RCUIConfiguration *)arg1 ;
-(double)timeLabelsMajorInterval;
-(id)_timeLabelAttributes;
-(long long)tickMarksForMajorInterval:(double)arg1 ;
-(id)_timeLabelAttributesWithFont:(id)arg1 ;
-(void)setBackgroundDebugColor:(UIColor *)arg1 ;
-(CGSize)labelsSize;
-(SCD_Struct_RC3)markerClippingRange;
-(UIColor *)backgroundDebugColor;
-(unsigned long long)debugID;
@end

