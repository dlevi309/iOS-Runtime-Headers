/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSURL, NSData;

@interface SALocalSearchSendToProtobufConduit : SADomainCommand

@property (nonatomic,copy) NSArray * attributes; 
@property (nonatomic,copy) NSURL * endpoint; 
@property (nonatomic,copy) NSData * rawRequest; 
@property (assign,nonatomic) long long timeoutInSeconds; 
+(id)sendToProtobufConduit;
+(id)sendToProtobufConduitWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setAttributes:(NSArray *)arg1 ;
-(BOOL)requiresResponse;
-(void)setEndpoint:(NSURL *)arg1 ;
-(NSURL *)endpoint;
-(NSArray *)attributes;
-(void)setTimeoutInSeconds:(long long)arg1 ;
-(NSData *)rawRequest;
-(void)setRawRequest:(NSData *)arg1 ;
-(long long)timeoutInSeconds;
@end

