/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)bundle;
-(City *)city;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)showCity:(id)arg1 ;
-(void)cleanupWindView;
-(void)resetLocale:(id)arg1 ;
-(BOOL)updateWeatherDisplayForCity:(id)arg1 ;
-(void)cityDidStartWeatherUpdate:(id)arg1 ;
-(BOOL)_setCity:(id)arg1 associateAsDelegate:(BOOL)arg2 ;
-(void)refreshLocalization;
-(void)cityDidFinishWeatherUpdate:(id)arg1 ;
-(void)dealloc;
@end

