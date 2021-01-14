/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUSTitleCardSection.h>

@class NSString, SAUIImageResource;

@interface SAUSRichTitleCardSection : SAUSTitleCardSection

@property (assign,nonatomic) BOOL centered; 
@property (nonatomic,copy) NSString * contentRatingText; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,retain) SAUIImageResource * titleImage; 
+(id)richTitleCardSection;
+(id)richTitleCardSectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setTitleImage:(SAUIImageResource *)arg1 ;
-(NSString *)subtitle;
-(SAUIImageResource *)titleImage;
-(void)setCentered:(BOOL)arg1 ;
-(NSString *)contentRatingText;
-(void)setContentRatingText:(NSString *)arg1 ;
-(BOOL)centered;
-(void)setSubtitle:(NSString *)arg1 ;
@end

