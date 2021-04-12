/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(SAUIDecoratedText *)value;
-(void)setValue:(SAUIDecoratedText *)arg1 ;
-(id)groupIdentifier;
-(SAUIDecoratedText *)title;
-(void)setTitle:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)subtitle;
-(void)setSubtitle:(SAUIDecoratedText *)arg1 ;
-(id)encodedClassName;
-(NSString *)stockValueFacet;
-(void)setStockValueFacet:(NSString *)arg1 ;
@end

