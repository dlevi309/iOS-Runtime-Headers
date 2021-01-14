/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class _UIEdgeFeedbackGenerator, _UIModulationFeedbackGenerator, UIImage, UIColor;

@interface _UISliderDataModel : NSObject {

	CFDictionaryRef _contentLookup;
	_UIEdgeFeedbackGenerator* _edgeFeedbackGenerator;
	_UIModulationFeedbackGenerator* _modulationFeedbackGenerator;
	BOOL _continuous;
	BOOL _showValue;
	BOOL _thumbEnabled;
	BOOL _trackEnabled;
	BOOL _minimumTrackVisible;
	BOOL _enabled;
	BOOL _highlighted;
	BOOL _selected;
	BOOL _tracking;
	float _value;
	float _minValue;
	float _maxValue;
	UIImage* _minimumValueImage;
	UIImage* _maximumValueImage;
	UIColor* _minTintColor;
	UIColor* _maxTintColor;
	UIColor* _thumbTintColor;

}

@property (nonatomic,readonly) float value;                                                             //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) float minimumValue;                                                      //@synthesize minValue=_minValue - In the implementation block
@property (nonatomic,readonly) float maximumValue;                                                      //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,retain) UIImage * minimumValueImage;                                               //@synthesize minimumValueImage=_minimumValueImage - In the implementation block
@property (nonatomic,retain) UIImage * maximumValueImage;                                               //@synthesize maximumValueImage=_maximumValueImage - In the implementation block
@property (assign,getter=isContinuous,nonatomic) BOOL continuous;                                       //@synthesize continuous=_continuous - In the implementation block
@property (nonatomic,retain) UIColor * minimumTrackTintColor;                                           //@synthesize minTintColor=_minTintColor - In the implementation block
@property (nonatomic,retain) UIColor * maximumTrackTintColor;                                           //@synthesize maxTintColor=_maxTintColor - In the implementation block
@property (nonatomic,retain) UIColor * thumbTintColor;                                                  //@synthesize thumbTintColor=_thumbTintColor - In the implementation block
@property (assign,nonatomic) BOOL showValue;                                                            //@synthesize showValue=_showValue - In the implementation block
@property (assign,getter=isThumbEnabled,nonatomic) BOOL thumbEnabled;                                   //@synthesize thumbEnabled=_thumbEnabled - In the implementation block
@property (assign,getter=isTrackEnabled,nonatomic) BOOL trackEnabled;                                   //@synthesize trackEnabled=_trackEnabled - In the implementation block
@property (assign,getter=isMinimumTrackVisible,nonatomic) BOOL minimumTrackVisible;                     //@synthesize minimumTrackVisible=_minimumTrackVisible - In the implementation block
@property (nonatomic,retain) _UIEdgeFeedbackGenerator * edgeFeedbackGenerator; 
@property (nonatomic,retain) _UIModulationFeedbackGenerator * modulationFeedbackGenerator; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                             //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                                     //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                                           //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isTracking,nonatomic) BOOL tracking;                                           //@synthesize tracking=_tracking - In the implementation block
-(void)setTracking:(BOOL)arg1 ;
-(id)maximumTrackImageForState:(unsigned long long)arg1 ;
-(UIImage *)maximumValueImage;
-(float)maximumValue;
-(UIColor *)thumbTintColor;
-(void)setThumbEnabled:(BOOL)arg1 ;
-(void)setThumbTintColor:(UIColor *)arg1 ;
-(id)init;
-(BOOL)isTracking;
-(void)setContinuous:(BOOL)arg1 ;
-(void)setMinimumTrackVisible:(BOOL)arg1 ;
-(BOOL)setMinimumValue:(float)arg1 ;
-(id)thumbImageForState:(unsigned long long)arg1 ;
-(void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isSelected;
-(BOOL)isMinimumTrackVisible;
-(BOOL)isTrackEnabled;
-(void)setMaximumValueImage:(UIImage *)arg1 ;
-(void)setThumbImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)setMinimumTrackTintColor:(UIColor *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setModulationFeedbackGenerator:(_UIModulationFeedbackGenerator *)arg1 ;
-(_UIEdgeFeedbackGenerator *)edgeFeedbackGenerator;
-(BOOL)setValue:(float)arg1 ;
-(BOOL)isContinuous;
-(BOOL)showValue;
-(_UIModulationFeedbackGenerator *)modulationFeedbackGenerator;
-(void)setTrackEnabled:(BOOL)arg1 ;
-(void)setMaximumTrackImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(id)minimumTrackImageForState:(unsigned long long)arg1 ;
-(BOOL)isHighlighted;
-(void)setMinimumTrackImage:(id)arg1 forStates:(unsigned long long)arg2 ;
-(void)setMinimumValueImage:(UIImage *)arg1 ;
-(void)setMaximumTrackImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setEdgeFeedbackGenerator:(_UIEdgeFeedbackGenerator *)arg1 ;
-(void)setMaximumTrackTintColor:(UIColor *)arg1 ;
-(BOOL)isEnabled;
-(void)_setContent:(id)arg1 forState:(unsigned long long)arg2 ;
-(float)minimumValue;
-(UIColor *)minimumTrackTintColor;
-(void)setMinimumTrackImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(BOOL)_setValue:(float)arg1 minValue:(float)arg2 maxValue:(float)arg3 ;
-(void)setShowValue:(BOOL)arg1 ;
-(BOOL)isThumbEnabled;
-(id)_contentForState:(unsigned long long)arg1 ;
-(UIImage *)minimumValueImage;
-(BOOL)setMaximumValue:(float)arg1 ;
-(UIColor *)maximumTrackTintColor;
-(float)value;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
@end

