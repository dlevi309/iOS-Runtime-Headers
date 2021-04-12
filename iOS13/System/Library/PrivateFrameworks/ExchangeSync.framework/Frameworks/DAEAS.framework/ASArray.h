/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)addItem:(id)arg1 ;
-(id)initWithSubclassRuleSet:(id)arg1 ;
-(id)commonValue;
-(id)asParseRules;
@end

