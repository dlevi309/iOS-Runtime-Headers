/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAKnowledgeKeyValueEntry.h>

@class NSString;

@interface SAKnowledgeKeyValueStringEntry : SAKnowledgeKeyValueEntry

@property (nonatomic,copy) NSString * value; 
+(id)keyValueStringEntry;
+(id)keyValueStringEntryWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

