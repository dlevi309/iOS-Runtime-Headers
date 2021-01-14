/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSString;

@interface MPAVRoutingTableViewCellSubtitleTextState : NSObject {

	BOOL _animating;
	NSString* _routeUID;
	NSString* _batteryText;
	NSString* _pairedDeviceText;
	NSString* _localizedSubtitle;
	unsigned long long _currentVisibleTextType;

}

@property (assign,nonatomic) unsigned long long currentVisibleTextType;                      //@synthesize currentVisibleTextType=_currentVisibleTextType - In the implementation block
@property (nonatomic,readonly) BOOL hasVisibleTextTypeToShow; 
@property (nonatomic,readonly) BOOL hasVisibleTextTypeToTransitionTo; 
@property (nonatomic,copy,readonly) NSString * stringForCurrentVisibleTextType; 
@property (nonatomic,copy) NSString * routeUID;                                              //@synthesize routeUID=_routeUID - In the implementation block
@property (nonatomic,copy) NSString * batteryText;                                           //@synthesize batteryText=_batteryText - In the implementation block
@property (nonatomic,copy) NSString * pairedDeviceText;                                      //@synthesize pairedDeviceText=_pairedDeviceText - In the implementation block
@property (nonatomic,copy) NSString * localizedSubtitle;                                     //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                              //@synthesize animating=_animating - In the implementation block
-(NSString *)routeUID;
-(void)setBatteryText:(NSString *)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(void)transitionToNextAvailableVisibleTextType;
-(unsigned long long)currentVisibleTextType;
-(void)setRouteUID:(NSString *)arg1 ;
-(unsigned long long)_nextAvailableVisibleTextType;
-(void)setCurrentVisibleTextType:(unsigned long long)arg1 ;
-(NSString *)stringForCurrentVisibleTextType;
-(NSString *)localizedSubtitle;
-(BOOL)hasVisibleTextTypeToShow;
-(void)setLocalizedSubtitle:(NSString *)arg1 ;
-(NSString *)pairedDeviceText;
-(BOOL)hasVisibleTextTypeToTransitionTo;
-(void)resetForNewRoute;
-(void)setPairedDeviceText:(NSString *)arg1 ;
-(id)_stringForVisibleTextType:(unsigned long long)arg1 ;
-(NSString *)batteryText;
-(BOOL)isAnimating;
@end

