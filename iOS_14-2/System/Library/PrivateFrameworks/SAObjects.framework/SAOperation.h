/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDictionary, NSString;

@interface SAOperation : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDictionary * constraints; 
@property (nonatomic,copy) NSString * domainId; 
@property (nonatomic,copy) NSString * operationId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)operation;
+(id)operationWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDictionary *)constraints;
-(void)setConstraints:(NSDictionary *)arg1 ;
-(id)groupIdentifier;
-(NSString *)operationId;
-(id)encodedClassName;
-(NSString *)domainId;
-(void)setDomainId:(NSString *)arg1 ;
-(void)setOperationId:(NSString *)arg1 ;
@end

