/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSMutableArray, NSMutableDictionary;

@interface HFMediaAccessoryUtility : NSObject {

	NSMutableArray* _uuidTrackingList;
	NSMutableDictionary* _restartStateList;

}

@property (retain) NSMutableArray * uuidTrackingList;                   //@synthesize uuidTrackingList=_uuidTrackingList - In the implementation block
@property (retain) NSMutableDictionary * restartStateList;              //@synthesize restartStateList=_restartStateList - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)isHomePodRestartingCurrently:(id)arg1 ;
-(NSMutableDictionary *)restartStateList;
-(NSMutableArray *)uuidTrackingList;
-(BOOL)checkIfAccessoryisPartofHomeAndHasLanguageSettings:(id)arg1 ;
-(id)_hf_allHomePodProfiles;
-(BOOL)checkIfLanguageSetupIsDoneForAccessory:(id)arg1 ;
-(BOOL)isHomePodRestartInitiated:(id)arg1 ;
-(void)updateHomePodAccessoryRestartState:(unsigned long long)arg1 with:(id)arg2 ;
-(void)markUUIDReachableViaRapport:(id)arg1 ;
-(void)markUUIDUnreachableViaRapport:(id)arg1 ;
-(void)setUuidTrackingList:(NSMutableArray *)arg1 ;
-(void)setRestartStateList:(NSMutableDictionary *)arg1 ;
@end

