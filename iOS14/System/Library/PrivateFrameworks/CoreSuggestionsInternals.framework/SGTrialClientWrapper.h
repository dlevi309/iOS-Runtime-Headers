/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@protocol OS_dispatch_queue;
@class TRIClient, NSObject, NSString;

@interface SGTrialClientWrapper : NSObject {

	TRIClient* _triClient;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSString* _namespaceName;
	NSString* _experimentId;
	int _deploymentId;
	NSString* _treatmentId;

}
-(id)modelPath;
-(id)initWithClientIdentifier:(int)arg1 ;
-(id)treatmentId;
-(id)experimentId;
-(id)deploymentId;
-(void)updateFactors;
-(id)baseModelName;
-(BOOL)refreshEnrollmentInformationForNamespace:(id)arg1 ;
-(void)uncompressModelAndUpdateFactors:(id)arg1 destinationPath:(id)arg2 ;
-(BOOL)_uncompressModelAtPath:(id)arg1 toPath:(id)arg2 ;
-(BOOL)_unarchiveFrom:(id)arg1 to:(id)arg2 ;
-(void)cleanExperimentModelsFromTrialModelsFolder;
-(id)modelPathForCurrentEnrollment;
-(id)modelPathForTriClient:(id)arg1 andNamespace:(id)arg2 ;
-(id)modelPathForExperimentId:(id)arg1 treatmentId:(id)arg2 deploymentId:(id)arg3 ;
-(id)_modelPathForExperimentId:(id)arg1 treatmentId:(id)arg2 deploymentId:(id)arg3 createIfNeeded:(BOOL)arg4 ;
-(id)_modelDirectoryPathCreateIfNeeded:(BOOL)arg1 ;
-(id)_modelNameForCurrentEnrollment;
-(id)_modelNameForExperimentId:(id)arg1 treatmentId:(id)arg2 deploymentId:(id)arg3 ;
@end

