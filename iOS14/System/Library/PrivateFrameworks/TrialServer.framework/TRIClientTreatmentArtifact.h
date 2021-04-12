/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSDictionary;

@interface TRIClientTreatmentArtifact : NSObject <NSCopying> {

	NSData* _encodedTreatmentDefinition;
	NSString* _encodedTreatmentDefinitionSignature;
	NSData* _publicCertificate;
	NSDictionary* _assetURLs;

}

@property (nonatomic,readonly) NSData * encodedTreatmentDefinition;                         //@synthesize encodedTreatmentDefinition=_encodedTreatmentDefinition - In the implementation block
@property (nonatomic,readonly) NSString * encodedTreatmentDefinitionSignature;              //@synthesize encodedTreatmentDefinitionSignature=_encodedTreatmentDefinitionSignature - In the implementation block
@property (nonatomic,readonly) NSData * publicCertificate;                                  //@synthesize publicCertificate=_publicCertificate - In the implementation block
@property (nonatomic,readonly) NSDictionary * assetURLs;                                    //@synthesize assetURLs=_assetURLs - In the implementation block
+(id)artifactWithEncodedTreatmentDefinition:(id)arg1 encodedTreatmentDefinitionSignature:(id)arg2 publicCertificate:(id)arg3 assetURLs:(id)arg4 ;
+(id)artifactFromCKRecordFields:(id)arg1 loadAssetUrls:(/*^block*/id)arg2 ;
-(id)init;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithEncodedTreatmentDefinition:(id)arg1 encodedTreatmentDefinitionSignature:(id)arg2 publicCertificate:(id)arg3 assetURLs:(id)arg4 ;
-(NSData *)encodedTreatmentDefinition;
-(NSString *)encodedTreatmentDefinitionSignature;
-(NSData *)publicCertificate;
-(NSDictionary *)assetURLs;
-(BOOL)isEqualToArtifact:(id)arg1 ;
-(id)copyWithReplacementEncodedTreatmentDefinition:(id)arg1 ;
-(id)copyWithReplacementEncodedTreatmentDefinitionSignature:(id)arg1 ;
-(id)copyWithReplacementPublicCertificate:(id)arg1 ;
-(id)copyWithReplacementAssetURLs:(id)arg1 ;
-(BOOL)isValidWithTreatmentId:(id)arg1 ;
-(id)unsignedAssetURLs;
@end

