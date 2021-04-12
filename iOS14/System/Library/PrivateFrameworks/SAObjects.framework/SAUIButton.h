/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAAceView.h>

@class SAUIColor, NSArray, SAUIImageResource, NSString;

@interface SAUIButton : SAAceView

@property (nonatomic,retain) SAUIColor * backgroundColor; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,retain) SAUIImageResource * image; 
@property (nonatomic,copy) NSString * secondaryText; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) SAUIColor * textColor; 
+(id)button;
+(id)buttonWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAUIColor *)textColor;
-(id)groupIdentifier;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(id)encodedClassName;
-(void)setText:(NSString *)arg1 ;
-(void)setBackgroundColor:(SAUIColor *)arg1 ;
-(SAUIImageResource *)image;
-(SAUIColor *)backgroundColor;
-(NSArray *)commands;
-(void)setTextColor:(SAUIColor *)arg1 ;
-(void)setCommands:(NSArray *)arg1 ;
-(NSString *)text;
-(void)setSecondaryText:(NSString *)arg1 ;
-(NSString *)secondaryText;
@end

