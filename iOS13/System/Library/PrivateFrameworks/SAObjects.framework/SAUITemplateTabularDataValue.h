/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(SAUIImageResource *)image;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)highlighted;
-(void)setAttributedText:(SAUITemplateAttributedString *)arg1 ;
-(SAUITemplateAttributedString *)attributedText;
-(id)encodedClassName;
-(NSDictionary *)attributedTexts;
-(void)setAttributedTexts:(NSDictionary *)arg1 ;
-(double)imagePointHeight;
-(void)setImagePointHeight:(double)arg1 ;
-(double)imagePointWidth;
-(void)setImagePointWidth:(double)arg1 ;
-(NSArray *)themeImages;
-(void)setThemeImages:(NSArray *)arg1 ;
@end

