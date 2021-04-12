/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <MenstrualCyclesAppPlugin/MenstrualCyclesAppPlugin-Structs.h>
#import <libobjc.A.dylib/NSObject.h>

@class NSString;

@interface MenstrualCyclesAppPlugin.MenstrualCyclesAvailabilityProvider : NSObject <NSObject> {

	 isRunning;
	 internalAvailability;
	 observers;
	 lock;
	 notifyQueue;
	 onboardingManager;
	 userCharacteristics;

}
-(id)init;
-(void)dealloc;
-(void)onboardingStatusDidUpdate:(id)arg1 ;
@end

