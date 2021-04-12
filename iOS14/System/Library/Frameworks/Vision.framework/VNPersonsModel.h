/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@protocol VNPersonsModelDataSource;
#import <Vision/Vision-Structs.h>
@class VNPersonsModelConfiguration, VNPersonsModelFaceModel;

@interface VNPersonsModel : NSObject {

	VNPersonsModelConfiguration* _configuration;
	id<VNPersonsModelDataSource> _dataSource;
	unsigned long long _lastDataChangeSequenceNumber;
	VNPersonsModelFaceModel* _faceModel_DO_NOT_ACCESS_DIRECTLY;

}

@property (nonatomic,copy,readonly) VNPersonsModelConfiguration * configuration; 
+(id)configurationFromLoadedObjects:(id)arg1 error:(id*)arg2 ;
+(id)newModelFromVersion:(unsigned long long)arg1 objects:(id)arg2 error:(id*)arg3 ;
+(Class)_modelClassForKind:(unsigned)arg1 error:(id*)arg2 ;
+(id)versionNumbersEncodedInClass:(Class)arg1 withMethodNamePrefix:(id)arg2 suffix:(id)arg3 ;
+(id)supportedReadVersions;
+(id)_readModelObjectsFromStream:(id)arg1 options:(id)arg2 actionBlock:(/*^block*/id)arg3 progressBlock:(/*^block*/id)arg4 modelClass:(Class*)arg5 version:(unsigned long long*)arg6 error:(id*)arg7 ;
+(id)_modelFromStream:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)modelFromStream:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)_modelFromUnopenedStream:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)modelFromData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)modelFromURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)_modelInformationFromUnopenedStream:(id)arg1 error:(id*)arg2 ;
+(id)informationForModelWithData:(id)arg1 error:(id*)arg2 ;
+(id)informationForModelWithURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)readObjectForVersion1Tag:(unsigned)arg1 fromInputStream:(id)arg2 intoObjectDictionary:(id)arg3 md5Context:(CC_MD5state_st*)arg4 error:(id*)arg5 ;
-(unsigned long long)personCount;
-(id)trainingFaceObservationsForPersonWithUniqueIdentifier:(id)arg1 canceller:(id)arg2 error:(id*)arg3 ;
-(id)personUniqueIdentifiers;
-(id)description;
-(VNPersonsModelConfiguration *)configuration;
-(id)upToDateFaceModelWithCanceller:(id)arg1 error:(id*)arg2 ;
-(id)faceCountsForAllPersons;
-(id)_dataSourceAndReturnError:(id*)arg1 ;
-(id)initWithConfiguration:(id)arg1 dataSource:(id)arg2 ;
-(BOOL)updateInternalConfigurationWithModelFaceprintRequestRevision:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)predictPersonFromFaceObservation:(id)arg1 limit:(unsigned long long)arg2 canceller:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)arg1 ;
-(id)faceObservationsForPersonWithUniqueIdentifier:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)indexOfFaceprintObjectFrom:(id)arg1 withEquivalentDescriptorTo:(id)arg2 ;
-(id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg1 ;
@end

