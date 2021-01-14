/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>

@class NSString;

@interface ASPolicy : ASItem {

	NSString* _type;
	NSString* _key;
	NSString* _status;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)_setKey:(id)arg1 ;
-(id)description;
-(id)key;
-(id)type;
-(void)_setType:(id)arg1 ;
-(void)_setStatus:(id)arg1 ;
-(int)status;
-(id)perDomainDictsForPolicy;
@end

