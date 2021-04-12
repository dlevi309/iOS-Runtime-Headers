/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSDictionary, NSArray;

@interface SAUITemplateSegmentedControl : SAUITemplateBaseItem

@property (nonatomic,copy) NSDictionary * backgroundColors; 
@property (nonatomic,copy) NSDictionary * textColors; 
@property (nonatomic,copy) NSArray * titles; 
+(id)segmentedControlWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)segmentedControl;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setTitles:(NSArray *)arg1 ;
-(NSDictionary *)textColors;
-(NSDictionary *)backgroundColors;
-(void)setBackgroundColors:(NSDictionary *)arg1 ;
-(void)setTextColors:(NSDictionary *)arg1 ;
-(NSArray *)titles;
@end

