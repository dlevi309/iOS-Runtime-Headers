/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setTitleImage:(SAUIImageResource *)arg1 ;
-(SAUIImageResource *)titleImage;
-(id)encodedClassName;
-(void)setCentered:(BOOL)arg1 ;
-(BOOL)centered;
-(NSString *)contentRatingText;
-(void)setContentRatingText:(NSString *)arg1 ;
@end

