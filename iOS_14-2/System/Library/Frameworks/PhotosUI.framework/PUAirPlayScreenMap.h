/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class NSMapTable;

@interface PUAirPlayScreenMap : NSObject {

	NSMapTable* _screens;

}
-(id)init;
-(void)addDetectedAirPlayScreen:(id)arg1 ;
-(id)allAirPlayScreens;
-(id)airPlayScreenForScreen:(id)arg1 ;
-(unsigned long long)airPlayScreensCount;
-(void)removeAirPlayScreen:(id)arg1 ;
@end

