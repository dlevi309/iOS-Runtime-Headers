/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TRIBaseArtifact.h>

@class NSString, NSData, NSDate, NSArray, TRIClientExperiment;

@interface TRIClientExperimentArtifact : TRIBaseArtifact {

	int _experimentState;
	int _experimentType;
	int _experimentPriority;
	int _projectId;
	NSString* _experimentId;
	NSString* _encodedExperimentDefinitionSignature;
	NSData* _publicCertificate;
	NSDate* _modifiedDate;
	NSArray* _namespaces;
	NSArray* _namespaceCompatibilityVersions;

}

@property (nonatomic,retain) NSString * experimentId;                                      //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,retain) NSData * encodedExperimentDefinition; 
@property (nonatomic,retain) NSString * encodedExperimentDefinitionSignature;              //@synthesize encodedExperimentDefinitionSignature=_encodedExperimentDefinitionSignature - In the implementation block
@property (nonatomic,retain) NSData * publicCertificate;                                   //@synthesize publicCertificate=_publicCertificate - In the implementation block
@property (nonatomic,readonly) TRIClientExperiment * experiment; 
@property (assign) int experimentState;                                                    //@synthesize experimentState=_experimentState - In the implementation block
@property (assign) int experimentType;                                                     //@synthesize experimentType=_experimentType - In the implementation block
@property (assign) int experimentPriority;                                                 //@synthesize experimentPriority=_experimentPriority - In the implementation block
@property (assign) int projectId;                                                          //@synthesize projectId=_projectId - In the implementation block
@property (nonatomic,retain) NSDate * modifiedDate;                                        //@synthesize modifiedDate=_modifiedDate - In the implementation block
@property (nonatomic,retain) NSArray * namespaces;                                         //@synthesize namespaces=_namespaces - In the implementation block
@property (nonatomic,retain) NSArray * namespaceCompatibilityVersions;                     //@synthesize namespaceCompatibilityVersions=_namespaceCompatibilityVersions - In the implementation block
+(id)loadArtifactWithExperimentId:(id)arg1 ;
+(id)artifactWithExperimentId:(id)arg1 ;
+(id)urlForExperimentWithId:(id)arg1 ;
+(id)artifactFromCloudKitResult:(id)arg1 ;
-(id)init;
-(BOOL)isValid;
-(id)url;
-(NSString *)experimentId;
-(void)setExperimentId:(NSString *)arg1 ;
-(NSDate *)modifiedDate;
-(void)setModifiedDate:(NSDate *)arg1 ;
-(BOOL)isCompatible;
-(TRIClientExperiment *)experiment;
-(int)projectId;
-(NSArray *)namespaces;
-(void)setNamespaces:(NSArray *)arg1 ;
-(int)experimentType;
-(void)setProjectId:(int)arg1 ;
-(id)initWithExperimentId:(id)arg1 ;
-(void)setExperimentType:(int)arg1 ;
-(NSData *)encodedExperimentDefinition;
-(void)setExperimentState:(int)arg1 ;
-(void)setExperimentPriority:(int)arg1 ;
-(void)setEncodedExperimentDefinitionSignature:(NSString *)arg1 ;
-(void)setNamespaceCompatibilityVersions:(NSArray *)arg1 ;
-(int)experimentState;
-(int)experimentPriority;
-(NSString *)encodedExperimentDefinitionSignature;
-(NSArray *)namespaceCompatibilityVersions;
-(NSData *)publicCertificate;
-(void)setEncodedExperimentDefinition:(NSData *)arg1 ;
-(void)loadPropertiesFromDictionary:(id)arg1 ;
-(id)savePropertiesToDictionary;
-(void)setPublicCertificate:(NSData *)arg1 ;
-(BOOL)saveWithDatabase:(id)arg1 ;
@end

