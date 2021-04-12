/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAKnowledgeSetValuesForKeys : SABaseClientBoundCommand <SAAceSerializable>

@property (nonatomic,copy) NSArray * entries; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setValuesForKeys;
+(id)setValuesForKeysWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setEntries:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)entries;
@end

