/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	 didUpdate;

}
-(id)init;
-(void)dealloc;
-(void)onboardingStatusDidUpdate:(id)arg1 ;
@end

