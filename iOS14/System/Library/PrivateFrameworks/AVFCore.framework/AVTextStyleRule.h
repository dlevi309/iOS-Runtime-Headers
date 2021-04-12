/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVTextStyleRuleInternal, NSDictionary, NSString;

@interface AVTextStyleRule : NSObject <NSCopying> {

	AVTextStyleRuleInternal* _textStyleRule;

}

@property (nonatomic,readonly) NSDictionary * textMarkupAttributes; 
@property (nonatomic,readonly) NSString * textSelector; 
+(id)textStyleRuleWithTextMarkupAttributes:(id)arg1 textSelector:(id)arg2 ;
+(id)textStyleRulesFromPropertyList:(id)arg1 ;
+(id)textStyleRuleWithTextMarkupAttributes:(id)arg1 ;
+(id)propertyListForTextStyleRules:(id)arg1 ;
-(id)init;
-(NSString *)textSelector;
-(NSDictionary *)textMarkupAttributes;
-(id)_dictionaryPlistRepresentation;
-(id)initWithTextMarkupAttributes:(id)arg1 textSelector:(id)arg2 ;
-(id)initWithTextMarkupAttributes:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

