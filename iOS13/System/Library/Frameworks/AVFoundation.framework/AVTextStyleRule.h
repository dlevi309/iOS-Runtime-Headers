/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVTextStyleRuleInternal, NSDictionary, NSString;

@interface AVTextStyleRule : NSObject <NSCopying> {

	AVTextStyleRuleInternal* _textStyleRule;

}

@property (nonatomic,readonly) NSDictionary * textMarkupAttributes; 
@property (nonatomic,readonly) NSString * textSelector; 
+(id)propertyListForTextStyleRules:(id)arg1 ;
+(id)textStyleRuleWithTextMarkupAttributes:(id)arg1 textSelector:(id)arg2 ;
+(id)textStyleRulesFromPropertyList:(id)arg1 ;
+(id)textStyleRuleWithTextMarkupAttributes:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)textSelector;
-(NSDictionary *)textMarkupAttributes;
-(id)_dictionaryPlistRepresentation;
-(id)initWithTextMarkupAttributes:(id)arg1 textSelector:(id)arg2 ;
-(id)initWithTextMarkupAttributes:(id)arg1 ;
@end

