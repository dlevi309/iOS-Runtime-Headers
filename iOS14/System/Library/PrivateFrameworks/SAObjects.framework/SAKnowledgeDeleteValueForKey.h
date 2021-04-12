/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAKnowledgeDeleteValueForKey : SABaseClientBoundCommand <SAAceSerializable>

@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * storeName; 
@property (nonatomic,copy) NSString * storeType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)deleteValueForKey;
+(id)deleteValueForKeyWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)storeName;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setStoreType:(NSString *)arg1 ;
-(NSString *)key;
-(void)setStoreName:(NSString *)arg1 ;
-(NSString *)storeType;
-(void)setKey:(NSString *)arg1 ;
@end

