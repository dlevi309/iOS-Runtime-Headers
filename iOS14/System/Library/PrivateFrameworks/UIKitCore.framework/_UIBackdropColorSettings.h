/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class _UIBackdropViewSettings, UIColor;

@interface _UIBackdropColorSettings : NSObject {

	BOOL _hasObservedValues;
	_UIBackdropViewSettings* _parentSettings;

}

@property (assign,nonatomic) _UIBackdropViewSettings * parentSettings;              //@synthesize parentSettings=_parentSettings - In the implementation block
@property (assign,nonatomic) BOOL hasObservedValues;                                //@synthesize hasObservedValues=_hasObservedValues - In the implementation block
@property (assign,nonatomic) double averageHue; 
@property (assign,nonatomic) double averageSaturation; 
@property (assign,nonatomic) double averageBrightness; 
@property (assign,nonatomic) double contrast; 
@property (nonatomic,readonly) UIColor * color; 
-(_UIBackdropViewSettings *)parentSettings;
-(void)setDefaultValues;
-(void)setContrast:(double)arg1 ;
-(double)contrast;
-(void)setAverageHue:(double)arg1 ;
-(double)averageSaturation;
-(UIColor *)color;
-(void)setValuesFromModel:(id)arg1 ;
-(BOOL)applyCABackdropLayerStatistics:(id)arg1 ;
-(BOOL)hasObservedValues;
-(void)setHasObservedValues:(BOOL)arg1 ;
-(void)setAverageSaturation:(double)arg1 ;
-(double)averageBrightness;
-(void)setAverageBrightness:(double)arg1 ;
-(double)averageHue;
-(void)setParentSettings:(_UIBackdropViewSettings *)arg1 ;
@end

