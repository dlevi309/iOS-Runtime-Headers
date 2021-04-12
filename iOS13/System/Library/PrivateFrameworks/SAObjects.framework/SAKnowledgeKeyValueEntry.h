/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAKnowledgeKeyValueEntry : SABaseClientBoundCommand <SAAceSerializable>

@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * storeName; 
@property (nonatomic,copy) NSString * storeType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyValueEntry;
+(id)keyValueEntryWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)key;
-(void)setStoreName:(NSString *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)storeName;
-(NSString *)storeType;
-(void)setStoreType:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

