/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray;

@interface SASTItemGroup : SAUISnippet

@property (nonatomic,copy) NSArray * fallbackCommands; 
@property (nonatomic,copy) NSArray * templateItems; 
+(id)itemGroup;
+(id)itemGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)templateItems;
-(void)setTemplateItems:(NSArray *)arg1 ;
-(NSArray *)fallbackCommands;
-(void)setFallbackCommands:(NSArray *)arg1 ;
@end

