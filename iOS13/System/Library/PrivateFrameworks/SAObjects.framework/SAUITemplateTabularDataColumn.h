/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
-(id)groupIdentifier;
-(void)setRightMargin:(NSNumber *)arg1 ;
-(NSNumber *)minimumWidth;
-(void)setMinimumWidth:(NSNumber *)arg1 ;
-(NSNumber *)rightMargin;
-(id)encodedClassName;
@end

