/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@interface NTKVisitManager : NSObject
+(id)fallbackVisit;
+(id)sharedVisitManager;
-(id)currentVisit;
-(id)anyVisit;
-(id)startVisitUpdatesWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopVisitUpdatesForToken:(id)arg1 ;
-(id)previousVisit;
@end

