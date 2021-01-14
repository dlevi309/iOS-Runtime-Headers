/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/


@class DRSDampeningConfiguration, NSDictionary;

@interface DRSTeamDampeningConfiguration : NSObject {

	DRSDampeningConfiguration* _defaultConfiguration;
	NSDictionary* _issueCategoryToConfigurationDict;

}

@property (nonatomic,retain) DRSDampeningConfiguration * defaultConfiguration;              //@synthesize defaultConfiguration=_defaultConfiguration - In the implementation block
@property (nonatomic,retain) NSDictionary * issueCategoryToConfigurationDict;               //@synthesize issueCategoryToConfigurationDict=_issueCategoryToConfigurationDict - In the implementation block
-(DRSDampeningConfiguration *)defaultConfiguration;
-(void)setDefaultConfiguration:(DRSDampeningConfiguration *)arg1 ;
-(id)debugDescription;
-(BOOL)isEqual:(id)arg1 ;
-(id)jsonCompatibleDictRepresentation;
-(NSDictionary *)issueCategoryToConfigurationDict;
-(id)initWithDefaultConfiguration:(id)arg1 issueCategoryToConfigurationDict:(id)arg2 ;
-(id)configurationForIssueCategory:(id)arg1 ;
-(id)_initWithTeamDampeningConfigMO_ON_MOC_QUEUE:(id)arg1 ;
-(id)_ON_MOC_QUEUE_moRepresentationInContext:(id)arg1 teamID:(id)arg2 ;
-(void)setIssueCategoryToConfigurationDict:(NSDictionary *)arg1 ;
@end

