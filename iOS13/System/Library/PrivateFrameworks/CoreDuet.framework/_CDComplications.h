/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol OS_dispatch_queue;
@class NSObject, NSUserDefaults, NSMutableDictionary, NSDictionary;

@interface _CDComplications : NSObject {

	NSObject*<OS_dispatch_queue> complicationQueue;
	int deviceChangeToken;
	NSUserDefaults* pushLimits;
	NSMutableDictionary* meterTokens;
	NSDictionary* _activeComplications;

}

@property (copy) NSDictionary * activeComplications;              //@synthesize activeComplications=_activeComplications - In the implementation block
+(id)sharedComplication;
+(id)initializeForAdmissionChecking:(BOOL)arg1 ;
-(id)initForComplications;
-(void)setActiveComplications:(NSDictionary *)arg1 ;
-(void)readOutActiveComplications;
-(int)remainingPushesOnComplication:(id)arg1 andReduceBy:(id)arg2 ;
-(NSDictionary *)activeComplications;
-(BOOL)watchIsCharging;
-(int)remainingPushesOnComplicationForiOSApplicationWithBundleID:(id)arg1 ;
-(BOOL)admissionCheckOnComplication:(id)arg1 forRemote:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)isBundleActiveComplication:(id)arg1 ;
-(void)meteringStartedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 ;
-(void)meteringUpdateOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 ;
-(void)meteringStoppedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 ;
-(id)CDAttributeForComplication:(id)arg1 error:(id*)arg2 ;
@end

