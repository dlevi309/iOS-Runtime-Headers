/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDictionary, NSString;

@interface SAEndpoint : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDictionary * operations; 
@property (nonatomic,copy) NSString * providerId; 
@property (assign,nonatomic) BOOL supportsAuthentication; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)endpointWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)endpoint;
-(void)setOperations:(NSDictionary *)arg1 ;
-(NSDictionary *)operations;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)supportsAuthentication;
-(void)setProviderId:(NSString *)arg1 ;
-(void)setSupportsAuthentication:(BOOL)arg1 ;
-(NSString *)providerId;
@end

