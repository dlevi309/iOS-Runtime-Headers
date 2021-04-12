/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HMIHomeTask.h>

@protocol HMIPersonManagerDataSource;
@class NSUUID;

@interface HMIUpdatePersonsModelTask : HMIHomeTask {

	BOOL _externalLibrary;
	BOOL _removeExcessFaceCrops;
	NSUUID* _sourceUUID;
	id<HMIPersonManagerDataSource> _dataSource;

}

@property (readonly) NSUUID * sourceUUID;                                                        //@synthesize sourceUUID=_sourceUUID - In the implementation block
@property (readonly) id<HMIPersonManagerDataSource> dataSource;                                  //@synthesize dataSource=_dataSource - In the implementation block
@property (getter=isExternalLibrary,readonly) BOOL externalLibrary;                              //@synthesize externalLibrary=_externalLibrary - In the implementation block
@property (getter=shouldRemoveExcessFaceCrops,readonly) BOOL removeExcessFaceCrops;              //@synthesize removeExcessFaceCrops=_removeExcessFaceCrops - In the implementation block
+(id)logCategory;
-(id<HMIPersonManagerDataSource>)dataSource;
-(id)logIdentifier;
-(void)main;
-(NSUUID *)sourceUUID;
-(id)initWithTaskID:(int)arg1 homeUUID:(id)arg2 sourceUUID:(id)arg3 dataSource:(id)arg4 externalLibrary:(BOOL)arg5 removeExcessFaceCrops:(BOOL)arg6 ;
-(BOOL)isExternalLibrary;
-(id)limitEnforcedSubsetFromPersons:(id)arg1 ;
-(BOOL)shouldRemoveExcessFaceCrops;
-(void)subsampleFacesForPersons:(id)arg1 withFaceObservationsMap:(id)arg2 dataSource:(id)arg3 vnUUIDToFaceCropUUIDMap:(id)arg4 ;
@end

