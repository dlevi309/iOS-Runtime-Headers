/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUAirPlayScreenReceiver;
@class PUAirPlayScreenMap, NSArray;

@interface PUAirPlayScreenDetector : NSObject {

	id<PUAirPlayScreenReceiver> _receiver;
	PUAirPlayScreenMap* __detectedScreensMap;

}

@property (setter=_setDetectedScreensMap:,nonatomic,retain) PUAirPlayScreenMap * _detectedScreensMap;              //@synthesize _detectedScreensMap=__detectedScreensMap - In the implementation block
@property (assign,nonatomic,__weak) id<PUAirPlayScreenReceiver> receiver;                                          //@synthesize receiver=_receiver - In the implementation block
@property (nonatomic,readonly) NSArray * availableScreens; 
-(id<PUAirPlayScreenReceiver>)receiver;
-(id)init;
-(NSArray *)availableScreens;
-(void)setReceiver:(id<PUAirPlayScreenReceiver>)arg1 ;
-(void)_scanForAvailableScreensIfNeeded;
-(void)_detectedNewScreen:(id)arg1 ;
-(void)_setUpScreenNotifications;
-(void)_lostScreen:(id)arg1 ;
-(void)_setDetectedScreensMap:(id)arg1 ;
-(PUAirPlayScreenMap *)_detectedScreensMap;
-(BOOL)shouldIgnoreScreen:(id)arg1 ;
@end

