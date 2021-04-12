/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<SASTTemplateAction>)action;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setAction:(id<SASTTemplateAction>)arg1 ;
-(id)encodedClassName;
-(SAUINanoImageResource *)imageResource;
-(void)setImageResource:(SAUINanoImageResource *)arg1 ;
-(NSString *)attributionPosition;
-(void)setAttributionPosition:(NSString *)arg1 ;
@end

