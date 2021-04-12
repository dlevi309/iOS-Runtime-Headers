/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>

@class NSNumber, NSString;

@interface ASSettingsTaskOofMessage : ASItem {

	NSNumber* _audience;
	NSNumber* _enabled;
	NSString* _replyMessage;
	NSString* _bodyType;

}

@property (nonatomic,retain) NSNumber * audience;                  //@synthesize audience=_audience - In the implementation block
@property (nonatomic,retain) NSNumber * enabled;                   //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSString * replyMessage;              //@synthesize replyMessage=_replyMessage - In the implementation block
@property (nonatomic,retain) NSString * bodyType;                  //@synthesize bodyType=_bodyType - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSNumber *)enabled;
-(void)setEnabled:(NSNumber *)arg1 ;
-(id)description;
-(void)setBodyType:(NSString *)arg1 ;
-(NSString *)bodyType;
-(NSString *)replyMessage;
-(void)setReplyMessage:(NSString *)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(NSNumber *)audience;
-(void)setAudience:(NSNumber *)arg1 ;
-(void)appliesToInternal:(id)arg1 ;
-(void)appliesToExternalKnown:(id)arg1 ;
-(void)appliesToExternalUnknown:(id)arg1 ;
@end

