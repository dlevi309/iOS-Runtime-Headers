/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)restrictions;
-(id)filterForUserEnrollmentOutError:(id*)arg1 ;
-(id)installationWarnings;
-(id)_invalidFieldErrorWithFieldName:(id)arg1 ;
-(id)_restrictedFeatureStrings;
-(id)_enforcedFeatureStrings;
-(id)_defaultValueRestrictions;
-(id)_intersectionStrings;
-(id)_unionStrings;
-(id)localizedRestrictionStrings;
-(void)_insertRestrictedBoolForKey:(id)arg1 value:(id)arg2 preferenc:(BOOL)arg3 ;
-(NSString *)iCloudPassword;
-(void)setICloudPassword:(NSString *)arg1 ;
@end

