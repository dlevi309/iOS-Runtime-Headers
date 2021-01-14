/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


@class MCProfile, NSString, NSDictionary, NSArray;

@interface MCPayload : NSObject {

	MCProfile* _profile;
	NSString* _type;
	NSString* _payloadDescription;
	NSString* _displayName;
	NSString* _identifier;
	NSString* _organization;
	NSString* _UUID;
	long long _version;
	NSString* _persistentResourceID;
	BOOL _mustInstallNonInteractively;

}

@property (nonatomic,__weak,readonly) MCProfile * profile;                         //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain,readonly) NSString * friendlyName; 
@property (nonatomic,retain,readonly) NSString * type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,retain,readonly) NSString * payloadDescription;               //@synthesize payloadDescription=_payloadDescription - In the implementation block
@property (nonatomic,retain) NSString * displayName;                               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain,readonly) NSString * organization;                     //@synthesize organization=_organization - In the implementation block
@property (nonatomic,retain,readonly) NSString * UUID;                             //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) long long version;                                  //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSString * persistentResourceID;                      //@synthesize persistentResourceID=_persistentResourceID - In the implementation block
@property (nonatomic,readonly) NSDictionary * restrictions; 
@property (assign,nonatomic) BOOL mustInstallNonInteractively;                     //@synthesize mustInstallNonInteractively=_mustInstallNonInteractively - In the implementation block
@property (nonatomic,readonly) BOOL containsSensitiveUserInformation; 
@property (nonatomic,retain,readonly) NSArray * installationWarnings; 
+(id)payloadsFromArray:(id)arg1 isStub:(BOOL)arg2 profile:(id)arg3 outError:(id*)arg4 ;
+(id)localizedDescriptionForPayloadCount:(unsigned long long)arg1 ;
+(id)badFieldValueErrorWithField:(id)arg1 underlyingError:(id)arg2 ;
+(id)missingFieldErrorWithField:(id)arg1 underlyingError:(id)arg2 ;
+(id)badFieldValueErrorWithField:(id)arg1 ;
+(id)conflictingFieldValueErrorWithUnderlyingError:(id)arg1 ;
+(id)_sharedHomePodPayloadClasses;
+(id)_sharedWatchPayloadClasses;
+(id)_minimumWatchVersionRequirementsForPayloads;
+(id)installableHomePodConfigurationPayloadClasses;
+(id)remoteQueueableHomePodPayloadClasses;
+(id)installableWatchConfigurationPayloadClasses;
+(id)remoteQueueableWatchPayloadClasses;
+(id)wrapperPayloadDictionary;
+(id)localizedParenthesizedFormDescriptionForPayloadCount:(unsigned long long)arg1 ;
+(id)unavailableSystemPayloadsInEphemeralMultiUser;
+(id)unavailableUserPayloadsInEphemeralMultiUser;
+(id)payloadFromDictionary:(id)arg1 isStub:(BOOL)arg2 profile:(id)arg3 outError:(id*)arg4 ;
+(id)availablePayloadsForUserEnrollment;
+(id)unavailablePayloadsInEphemeralMultiUser;
+(id)mdmAdoptablePayloads;
+(id)cellularRequiredPayloads;
+(id)supervisedRequiredPayloads;
+(id)badFieldTypeErrorWithField:(id)arg1 ;
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(NSString *)UUID;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(NSArray *)installationWarnings;
-(id)filterForUserEnrollmentOutError:(id*)arg1 ;
-(BOOL)containsSensitiveUserInformation;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(BOOL)mustInstallNonInteractively;
-(id)serializedDictionary;
-(BOOL)isSupportedByWatchVersions:(id)arg1 ;
-(NSString *)persistentResourceID;
-(id)verboseDescription;
-(id)description;
-(void)setMustInstallNonInteractively:(BOOL)arg1 ;
-(MCProfile *)profile;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSDictionary *)restrictions;
-(void)setPersistentResourceID:(NSString *)arg1 ;
-(NSString *)payloadDescription;
-(NSString *)type;
-(NSString *)identifier;
-(NSString *)friendlyName;
-(long long)version;
-(NSString *)displayName;
-(NSString *)organization;
-(id)title;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)malformedPayloadErrorWithError:(id)arg1 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
@end

