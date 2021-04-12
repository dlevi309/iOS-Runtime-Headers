/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/

#import <NanoWeatherComplicationsCompanion/NanoWeatherComplicationsCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKFullColorImageView.h>

@protocol CLKMonochromeFilterProvider;
@class CLKDevice, UILabel, NSString;

@interface NWCWindObservationsView : UIView <CLKFullColorImageView> {

	id<CLKMonochromeFilterProvider> _filterProvider;
	CLKDevice* _device;
	UILabel* _windDirectionAbbreviationLabel;
	UILabel* _windSpeedLabel;
	UILabel* _windUnitLabel;

}

@property (nonatomic,retain) CLKDevice * device;                                                 //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) UILabel * windDirectionAbbreviationLabel;                           //@synthesize windDirectionAbbreviationLabel=_windDirectionAbbreviationLabel - In the implementation block
@property (nonatomic,retain) UILabel * windSpeedLabel;                                           //@synthesize windSpeedLabel=_windSpeedLabel - In the implementation block
@property (nonatomic,retain) UILabel * windUnitLabel;                                            //@synthesize windUnitLabel=_windUnitLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
-(CLKDevice *)device;
-(void)setDevice:(CLKDevice *)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(id)initFullColorImageViewWithDevice:(id)arg1 ;
-(void)pauseLiveFullColorImageView;
-(void)resumeLiveFullColorImageView;
-(void)configureWithImageProvider:(id)arg1 reason:(long long)arg2 ;
-(UILabel *)windDirectionAbbreviationLabel;
-(UILabel *)windSpeedLabel;
-(UILabel *)windUnitLabel;
-(void)_applyConstraintsWithLayoutConstants:(SCD_Struct_NW3)arg1 ;
-(void)_processWindSpeed:(id)arg1 unit:(id)arg2 directionAbbreviation:(id)arg3 ;
-(void)setWindDirectionAbbreviationLabel:(UILabel *)arg1 ;
-(void)setWindSpeedLabel:(UILabel *)arg1 ;
-(void)setWindUnitLabel:(UILabel *)arg1 ;
@end

