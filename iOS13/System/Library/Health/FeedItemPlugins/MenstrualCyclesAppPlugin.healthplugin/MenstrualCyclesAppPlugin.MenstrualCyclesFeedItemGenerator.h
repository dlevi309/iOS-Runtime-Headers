/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <HealthExperience/HealthExperience.ComposableAsyncOperation.h>

@class NSString;

@interface MenstrualCyclesAppPlugin.MenstrualCyclesFeedItemGenerator : HealthExperience.ComposableAsyncOperation {

	 context;
	 analysisProvider;
	 menstrualCyclesAvailabilityProvider;

}

@property (readonly,nonatomic) NSString * description; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)cancel;
-(void)main;
@end

