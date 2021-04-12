/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSDictionary, HMFUnfairLock, HMFTimer, NSString;

@interface HMIPersonsModelManager : HMFObject <HMFTimerDelegate, HMFLogging> {

	NSDictionary* _userDefinedPersonLinksByHome;
	HMFUnfairLock* _lock;
	HMFTimer* _watchdogTimer;
	NSDictionary* _personsModelsByHome;
	NSDictionary* _equivalencyTablesByHome;

}

@property (readonly) NSDictionary * userDefinedPersonLinksByHome;              //@synthesize userDefinedPersonLinksByHome=_userDefinedPersonLinksByHome - In the implementation block
@property (nonatomic,readonly) HMFUnfairLock * lock;                           //@synthesize lock=_lock - In the implementation block
@property (readonly) HMFTimer * watchdogTimer;                                 //@synthesize watchdogTimer=_watchdogTimer - In the implementation block
@property (readonly) NSDictionary * personsModelsByHome;                       //@synthesize personsModelsByHome=_personsModelsByHome - In the implementation block
@property (readonly) NSDictionary * equivalencyTablesByHome;                   //@synthesize equivalencyTablesByHome=_equivalencyTablesByHome - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)loadModelAtPath:(id)arg1 error:(id*)arg2 ;
+(id)sharedInstance;
+(BOOL)persistModel:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
+(BOOL)persistUserDefinedPersonLinks:(id)arg1 forHomeUUID:(id)arg2 error:(id*)arg3 ;
+(id)getModelStoragePathForModel:(id)arg1 error:(id*)arg2 ;
+(id)getUserDefinedPersonLinksStoragePathForHomeUUID:(id)arg1 error:(id*)arg2 ;
+(id)getRootModelStoragePathWithError:(id*)arg1 ;
+(id)getModelStoragePathForHome:(id)arg1 error:(id*)arg2 ;
+(id)loadUserDefinedPersonLinksForHomeUUID:(id)arg1 error:(id*)arg2 ;
-(void)timerDidFire:(id)arg1 ;
-(id)init;
-(HMFUnfairLock *)lock;
-(HMFTimer *)watchdogTimer;
-(void)reset;
-(id)predictPersonFromFaceObservation:(id)arg1 homeUUID:(id)arg2 error:(id*)arg3 ;
-(id)summaryForHomeUUID:(id)arg1 error:(id*)arg2 ;
-(BOOL)removePersonsModelForHomeUUID:(id)arg1 sourceUUID:(id)arg2 error:(id*)arg3 ;
-(NSDictionary *)personsModelsByHome;
-(NSDictionary *)userDefinedPersonLinksByHome;
-(BOOL)loadModelsWithError:(id*)arg1 ;
-(id)homePersonsModelForHomeWithUUID:(id)arg1 ;
-(id)buildEquivalencyMapForPersonsModels:(id)arg1 userDefinedPersonLinks:(id)arg2 error:(id*)arg3 ;
-(NSDictionary *)equivalencyTablesByHome;
-(id)modelURLsFromPath:(id)arg1 error:(id*)arg2 ;
-(id)loadPersonsModelFromURL:(id)arg1 externalLibrary:(BOOL)arg2 homeUUID:(id)arg3 error:(id*)arg4 ;
-(BOOL)buildPersonsModelForHomeUUID:(id)arg1 sourceUUID:(id)arg2 externalLibrary:(BOOL)arg3 faceObservationsByPerson:(id)arg4 error:(id*)arg5 ;
-(id)predictHomePersonFromFaceObservation:(id)arg1 homeUUID:(id)arg2 error:(id*)arg3 ;
-(id)equivalencyCellForPerson:(id)arg1 homeUUID:(id)arg2 error:(id*)arg3 ;
@end

