/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASEmailItem.h>

@class NSString;

@interface ASEnhancedMailboxSearchResult : ASEmailItem {

	NSString* _className;

}

@property (nonatomic,retain) NSString * className;              //@synthesize className=_className - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)init;
-(id)description;
-(NSString *)className;
-(void)setClassName:(NSString *)arg1 ;
-(BOOL)_isSearchResult;
@end

