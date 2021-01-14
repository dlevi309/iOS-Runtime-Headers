/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTActionableTemplateItem.h>

@class NSString, SAUINanoImageResource;

@interface SASTAttributionItem : AceObject <SASTActionableTemplateItem>

@property (nonatomic,retain) id<SASTTemplateAction> action; 
@property (nonatomic,copy) NSString * attributionPosition; 
@property (nonatomic,retain) SAUINanoImageResource * imageResource; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)attributionItem;
+(id)attributionItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)attributionPosition;
-(void)setAttributionPosition:(NSString *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(id<SASTTemplateAction>)action;
-(SAUINanoImageResource *)imageResource;
-(void)setImageResource:(SAUINanoImageResource *)arg1 ;
-(void)setAction:(id<SASTTemplateAction>)arg1 ;
-(NSString *)text;
@end

