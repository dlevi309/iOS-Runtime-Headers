/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUITemplateBaseItem.h>

@class SAUITemplateAttributedString, NSDictionary, SAUIImageResource, NSArray;

@interface SAUITemplateTabularDataValue : SAUITemplateBaseItem

@property (nonatomic,retain) SAUITemplateAttributedString * attributedText; 
@property (nonatomic,copy) NSDictionary * attributedTexts; 
@property (assign,nonatomic) BOOL highlighted; 
@property (nonatomic,retain) SAUIImageResource * image; 
@property (assign,nonatomic) double imagePointHeight; 
@property (assign,nonatomic) double imagePointWidth; 
@property (nonatomic,copy) NSArray * themeImages; 
+(id)tabularDataValue;
+(id)tabularDataValueWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAUITemplateAttributedString *)attributedText;
-(id)groupIdentifier;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(void)setAttributedText:(SAUITemplateAttributedString *)arg1 ;
-(id)encodedClassName;
-(BOOL)highlighted;
-(SAUIImageResource *)image;
-(NSDictionary *)attributedTexts;
-(void)setAttributedTexts:(NSDictionary *)arg1 ;
-(double)imagePointHeight;
-(void)setImagePointHeight:(double)arg1 ;
-(double)imagePointWidth;
-(void)setImagePointWidth:(double)arg1 ;
-(NSArray *)themeImages;
-(void)setThemeImages:(NSArray *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

