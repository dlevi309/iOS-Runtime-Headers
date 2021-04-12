/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString, MCSingleSignOnPayloadKerberosInfo;

@interface MCSingleSignOnPayload : MCPayload {

	NSString* _humanReadableName;
	MCSingleSignOnPayloadKerberosInfo* _kerberosInfo;

}

@property (nonatomic,retain) NSString * humanReadableName;                                  //@synthesize humanReadableName=_humanReadableName - In the implementation block
@property (nonatomic,retain) MCSingleSignOnPayloadKerberosInfo * kerberosInfo;              //@synthesize kerberosInfo=_kerberosInfo - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)verboseDescription;
-(NSString *)humanReadableName;
-(MCSingleSignOnPayloadKerberosInfo *)kerberosInfo;
-(void)setHumanReadableName:(NSString *)arg1 ;
-(void)setKerberosInfo:(MCSingleSignOnPayloadKerberosInfo *)arg1 ;
-(id)title;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
@end

