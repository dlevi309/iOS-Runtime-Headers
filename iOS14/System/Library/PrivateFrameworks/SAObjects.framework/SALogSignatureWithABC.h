/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSDictionary;

@interface SALogSignatureWithABC : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * subType; 
@property (nonatomic,copy) NSDictionary * subTypeContext; 
+(id)logSignatureWithABC;
+(id)logSignatureWithABCWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSDictionary *)subTypeContext;
-(void)setSubTypeContext:(NSDictionary *)arg1 ;
-(NSString *)subType;
-(void)setSubType:(NSString *)arg1 ;
@end

