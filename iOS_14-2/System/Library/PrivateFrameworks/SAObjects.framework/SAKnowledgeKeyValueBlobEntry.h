/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAKnowledgeKeyValueEntry.h>

@class NSData;

@interface SAKnowledgeKeyValueBlobEntry : SAKnowledgeKeyValueEntry

@property (nonatomic,copy) NSData * value; 
+(id)keyValueBlobEntry;
+(id)keyValueBlobEntryWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setValue:(NSData *)arg1 ;
-(NSData *)value;
@end

