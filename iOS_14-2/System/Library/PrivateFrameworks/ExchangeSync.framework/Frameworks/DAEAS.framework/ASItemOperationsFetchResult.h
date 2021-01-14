/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASEmailItem.h>

@class NSString;

@interface ASItemOperationsFetchResult : ASEmailItem {

	NSString* _classString;

}

@property (nonatomic,retain) NSString * classString;              //@synthesize classString=_classString - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)init;
-(BOOL)_isSearchResult;
-(void)setClassString:(NSString *)arg1 ;
-(NSString *)classString;
@end

