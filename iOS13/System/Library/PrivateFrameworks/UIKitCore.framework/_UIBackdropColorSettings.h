/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UIColor *)color;
-(double)contrast;
-(void)setContrast:(double)arg1 ;
-(void)setDefaultValues;
-(double)averageBrightness;
-(double)averageSaturation;
-(void)setParentSettings:(_UIBackdropViewSettings *)arg1 ;
-(void)setValuesFromModel:(id)arg1 ;
-(void)setAverageHue:(double)arg1 ;
-(void)setAverageSaturation:(double)arg1 ;
-(void)setAverageBrightness:(double)arg1 ;
-(double)averageHue;
-(BOOL)applyCABackdropLayerStatistics:(id)arg1 ;
-(_UIBackdropViewSettings *)parentSettings;
-(BOOL)hasObservedValues;
-(void)setHasObservedValues:(BOOL)arg1 ;
@end

