/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTActionableTemplateItem.h>

@class SAUIDecoratedText, SAUILocalImageResource, NSString;

@interface SASTButtonItem : AceObject <SASTActionableTemplateItem>

@property (nonatomic,retain) id<SASTTemplateAction> action; 
@property (assign,nonatomic) BOOL centered; 
@property (nonatomic,retain) SAUIDecoratedText * decoratedLabel; 
@property (nonatomic,retain) SAUILocalImageResource * localImageResource; 
@property (nonatomic,copy) NSString * position; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buttonItemWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)buttonItem;
-(NSString *)position;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIDecoratedText *)decoratedLabel;
-(void)setDecoratedLabel:(SAUIDecoratedText *)arg1 ;
-(id<SASTTemplateAction>)action;
-(void)setAction:(id<SASTTemplateAction>)arg1 ;
-(SAUILocalImageResource *)localImageResource;
-(void)setLocalImageResource:(SAUILocalImageResource *)arg1 ;
-(void)setCentered:(BOOL)arg1 ;
-(void)setPosition:(NSString *)arg1 ;
-(BOOL)centered;
@end

