/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>

@class NSArray, NSString;

@interface ASSettingsTaskUserInformationGetResponse : ASItem {

	NSArray* _emailAddresses;
	NSString* _primarySMTPAddress;
	NSArray* _accounts;

}

@property (nonatomic,retain) NSArray * accounts;                         //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,retain) NSArray * emailAddresses;                   //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,retain) NSString * primarySMTPAddress;              //@synthesize primarySMTPAddress=_primarySMTPAddress - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(NSArray *)emailAddresses;
-(NSArray *)accounts;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(void)setAccounts:(NSArray *)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)setPrimarySMTPAddress:(NSString *)arg1 ;
-(NSString *)primarySMTPAddress;
@end

