/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
*/


#import <MediaExperience/MediaExperience-Structs.h>
@class NSString, NSMutableArray;

@interface MXSystemController : NSObject {

	BOOL mAppWantsVolumeChanges;
	BOOL mCanBeNowPlayingApp;
	int mClientPID;
	int mPIDToInheritAppStateFrom;
	NSString* mDisplayID;
	NSMutableArray* mNotificationsSubscribedTo;
	SecTaskRef mSecTask;

}

@property (readonly) BOOL phoneCallExists; 
@property (readonly) BOOL isSomeoneRecording; 
@property (readonly) BOOL someLongFormVideoClientIsPlaying; 
@property (readonly) BOOL someLongFormVideoClientIsActiveOverAirPlayVideo; 
@property (readonly) BOOL someLongFormVideoClientIsPlayingOverAirPlayVideo; 
+(void)updateMXSystemControllerList;
+(id)getNotificationSenderQueue;
+(void)notifyAll:(id)arg1 payload:(id)arg2 dontPostIfSuspended:(BOOL)arg3 ;
+(int)getPIDToInheritAppStateFromForPID:(int)arg1 ;
+(int)getPIDForAnyAppThatWantsVolumeChanges;
+(void)dumpInfoOfMXSystemControllers;
+(BOOL)getCanBeNowPlayingAppForPID:(int)arg1 ;
-(id)getDisplayID;
-(id)initWithPID:(int)arg1 ;
-(id)info;
-(BOOL)phoneCallExists;
-(int)setAttributeForKey:(id)arg1 andValue:(const void*)arg2 ;
-(int)copyAttributeForKey:(id)arg1 withValueOut:(void*)arg2 ;
-(int)applyPIDToInheritAppStateFrom:(const void*)arg1 ;
-(BOOL)isSomeoneRecording;
-(BOOL)someLongFormVideoClientIsActiveOverAirPlayVideo;
-(void)applyCanBeNowPlayingApp:(const void*)arg1 ;
-(BOOL)someLongFormVideoClientIsPlaying;
-(void)dealloc;
-(BOOL)someLongFormVideoClientIsPlayingOverAirPlayVideo;
@end

