/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


#import <EventKit/EventKit-Structs.h>
@interface EKCompatibility : NSObject
+(BOOL)simulateLegacyBehaviors;
+(BOOL)isProgramSDKAtLeast:(SCD_Struct_EK2)arg1 ;
+(void)perform:(/*^block*/id)arg1 whileSimulatingLegacyBehaviors:(BOOL)arg2 ;
+(void)setSimulateLegacyBehaviors:(BOOL)arg1 ;
+(void)performWhileSimulatingLegacyBehaviors:(/*^block*/id)arg1 ;
@end

