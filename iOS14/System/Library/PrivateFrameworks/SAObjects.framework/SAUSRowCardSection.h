/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUSCardSection.h>

@class SAUIImageResource, NSString;

@interface SAUSRowCardSection : SAUSCardSection

@property (nonatomic,retain) SAUIImageResource * image; 
@property (assign,nonatomic) BOOL imageIsRightAligned; 
@property (nonatomic,copy) NSString * leftText; 
@property (nonatomic,copy) NSString * rightText; 
+(id)rowCardSection;
+(id)rowCardSectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(id)encodedClassName;
-(NSString *)leftText;
-(void)setImageIsRightAligned:(BOOL)arg1 ;
-(BOOL)imageIsRightAligned;
-(SAUIImageResource *)image;
-(void)setRightText:(NSString *)arg1 ;
-(void)setLeftText:(NSString *)arg1 ;
-(NSString *)rightText;
@end

