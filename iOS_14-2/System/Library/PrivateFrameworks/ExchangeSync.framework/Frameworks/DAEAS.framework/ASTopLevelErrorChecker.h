/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>
#import <libobjc.A.dylib/ASParsingNotifyOfUnknownTokens.h>

@class NSNumber, NSDictionary;

@interface ASTopLevelErrorChecker : ASItem <ASParsingNotifyOfUnknownTokens> {

	NSNumber* _foundStatus;
	NSDictionary* _parseRules;

}

@property (nonatomic,retain) NSDictionary * parseRules;              //@synthesize parseRules=_parseRules - In the implementation block
@property (nonatomic,retain) NSNumber * foundStatus;                 //@synthesize foundStatus=_foundStatus - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
-(void)unknownToken:(int)arg1 receivedForCodePage:(int)arg2 ;
-(id)asParseRules;
-(id)initWithCodePage:(int)arg1 statusToken:(int)arg2 ;
-(NSNumber *)foundStatus;
-(void)setFoundStatus:(NSNumber *)arg1 ;
-(void)setParseRules:(NSDictionary *)arg1 ;
-(NSDictionary *)parseRules;
@end

