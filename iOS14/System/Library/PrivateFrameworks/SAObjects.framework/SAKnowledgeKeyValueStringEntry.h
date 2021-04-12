/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAKnowledgeKeyValueEntry.h>

@class NSString;

@interface SAKnowledgeKeyValueStringEntry : SAKnowledgeKeyValueEntry

@property (nonatomic,copy) NSString * value; 
+(id)keyValueStringEntry;
+(id)keyValueStringEntryWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
@end

