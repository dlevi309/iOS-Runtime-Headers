/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUIColor, SAUIDecoratedText, NSString;

@interface SASTCardItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SAUIColor * backgroundColor; 
@property (nonatomic,retain) SAUIDecoratedText * footnote; 
@property (nonatomic,retain) SAUIDecoratedText * label; 
@property (nonatomic,retain) SAUIColor * labelTextColor; 
@property (nonatomic,retain) SAUIDecoratedText * title; 
@property (nonatomic,retain) SAUIColor * titleBackgroundColor; 
@property (nonatomic,retain) SAUIColor * titleTextColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cardItem;
+(id)cardItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAUIDecoratedText *)title;
-(void)setTitle:(SAUIDecoratedText *)arg1 ;
-(void)setLabel:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)label;
-(SAUIColor *)backgroundColor;
-(void)setBackgroundColor:(SAUIColor *)arg1 ;
-(SAUIDecoratedText *)footnote;
-(void)setFootnote:(SAUIDecoratedText *)arg1 ;
-(SAUIColor *)labelTextColor;
-(id)encodedClassName;
-(SAUIColor *)titleTextColor;
-(void)setTitleTextColor:(SAUIColor *)arg1 ;
-(void)setLabelTextColor:(SAUIColor *)arg1 ;
-(SAUIColor *)titleBackgroundColor;
-(void)setTitleBackgroundColor:(SAUIColor *)arg1 ;
@end

