/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)initializeForAdmissionChecking:(BOOL)arg1 ;
+(id)sharedComplication;
-(id)CDAttributeForComplication:(id)arg1 error:(id*)arg2 ;
-(int)remainingPushesOnComplicationForiOSApplicationWithBundleID:(id)arg1 ;
-(void)readOutActiveComplications;
-(void)setActiveComplications:(NSDictionary *)arg1 ;
-(id)initForComplications;
-(void)meteringUpdateOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 ;
-(BOOL)admissionCheckOnComplication:(id)arg1 forRemote:(BOOL)arg2 error:(id*)arg3 ;
-(int)remainingPushesOnComplication:(id)arg1 andReduceBy:(id)arg2 ;
-(BOOL)watchIsCharging;
-(void)meteringStoppedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 ;
-(BOOL)isBundleActiveComplication:(id)arg1 ;
-(void)meteringStartedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 ;
-(NSDictionary *)activeComplications;
@end

