/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSDictionary, SAUITemplateAttributedString;

@interface SAUITemplateLabel : SAUITemplateBaseItem

@property (nonatomic,copy) NSDictionary * attributedTexts; 
@property (nonatomic,retain) SAUITemplateAttributedString * text; 
+(id)label;
+(id)labelWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAUITemplateAttributedString *)text;
-(void)setText:(SAUITemplateAttributedString *)arg1 ;
-(id)encodedClassName;
-(NSDictionary *)attributedTexts;
-(void)setAttributedTexts:(NSDictionary *)arg1 ;
@end

