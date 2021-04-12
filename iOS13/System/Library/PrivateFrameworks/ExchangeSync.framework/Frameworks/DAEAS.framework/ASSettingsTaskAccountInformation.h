/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>

@class ASSettingsTaskAccountEmailAddresses, NSString;

@interface ASSettingsTaskAccountInformation : ASItem {

	ASSettingsTaskAccountEmailAddresses* _emailAddressList;
	NSString* _accountId;

}

@property (nonatomic,retain) ASSettingsTaskAccountEmailAddresses * emailAddressList;              //@synthesize emailAddressList=_emailAddressList - In the implementation block
@property (nonatomic,retain) NSString * accountId;                                                //@synthesize accountId=_accountId - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(NSString *)accountId;
-(void)setAccountId:(NSString *)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(ASSettingsTaskAccountEmailAddresses *)emailAddressList;
-(void)setEmailAddressList:(ASSettingsTaskAccountEmailAddresses *)arg1 ;
@end

