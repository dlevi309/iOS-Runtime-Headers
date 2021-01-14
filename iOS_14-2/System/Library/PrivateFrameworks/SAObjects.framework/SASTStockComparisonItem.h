/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class NSString, SAUIDecoratedText;

@interface SASTStockComparisonItem : AceObject <SASTTemplateItem>

@property (nonatomic,copy) NSString * stockValueFacet; 
@property (nonatomic,retain) SAUIDecoratedText * subtitle; 
@property (nonatomic,retain) SAUIDecoratedText * title; 
@property (nonatomic,retain) SAUIDecoratedText * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stockComparisonItem;
+(id)stockComparisonItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIDecoratedText *)subtitle;
-(void)setTitle:(SAUIDecoratedText *)arg1 ;
-(void)setValue:(SAUIDecoratedText *)arg1 ;
-(void)setSubtitle:(SAUIDecoratedText *)arg1 ;
-(NSString *)stockValueFacet;
-(void)setStockValueFacet:(NSString *)arg1 ;
-(SAUIDecoratedText *)value;
-(SAUIDecoratedText *)title;
@end

