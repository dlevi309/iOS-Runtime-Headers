/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUITemplateBaseItem.h>
#import <SAObjects/SAUITemplateMonogrammable.h>

@class NSArray, NSString;

@interface SAUITemplateCollectionViewCell : SAUITemplateBaseItem <SAUITemplateMonogrammable>

@property (nonatomic,copy) NSArray * monogramName; 
@property (assign,nonatomic) BOOL sizeToFitImage; 
@property (nonatomic,copy) NSString * subtitleText; 
@property (nonatomic,copy) NSArray * themeImages; 
@property (nonatomic,copy) NSString * titleText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)collectionViewCell;
+(id)collectionViewCellWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)monogramName;
-(void)setMonogramName:(NSArray *)arg1 ;
-(BOOL)sizeToFitImage;
-(void)setSizeToFitImage:(BOOL)arg1 ;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setSubtitleText:(NSString *)arg1 ;
-(NSString *)subtitleText;
-(NSArray *)themeImages;
-(void)setThemeImages:(NSArray *)arg1 ;
@end

