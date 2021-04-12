/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAccountId:(NSString *)arg1 ;
-(id)description;
-(NSString *)accountId;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(ASSettingsTaskAccountEmailAddresses *)emailAddressList;
-(void)setEmailAddressList:(ASSettingsTaskAccountEmailAddresses *)arg1 ;
@end

