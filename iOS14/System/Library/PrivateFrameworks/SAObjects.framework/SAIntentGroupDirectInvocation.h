/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSData, NSString;

@interface SAIntentGroupDirectInvocation : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSData * data; 
@property (nonatomic,copy) NSString * invocationIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)directInvocationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setData:(NSData *)arg1 ;
-(NSString *)invocationIdentifier;
-(void)setInvocationIdentifier:(NSString *)arg1 ;
-(NSData *)data;
@end

