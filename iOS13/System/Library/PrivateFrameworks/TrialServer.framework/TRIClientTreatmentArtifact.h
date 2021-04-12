/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TRIBaseArtifact.h>

@class TRIClientTreatment, NSString, NSArray, NSData, NSDictionary;

@interface TRIClientTreatmentArtifact : TRIBaseArtifact {

	TRIClientTreatment* _treatment;
	NSString* _treatmentId;
	NSArray* _assetUrls;
	NSString* _encodedTreatmentDefinitionSignature;
	NSData* _publicCertificate;
	NSArray* _assetSignatures;
	NSDictionary* _treatmentUrls;

}

@property (nonatomic,retain) NSString * treatmentId;                                      //@synthesize treatmentId=_treatmentId - In the implementation block
@property (nonatomic,retain) NSData * encodedTreatmentDefinition; 
@property (nonatomic,retain) NSArray * assetUrls;                                         //@synthesize assetUrls=_assetUrls - In the implementation block
@property (readonly) TRIClientTreatment * treatment; 
@property (nonatomic,retain) NSString * encodedTreatmentDefinitionSignature;              //@synthesize encodedTreatmentDefinitionSignature=_encodedTreatmentDefinitionSignature - In the implementation block
@property (nonatomic,retain) NSData * publicCertificate;                                  //@synthesize publicCertificate=_publicCertificate - In the implementation block
@property (nonatomic,retain) NSArray * assetSignatures;                                   //@synthesize assetSignatures=_assetSignatures - In the implementation block
@property (nonatomic,retain) NSDictionary * treatmentUrls;                                //@synthesize treatmentUrls=_treatmentUrls - In the implementation block
+(id)baseUrlForTreatment:(id)arg1 namespaceId:(unsigned)arg2 ;
+(id)artifactWithTreatmentId:(id)arg1 ;
+(id)artifactFromCloudKitResult:(id)arg1 assetUrls:(id)arg2 ;
+(id)loadArtifactWithTreatmentId:(id)arg1 ;
+(id)urlForDefaultTreatmentWithNamespaceId:(unsigned)arg1 ;
+(id)urlForTreatment:(id)arg1 namespaceId:(unsigned)arg2 ;
-(id)init;
-(BOOL)isValid;
-(id)url;
-(id)_assetMap;
-(TRIClientTreatment *)treatment;
-(void)setTreatmentId:(NSString *)arg1 ;
-(NSString *)treatmentId;
-(NSData *)publicCertificate;
-(void)loadPropertiesFromDictionary:(id)arg1 ;
-(id)savePropertiesToDictionary;
-(void)setPublicCertificate:(NSData *)arg1 ;
-(void)setEncodedTreatmentDefinition:(NSData *)arg1 ;
-(void)setEncodedTreatmentDefinitionSignature:(NSString *)arg1 ;
-(void)setAssetSignatures:(NSArray *)arg1 ;
-(void)setAssetUrls:(NSArray *)arg1 ;
-(BOOL)removeFromUrl:(id)arg1 ;
-(NSData *)encodedTreatmentDefinition;
-(BOOL)saveToNamespaceTreatments;
-(NSDictionary *)treatmentUrls;
-(id)initWithTreatmentId:(id)arg1 ;
-(NSArray *)assetUrls;
-(BOOL)updateFileValue:(id)arg1 ;
-(BOOL)copyAssets;
-(void)setTreatmentUrls:(NSDictionary *)arg1 ;
-(id)assetUrlForFactor:(id)arg1 treatmentId:(id)arg2 ;
-(id)urlsFromStrings:(id)arg1 ;
-(id)stringsFromUrls:(id)arg1 ;
-(NSArray *)assetSignatures;
-(NSString *)encodedTreatmentDefinitionSignature;
-(BOOL)updateAssetsInTreatment;
@end

