/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <Weather/Weather-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CityUpdateObserver.h>

@class City, UIView, NSLocale, NSString;

@interface WeatherView : UIView <CityUpdateObserver> {

	City* _city;
	BOOL _showingDay;
	BOOL _showWind;
	UIView* _windView;
	NSLocale* _lastLocale;

}

@property (setter=showCity:,nonatomic,retain) City * city;              //@synthesize city=_city - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)bundle;
-(City *)city;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)resetLocale:(id)arg1 ;
-(void)cleanupWindView;
-(void)showCity:(id)arg1 ;
-(BOOL)updateWeatherDisplayForCity:(id)arg1 ;
-(BOOL)_setCity:(id)arg1 associateAsDelegate:(BOOL)arg2 ;
-(void)cityDidStartWeatherUpdate:(id)arg1 ;
-(void)cityDidFinishWeatherUpdate:(id)arg1 ;
-(void)refreshLocalization;
@end

