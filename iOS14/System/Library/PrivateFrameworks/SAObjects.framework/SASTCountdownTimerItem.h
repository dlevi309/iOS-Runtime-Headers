/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTActionableTemplateItem.h>

@class SAUIColor, NSString;

@interface SASTCountdownTimerItem : AceObject <SASTActionableTemplateItem>

@property (nonatomic,retain) id<SASTTemplateAction> action; 
@property (assign,nonatomic) long long actionDelayInSeconds; 
@property (nonatomic,retain) SAUIColor * bodyBackgroundColor; 
@property (nonatomic,retain) SAUIColor * countdownTextColor; 
@property (nonatomic,retain) SAUIColor * headerBackgroundColor; 
@property (nonatomic,copy) NSString * headerText; 
@property (nonatomic,retain) SAUIColor * headerTextColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)countdownTimerItem;
+(id)countdownTimerItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id<SASTTemplateAction>)action;
-(void)setAction:(id<SASTTemplateAction>)arg1 ;
-(void)setHeaderTextColor:(SAUIColor *)arg1 ;
-(long long)actionDelayInSeconds;
-(void)setActionDelayInSeconds:(long long)arg1 ;
-(SAUIColor *)bodyBackgroundColor;
-(void)setBodyBackgroundColor:(SAUIColor *)arg1 ;
-(SAUIColor *)countdownTextColor;
-(void)setCountdownTextColor:(SAUIColor *)arg1 ;
-(SAUIColor *)headerTextColor;
-(void)setHeaderText:(NSString *)arg1 ;
-(void)setHeaderBackgroundColor:(SAUIColor *)arg1 ;
-(SAUIColor *)headerBackgroundColor;
-(NSString *)headerText;
@end

