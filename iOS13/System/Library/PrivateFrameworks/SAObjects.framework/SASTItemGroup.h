/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)fallbackCommands;
-(void)setFallbackCommands:(NSArray *)arg1 ;
-(NSArray *)templateItems;
-(void)setTemplateItems:(NSArray *)arg1 ;
@end

