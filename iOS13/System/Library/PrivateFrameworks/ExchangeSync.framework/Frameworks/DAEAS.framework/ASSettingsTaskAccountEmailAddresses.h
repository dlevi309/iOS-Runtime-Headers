/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>

@class NSMutableSet, NSString;

@interface ASSettingsTaskAccountEmailAddresses : ASItem {

	NSMutableSet* _mEmailAddresses;
	NSString* _primarySMTPAddress;

}

@property (nonatomic,retain) NSMutableSet * mEmailAddresses;              //@synthesize mEmailAddresses=_mEmailAddresses - In the implementation block
@property (nonatomic,retain) NSString * primarySMTPAddress;               //@synthesize primarySMTPAddress=_primarySMTPAddress - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(id)emailAddresses;
-(void)addEmailAddress:(id)arg1 ;
-(void)setMEmailAddresses:(NSMutableSet *)arg1 ;
-(NSMutableSet *)mEmailAddresses;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)setPrimarySMTPAddress:(NSString *)arg1 ;
-(NSString *)primarySMTPAddress;
@end

