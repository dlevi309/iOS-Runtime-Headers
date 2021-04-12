/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(NSString *)subtitleText;
-(void)setSubtitleText:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSArray *)themeImages;
-(void)setThemeImages:(NSArray *)arg1 ;
-(NSArray *)monogramName;
-(void)setMonogramName:(NSArray *)arg1 ;
-(BOOL)sizeToFitImage;
-(void)setSizeToFitImage:(BOOL)arg1 ;
@end

