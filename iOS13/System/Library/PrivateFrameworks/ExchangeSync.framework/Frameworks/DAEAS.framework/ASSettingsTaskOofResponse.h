/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>

@class NSNumber, ASSettingsTaskOofGetResponse;

@interface ASSettingsTaskOofResponse : ASItem {

	NSNumber* _status;
	ASSettingsTaskOofGetResponse* _oofGetResult;

}

@property (nonatomic,retain) NSNumber * status;                                        //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) ASSettingsTaskOofGetResponse * oofGetResult;              //@synthesize oofGetResult=_oofGetResult - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(NSNumber *)status;
-(void)setStatus:(NSNumber *)arg1 ;
-(ASSettingsTaskOofGetResponse *)oofGetResult;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)setOofGetResult:(ASSettingsTaskOofGetResponse *)arg1 ;
@end

