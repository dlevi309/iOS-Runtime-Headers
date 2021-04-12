/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)endpoint;
+(id)endpointWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDictionary *)operations;
-(id)groupIdentifier;
-(BOOL)supportsAuthentication;
-(void)setSupportsAuthentication:(BOOL)arg1 ;
-(void)setOperations:(NSDictionary *)arg1 ;
-(NSString *)providerId;
-(void)setProviderId:(NSString *)arg1 ;
-(id)encodedClassName;
@end

