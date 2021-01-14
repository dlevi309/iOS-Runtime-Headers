/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>

@class NSNumber, ASSettingsTaskUserInformationGetResponse;

@interface ASSettingsTaskUserInformationResponse : ASItem {

	NSNumber* _status;
	ASSettingsTaskUserInformationGetResponse* _getResponse;

}

@property (nonatomic,retain) NSNumber * status;                                                   //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) ASSettingsTaskUserInformationGetResponse * getResponse;              //@synthesize getResponse=_getResponse - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(ASSettingsTaskUserInformationGetResponse *)getResponse;
-(void)setStatus:(NSNumber *)arg1 ;
-(NSNumber *)status;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)setGetResponse:(ASSettingsTaskUserInformationGetResponse *)arg1 ;
@end

