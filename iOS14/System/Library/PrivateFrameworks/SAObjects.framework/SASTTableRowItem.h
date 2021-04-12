/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class NSArray, SAUINanoImageResource, SAUIDecoratedText, NSString;

@interface SASTTableRowItem : AceObject <SASTTemplateItem>

@property (nonatomic,copy) NSArray * columnValues; 
@property (nonatomic,retain) SAUINanoImageResource * imageResource; 
@property (nonatomic,retain) SAUIDecoratedText * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tableRowItem;
+(id)tableRowItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setTitle:(SAUIDecoratedText *)arg1 ;
-(SAUINanoImageResource *)imageResource;
-(void)setImageResource:(SAUINanoImageResource *)arg1 ;
-(NSArray *)columnValues;
-(void)setColumnValues:(NSArray *)arg1 ;
-(SAUIDecoratedText *)title;
@end

