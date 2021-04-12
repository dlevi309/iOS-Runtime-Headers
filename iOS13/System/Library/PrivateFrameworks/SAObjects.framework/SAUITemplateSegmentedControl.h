/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSDictionary, NSArray;

@interface SAUITemplateSegmentedControl : SAUITemplateBaseItem

@property (nonatomic,copy) NSDictionary * backgroundColors; 
@property (nonatomic,copy) NSDictionary * textColors; 
@property (nonatomic,copy) NSArray * titles; 
+(id)segmentedControl;
+(id)segmentedControlWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setTitles:(NSArray *)arg1 ;
-(NSArray *)titles;
-(id)encodedClassName;
-(NSDictionary *)backgroundColors;
-(void)setBackgroundColors:(NSDictionary *)arg1 ;
-(NSDictionary *)textColors;
-(void)setTextColors:(NSDictionary *)arg1 ;
@end

