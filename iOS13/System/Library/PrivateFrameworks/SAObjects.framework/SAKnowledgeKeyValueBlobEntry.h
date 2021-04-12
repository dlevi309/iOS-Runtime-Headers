/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAKnowledgeKeyValueEntry.h>

@class NSData;

@interface SAKnowledgeKeyValueBlobEntry : SAKnowledgeKeyValueEntry

@property (nonatomic,copy) NSData * value; 
+(id)keyValueBlobEntry;
+(id)keyValueBlobEntryWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSData *)value;
-(void)setValue:(NSData *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

