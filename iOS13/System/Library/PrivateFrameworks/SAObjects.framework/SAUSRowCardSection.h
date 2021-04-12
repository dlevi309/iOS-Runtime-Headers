/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(SAUIImageResource *)image;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(BOOL)imageIsRightAligned;
-(void)setImageIsRightAligned:(BOOL)arg1 ;
-(id)encodedClassName;
-(NSString *)leftText;
-(void)setLeftText:(NSString *)arg1 ;
-(NSString *)rightText;
-(void)setRightText:(NSString *)arg1 ;
@end

