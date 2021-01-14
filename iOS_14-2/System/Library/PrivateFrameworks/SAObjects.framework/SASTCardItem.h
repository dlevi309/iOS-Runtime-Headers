/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)cardItemWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)cardItem;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIColor *)labelTextColor;
-(void)setLabelTextColor:(SAUIColor *)arg1 ;
-(void)setTitle:(SAUIDecoratedText *)arg1 ;
-(void)setBackgroundColor:(SAUIColor *)arg1 ;
-(SAUIColor *)backgroundColor;
-(void)setFootnote:(SAUIDecoratedText *)arg1 ;
-(SAUIColor *)titleBackgroundColor;
-(void)setTitleBackgroundColor:(SAUIColor *)arg1 ;
-(SAUIDecoratedText *)footnote;
-(void)setLabel:(SAUIDecoratedText *)arg1 ;
-(SAUIColor *)titleTextColor;
-(void)setTitleTextColor:(SAUIColor *)arg1 ;
-(SAUIDecoratedText *)label;
-(SAUIDecoratedText *)title;
@end

