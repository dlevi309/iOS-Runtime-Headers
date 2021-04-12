/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUViewControllerSpec.h>

@class PUSlideshowViewControllerSpecChange;

@interface PUSlideshowViewControllerSpec : PUViewControllerSpec {

	BOOL _isChromeVisible;
	BOOL _isAirplayScreenAvailable;
	BOOL _isAirplayRouteAvailable;
	BOOL _shouldShowChromeBars;
	BOOL _shouldShowPlaceholder;
	BOOL _shouldObserveAirplayRoute;
	BOOL _shouldShowAirplayButton;
	unsigned long long _mode;

}

@property (nonatomic,readonly) PUSlideshowViewControllerSpecChange * currentChange; 
@property (assign,setter=_setShouldShowPlaceholder:,nonatomic) BOOL shouldShowPlaceholder;                      //@synthesize shouldShowPlaceholder=_shouldShowPlaceholder - In the implementation block
@property (assign,setter=_setShouldShowChromeBars:,nonatomic) BOOL shouldShowChromeBars;                        //@synthesize shouldShowChromeBars=_shouldShowChromeBars - In the implementation block
@property (assign,setter=_setShouldObserveAirplayRoute:,nonatomic) BOOL shouldObserveAirplayRoute;              //@synthesize shouldObserveAirplayRoute=_shouldObserveAirplayRoute - In the implementation block
@property (assign,setter=_setShouldShowAirplayButton:,nonatomic) BOOL shouldShowAirplayButton;                  //@synthesize shouldShowAirplayButton=_shouldShowAirplayButton - In the implementation block
@property (assign,setter=setChromeVisible:,nonatomic) BOOL isChromeVisible;                                     //@synthesize isChromeVisible=_isChromeVisible - In the implementation block
@property (assign,setter=setAirplayScreenAvailable:,nonatomic) BOOL isAirplayScreenAvailable;                   //@synthesize isAirplayScreenAvailable=_isAirplayScreenAvailable - In the implementation block
@property (assign,setter=setAirplayRouteAvailable:,nonatomic) BOOL isAirplayRouteAvailable;                     //@synthesize isAirplayRouteAvailable=_isAirplayRouteAvailable - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                                                         //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseChromeBars; 
@property (nonatomic,readonly) BOOL shouldUseTapGesture; 
@property (nonatomic,readonly) BOOL shouldRegisterToAirplay; 
@property (nonatomic,readonly) BOOL shouldPauseWhenAppResignsActive; 
-(PUSlideshowViewControllerSpecChange *)currentChange;
-(unsigned long long)mode;
-(id)init;
-(BOOL)isChromeVisible;
-(BOOL)shouldShowChromeBars;
-(void)setAirplayRouteAvailable:(BOOL)arg1 ;
-(void)setAirplayScreenAvailable:(BOOL)arg1 ;
-(BOOL)shouldShowPlaceholder;
-(BOOL)shouldShowAirplayButton;
-(BOOL)shouldObserveAirplayRoute;
-(BOOL)isAirplayScreenAvailable;
-(BOOL)shouldRegisterToAirplay;
-(BOOL)shouldPauseWhenAppResignsActive;
-(BOOL)shouldUseTapGesture;
-(BOOL)shouldUseChromeBars;
-(void)_setShouldShowPlaceholder:(BOOL)arg1 ;
-(void)_setShouldShowChromeBars:(BOOL)arg1 ;
-(void)setChromeVisible:(BOOL)arg1 ;
-(id)initWithMode:(unsigned long long)arg1 ;
-(void)_setShouldObserveAirplayRoute:(BOOL)arg1 ;
-(void)_setShouldShowAirplayButton:(BOOL)arg1 ;
-(BOOL)isAirplayRouteAvailable;
-(void)updateIfNeeded;
-(id)newSpecChange;
@end

