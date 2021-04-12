/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUITemplateBaseItem.h>
#import <SAObjects/SAUITemplateMonogrammable.h>

@class SAUIImageResource, NSArray, NSString;

@interface SAUITemplateImageView : SAUITemplateBaseItem <SAUITemplateMonogrammable>

@property (assign,nonatomic) float alpha; 
@property (nonatomic,retain) SAUIImageResource * image; 
@property (assign,nonatomic) double imagePointHeight; 
@property (assign,nonatomic) double imagePointWidth; 
@property (nonatomic,copy) NSArray * monogramName; 
@property (nonatomic,copy) NSString * style; 
@property (nonatomic,copy) NSArray * themeImages; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imageView;
+(id)imageViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)style;
-(void)setStyle:(NSString *)arg1 ;
-(SAUIImageResource *)image;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(float)alpha;
-(void)setAlpha:(float)arg1 ;
-(id)encodedClassName;
-(double)imagePointHeight;
-(void)setImagePointHeight:(double)arg1 ;
-(double)imagePointWidth;
-(void)setImagePointWidth:(double)arg1 ;
-(NSArray *)themeImages;
-(void)setThemeImages:(NSArray *)arg1 ;
-(NSArray *)monogramName;
-(void)setMonogramName:(NSArray *)arg1 ;
@end

