/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSData, NSString;

@interface SAIntentGroupProtobufMessage : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSData * data; 
@property (nonatomic,copy) NSString * debugString; 
@property (nonatomic,copy) NSString * typeName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)protobufMessage;
+(id)protobufMessageWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)debugString;
-(void)setDebugString:(NSString *)arg1 ;
-(void)setTypeName:(NSString *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSString *)typeName;
-(NSData *)data;
@end

