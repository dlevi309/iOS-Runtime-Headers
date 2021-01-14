/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAUIHtmlView : SAAceView

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSString * html; 
+(id)htmlView;
+(id)htmlViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)html;
-(id)encodedClassName;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(void)setHtml:(NSString *)arg1 ;
@end

