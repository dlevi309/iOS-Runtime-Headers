/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>
#import <libobjc.A.dylib/MCPerAccountVPNPayloadProtocol.h>

@class NSString, NSArray, NSDictionary;

@interface MCGmailAccountPayload : MCPayload <MCPerAccountVPNPayloadProtocol> {

	NSString* _VPNUUID;
	NSString* _acAccountIdentifier;
	NSString* _accountDescription;
	NSString* _accountName;
	NSString* _emailAddress;
	NSDictionary* _communicationServiceRules;

}

@property (nonatomic,retain,readonly) NSString * accountDescription;                     //@synthesize accountDescription=_accountDescription - In the implementation block
@property (nonatomic,retain,readonly) NSString * accountName;                            //@synthesize accountName=_accountName - In the implementation block
@property (nonatomic,retain,readonly) NSString * emailAddress;                           //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,readonly) NSDictionary * communicationServiceRules;                 //@synthesize communicationServiceRules=_communicationServiceRules - In the implementation block
@property (nonatomic,retain) NSString * acAccountIdentifier;                             //@synthesize acAccountIdentifier=_acAccountIdentifier - In the implementation block
@property (nonatomic,retain,readonly) NSString * VPNUUID;                                //@synthesize VPNUUID=_VPNUUID - In the implementation block
@property (nonatomic,retain,readonly) NSArray * mailAccountIdentifiers; 
@property (nonatomic,retain,readonly) NSArray * contactsAccountIdentifiers; 
@property (nonatomic,retain,readonly) NSArray * calendarAccountIdentifiers; 
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(NSString *)accountDescription;
-(NSString *)accountName;
-(NSString *)VPNUUID;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(NSString *)emailAddress;
-(NSArray *)mailAccountIdentifiers;
-(NSString *)acAccountIdentifier;
-(NSDictionary *)communicationServiceRules;
-(BOOL)mustInstallNonInteractively;
-(void)setAcAccountIdentifier:(NSString *)arg1 ;
-(id)verboseDescription;
-(id)restrictions;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
@end

