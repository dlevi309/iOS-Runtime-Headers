/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString, NSDictionary;

@interface MCGmailAccountPayload : MCPayload {

	NSString* _accountDescription;
	NSString* _accountName;
	NSString* _emailAddress;
	NSDictionary* _communicationServiceRules;

}

@property (nonatomic,retain,readonly) NSString * accountDescription;                  //@synthesize accountDescription=_accountDescription - In the implementation block
@property (nonatomic,retain,readonly) NSString * accountName;                         //@synthesize accountName=_accountName - In the implementation block
@property (nonatomic,retain,readonly) NSString * emailAddress;                        //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,readonly) NSDictionary * communicationServiceRules;              //@synthesize communicationServiceRules=_communicationServiceRules - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(id)title;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)restrictions;
-(NSString *)emailAddress;
-(NSDictionary *)communicationServiceRules;
-(NSString *)accountDescription;
-(BOOL)mustInstallNonInteractively;
-(NSString *)accountName;
@end

