/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAKnowledgeKeyValueEntry.h>

@class NSNumber;

@interface SAKnowledgeKeyValueNumericEntry : SAKnowledgeKeyValueEntry

@property (nonatomic,copy) NSNumber * value; 
+(id)keyValueNumericEntry;
+(id)keyValueNumericEntryWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setValue:(NSNumber *)arg1 ;
-(NSNumber *)value;
@end

