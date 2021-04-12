/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class NSString, SAUIDecoratedText, NSArray, SAUINanoImageResource;

@interface SASTPropertyListItem : AceObject <SASTTemplateItem>

@property (nonatomic,copy) NSString * alignment; 
@property (nonatomic,retain) SAUIDecoratedText * decoratedTitle; 
@property (nonatomic,copy) NSArray * decoratedValues; 
@property (nonatomic,retain) SAUINanoImageResource * imageResource; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSArray * values; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)propertyListItem;
+(id)propertyListItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)alignment;
-(void)setAlignment:(NSString *)arg1 ;
-(id)encodedClassName;
-(SAUINanoImageResource *)imageResource;
-(void)setImageResource:(SAUINanoImageResource *)arg1 ;
-(SAUIDecoratedText *)decoratedTitle;
-(void)setDecoratedTitle:(SAUIDecoratedText *)arg1 ;
-(NSArray *)decoratedValues;
-(void)setDecoratedValues:(NSArray *)arg1 ;
@end

