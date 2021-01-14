/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSMutableDictionary, NSString;

@interface MCRestrictionsPayload : MCPayload {

	NSMutableDictionary* _restrictions;
	NSString* _iCloudPassword;

}

@property (nonatomic,retain) NSString * iCloudPassword;              //@synthesize iCloudPassword=_iCloudPassword - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)installationWarnings;
-(id)filterForUserEnrollmentOutError:(id*)arg1 ;
-(NSString *)iCloudPassword;
-(id)_invalidFieldErrorWithFieldName:(id)arg1 ;
-(id)_restrictedFeatureStrings;
-(id)_enforcedFeatureStrings;
-(id)_unionStrings;
-(id)_defaultValueRestrictions;
-(id)_intersectionStrings;
-(id)localizedRestrictionStrings;
-(void)setICloudPassword:(NSString *)arg1 ;
-(void)_insertRestrictedBoolForKey:(id)arg1 value:(id)arg2 preferenc:(BOOL)arg3 ;
-(id)restrictions;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
@end

