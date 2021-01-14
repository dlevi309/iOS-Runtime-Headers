/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>
#import <libobjc.A.dylib/ASParsingWithSubItems.h>
#import <libobjc.A.dylib/ASParsingFrontingBasicType.h>

@class NSMutableArray, NSDictionary;

@interface ASArray : ASItem <ASParsingWithSubItems, ASParsingFrontingBasicType> {

	NSMutableArray* _items;
	NSDictionary* _subclassRuleSet;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
-(void)addItem:(id)arg1 ;
-(id)description;
-(id)initWithSubclassRuleSet:(id)arg1 ;
-(id)commonValue;
-(id)asParseRules;
@end

