/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

