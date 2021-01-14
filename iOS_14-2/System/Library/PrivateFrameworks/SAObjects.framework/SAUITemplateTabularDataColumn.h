/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSNumber, NSArray;

@interface SAUITemplateTabularDataColumn : SAUITemplateBaseItem

@property (nonatomic,copy) NSNumber * minimumWidth; 
@property (nonatomic,copy) NSNumber * rightMargin; 
@property (nonatomic,copy) NSArray * values; 
+(id)tabularDataColumn;
+(id)tabularDataColumnWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)minimumWidth;
-(void)setMinimumWidth:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)values;
-(void)setValues:(NSArray *)arg1 ;
-(void)setRightMargin:(NSNumber *)arg1 ;
-(NSNumber *)rightMargin;
@end

