/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class NSString, SAUIColor;

@interface SASTSideBySideButtonsItem : AceObject <SASTTemplateItem>

@property (nonatomic,copy) NSString * buttonsViewStyle; 
@property (nonatomic,retain) id<SASTTemplateAction> primaryButtonAction; 
@property (assign,nonatomic) BOOL primaryButtonEnabled; 
@property (nonatomic,copy) NSString * primaryButtonLabel; 
@property (nonatomic,retain) SAUIColor * primaryButtonTextColor; 
@property (nonatomic,retain) id<SASTTemplateAction> secondaryButtonAction; 
@property (assign,nonatomic) BOOL secondaryButtonEnabled; 
@property (nonatomic,copy) NSString * secondaryButtonLabel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sideBySideButtonsItem;
+(id)sideBySideButtonsItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)buttonsViewStyle;
-(void)setButtonsViewStyle:(NSString *)arg1 ;
-(id<SASTTemplateAction>)primaryButtonAction;
-(void)setPrimaryButtonAction:(id<SASTTemplateAction>)arg1 ;
-(BOOL)primaryButtonEnabled;
-(void)setPrimaryButtonEnabled:(BOOL)arg1 ;
-(NSString *)primaryButtonLabel;
-(void)setPrimaryButtonLabel:(NSString *)arg1 ;
-(SAUIColor *)primaryButtonTextColor;
-(void)setPrimaryButtonTextColor:(SAUIColor *)arg1 ;
-(id<SASTTemplateAction>)secondaryButtonAction;
-(void)setSecondaryButtonAction:(id<SASTTemplateAction>)arg1 ;
-(BOOL)secondaryButtonEnabled;
-(void)setSecondaryButtonEnabled:(BOOL)arg1 ;
-(NSString *)secondaryButtonLabel;
-(void)setSecondaryButtonLabel:(NSString *)arg1 ;
@end

