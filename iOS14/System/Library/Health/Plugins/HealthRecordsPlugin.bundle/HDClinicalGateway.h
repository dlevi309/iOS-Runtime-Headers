/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDClinicalProviderServiceModel.h>

@class NSString, HKFHIRVersion, NSSet, NSArray, NSURL, HKClinicalBrand;

@interface HDClinicalGateway : HDClinicalProviderServiceModel

@property (nonatomic,copy,readonly) NSString * externalID; 
@property (nonatomic,copy,readonly) NSString * batchID; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * displayableDescription; 
@property (nonatomic,copy,readonly) HKFHIRVersion * FHIRVersion; 
@property (nonatomic,copy,readonly) NSString * clientID; 
@property (nonatomic,copy,readonly) NSString * clientSecret; 
@property (nonatomic,copy,readonly) NSSet * pinset; 
@property (nonatomic,copy,readonly) NSArray * authSchemaDefinitions; 
@property (nonatomic,copy,readonly) NSArray * resourceSchemaDefinitions; 
@property (nonatomic,copy,readonly) NSURL * baseURL; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long lastReportedStatus; 
@property (nonatomic,copy,readonly) NSString * phoneNumber; 
@property (nonatomic,copy,readonly) NSURL * informationURL; 
@property (nonatomic,copy,readonly) NSURL * signupURL; 
@property (nonatomic,copy,readonly) NSURL * passwordResetURL; 
@property (nonatomic,copy,readonly) NSURL * patientPortalURL; 
@property (nonatomic,copy,readonly) HKClinicalBrand * brand; 
@property (nonatomic,copy,readonly) NSString * country; 
+(id)schemaName;
+(BOOL)validateContent:(id)arg1 error:(id*)arg2 ;
+(long long)_statusForRawStatus:(id)arg1 ;
+(long long)_typeForRawType:(id)arg1 ;
-(NSString *)clientID;
-(NSString *)country;
-(NSURL *)baseURL;
-(HKClinicalBrand *)brand;
-(NSString *)externalID;
-(NSString *)subtitle;
-(NSString *)phoneNumber;
-(NSString *)batchID;
-(id)description;
-(NSSet *)pinset;
-(long long)type;
-(NSURL *)signupURL;
-(id)initWithContent:(id)arg1 ;
-(NSURL *)informationURL;
-(HKFHIRVersion *)FHIRVersion;
-(NSString *)displayableDescription;
-(NSURL *)passwordResetURL;
-(NSURL *)patientPortalURL;
-(long long)lastReportedStatus;
-(NSString *)title;
-(NSString *)clientSecret;
-(id)initWithoutValidatingContent:(id)arg1 ;
-(id)initWithRawContent:(id)arg1 ;
-(id)authScopeWithError:(id*)arg1 ;
-(NSArray *)authSchemaDefinitions;
-(id)authorizeSchemaWithError:(id*)arg1 ;
-(id)_URLForKey:(id)arg1 ;
-(NSArray *)resourceSchemaDefinitions;
@end

