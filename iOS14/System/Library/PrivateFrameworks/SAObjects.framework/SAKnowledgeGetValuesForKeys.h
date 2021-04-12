/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAKnowledgeGetValuesForKeys : SABaseClientBoundCommand <SAAceSerializable>

@property (nonatomic,copy) NSArray * keys; 
@property (nonatomic,copy) NSString * storeName; 
@property (nonatomic,copy) NSString * storeType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getValuesForKeys;
+(id)getValuesForKeysWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)keys;
-(NSString *)storeName;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setStoreType:(NSString *)arg1 ;
-(void)setKeys:(NSArray *)arg1 ;
-(void)setStoreName:(NSString *)arg1 ;
-(BOOL)mutatingCommand;
-(NSString *)storeType;
@end

