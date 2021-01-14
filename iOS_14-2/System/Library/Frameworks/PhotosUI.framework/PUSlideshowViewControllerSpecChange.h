/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUViewControllerSpecChange.h>

@interface PUSlideshowViewControllerSpecChange : PUViewControllerSpecChange {

	BOOL _chromeVisibilityChanged;
	BOOL _shouldShowPlaceholderChanged;
	BOOL _shouldShowChromeBarsChanged;
	BOOL _shouldObserveAirplayRouteChanged;
	BOOL _shouldShowAirplayButtonChanged;

}

@property (assign,setter=_setShouldShowPlaceholderChanged:,nonatomic) BOOL shouldShowPlaceholderChanged;                      //@synthesize shouldShowPlaceholderChanged=_shouldShowPlaceholderChanged - In the implementation block
@property (assign,setter=_setShouldShowChromeBarsChanged:,nonatomic) BOOL shouldShowChromeBarsChanged;                        //@synthesize shouldShowChromeBarsChanged=_shouldShowChromeBarsChanged - In the implementation block
@property (assign,setter=_setShouldObserveAirplayRouteChanged:,nonatomic) BOOL shouldObserveAirplayRouteChanged;              //@synthesize shouldObserveAirplayRouteChanged=_shouldObserveAirplayRouteChanged - In the implementation block
@property (assign,setter=_setShouldShowAirplayButtonChanged:,nonatomic) BOOL shouldShowAirplayButtonChanged;                  //@synthesize shouldShowAirplayButtonChanged=_shouldShowAirplayButtonChanged - In the implementation block
@property (nonatomic,readonly) BOOL chromeVisibilityChanged;                                                                  //@synthesize chromeVisibilityChanged=_chromeVisibilityChanged - In the implementation block
-(BOOL)changed;
-(BOOL)shouldShowPlaceholderChanged;
-(BOOL)shouldShowAirplayButtonChanged;
-(BOOL)shouldObserveAirplayRouteChanged;
-(BOOL)shouldShowChromeBarsChanged;
-(void)_setShouldShowPlaceholderChanged:(BOOL)arg1 ;
-(void)_setShouldShowChromeBarsChanged:(BOOL)arg1 ;
-(void)_setShouldObserveAirplayRouteChanged:(BOOL)arg1 ;
-(void)_setShouldShowAirplayButtonChanged:(BOOL)arg1 ;
-(BOOL)chromeVisibilityChanged;
@end

