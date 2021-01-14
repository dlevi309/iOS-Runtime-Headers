/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SASTComparisonEntity, SAUIDecoratedText, NSString;

@interface SASTComparisonItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SASTComparisonEntity * firstItem; 
@property (nonatomic,retain) SAUIDecoratedText * footnote; 
@property (nonatomic,retain) SASTComparisonEntity * secondItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)comparisonItem;
+(id)comparisonItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(SASTComparisonEntity *)firstItem;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SASTComparisonEntity *)secondItem;
-(void)setFootnote:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)footnote;
-(void)setFirstItem:(SASTComparisonEntity *)arg1 ;
-(void)setSecondItem:(SASTComparisonEntity *)arg1 ;
@end

