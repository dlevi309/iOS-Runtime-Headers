/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/SleepHealthAppPlugin.healthplugin/SleepHealthAppPlugin
*/

#import <libobjc.A.dylib/HMHomeManagerDelegate.h>

@interface SleepHealthAppPlugin.HomesProvider : NSObject <HMHomeManagerDelegate> {

	 homesPublisher;
	 homeManager;

}
-(void)homeManager:(id)arg1 didAddHome:(id)arg2 ;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(void)homeManager:(id)arg1 didRemoveHome:(id)arg2 ;
-(id)init;
@end

