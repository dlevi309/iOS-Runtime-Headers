/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray, NSNumber;

@interface SAUSRichText : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * contentAdvisory; 
@property (nonatomic,copy) NSString * formattedTextDelimiter; 
@property (nonatomic,copy) NSArray * markupList; 
@property (nonatomic,copy) NSArray * moreGlyphs; 
@property (nonatomic,copy) NSNumber * starRating; 
@property (nonatomic,copy) NSNumber * textMaxlines; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)richText;
+(id)richTextWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSNumber *)starRating;
-(void)setStarRating:(NSNumber *)arg1 ;
-(NSString *)contentAdvisory;
-(void)setContentAdvisory:(NSString *)arg1 ;
-(NSArray *)moreGlyphs;
-(void)setMoreGlyphs:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSString *)formattedTextDelimiter;
-(void)setFormattedTextDelimiter:(NSString *)arg1 ;
-(NSArray *)markupList;
-(void)setMarkupList:(NSArray *)arg1 ;
-(NSNumber *)textMaxlines;
-(void)setTextMaxlines:(NSNumber *)arg1 ;
@end

