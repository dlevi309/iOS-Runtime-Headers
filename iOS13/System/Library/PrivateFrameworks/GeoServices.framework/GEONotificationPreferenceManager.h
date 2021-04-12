/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSMutableDictionary;

@interface GEONotificationPreferenceManager : NSObject {

	NSMutableDictionary* _enableFlags;

}
+(id)sharedManager;
-(id)init;
-(void)reset;
-(BOOL)isEnabledForSubTestWithName:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 forSubTestWithName:(id)arg2 ;
@end

