/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSDictionary, SAUITemplateAttributedString;

@interface SAUITemplateLabel : SAUITemplateBaseItem

@property (nonatomic,copy) NSDictionary * attributedTexts; 
@property (nonatomic,retain) SAUITemplateAttributedString * text; 
+(id)labelWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)label;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setText:(SAUITemplateAttributedString *)arg1 ;
-(SAUITemplateAttributedString *)text;
-(NSDictionary *)attributedTexts;
-(void)setAttributedTexts:(NSDictionary *)arg1 ;
@end

