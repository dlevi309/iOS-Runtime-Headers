/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDClinicalProviderServiceModel.h>

@class NSString, NSSet, NSArray, NSURL, HKClinicalBrand;

@interface HDClinicalGateway : HDClinicalProviderServiceModel

@property (nonatomic,copy,readonly) NSString * externalID; 
@property (nonatomic,copy,readonly) NSString * batchID; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * displayableDescription; 
@property (nonatomic,copy,readonly) NSString * FHIRVersion; 
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
+(BOOL)validateContent:(id)arg1 error:(out id*)arg2 ;
+(long long)_statusForRawStatus:(id)arg1 ;
+(long long)_typeForRawType:(id)arg1 ;
-(id)description;
-(long long)type;
-(NSURL *)baseURL;
-(NSString *)title;
-(NSString *)phoneNumber;
-(NSString *)subtitle;
-(NSString *)country;
-(NSString *)clientID;
-(id)initWithContent:(id)arg1 ;
-(NSString *)externalID;
-(NSString *)clientSecret;
-(NSString *)displayableDescription;
-(HKClinicalBrand *)brand;
-(NSURL *)informationURL;
-(NSURL *)passwordResetURL;
-(NSURL *)patientPortalURL;
-(NSURL *)signupURL;
-(NSString *)batchID;
-(long long)lastReportedStatus;
-(NSString *)FHIRVersion;
-(id)initWithoutValidatingContent:(id)arg1 ;
-(id)initWithRawContent:(id)arg1 ;
-(id)_URLForKey:(id)arg1 ;
-(NSSet *)pinset;
-(NSArray *)authSchemaDefinitions;
-(NSArray *)resourceSchemaDefinitions;
@end

