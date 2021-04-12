/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


#import <EventKit/EventKit-Structs.h>
@interface EKCompatibility : NSObject
+(void)performWhileSimulatingLegacyBehaviors:(/*^block*/id)arg1 ;
+(BOOL)simulateLegacyBehaviors;
+(void)setSimulateLegacyBehaviors:(BOOL)arg1 ;
+(void)perform:(/*^block*/id)arg1 whileSimulatingLegacyBehaviors:(BOOL)arg2 ;
+(BOOL)isProgramSDKAtLeast:(SCD_Struct_EK2)arg1 ;
@end

