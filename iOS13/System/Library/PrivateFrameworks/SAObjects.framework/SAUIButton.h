/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(SAUIImageResource *)image;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(SAUIColor *)backgroundColor;
-(void)setBackgroundColor:(SAUIColor *)arg1 ;
-(void)setTextColor:(SAUIColor *)arg1 ;
-(SAUIColor *)textColor;
-(NSString *)secondaryText;
-(void)setSecondaryText:(NSString *)arg1 ;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(id)encodedClassName;
@end

