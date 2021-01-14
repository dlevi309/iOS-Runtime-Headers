/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSMutableDictionary;

@interface GEONotificationPreferenceManager : NSObject {

	NSMutableDictionary* _enableFlags;

}
+(id)sharedManager;
-(id)init;
-(BOOL)isEnabledForSubTestWithName:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 forSubTestWithName:(id)arg2 ;
-(void)reset;
@end

