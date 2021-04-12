/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)key;
-(id)type;
-(void)_setKey:(id)arg1 ;
-(int)status;
-(void)_setType:(id)arg1 ;
-(void)_setStatus:(id)arg1 ;
-(id)perDomainDictsForPolicy;
@end

