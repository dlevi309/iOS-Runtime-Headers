/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)subType;
-(void)setSubType:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSDictionary *)subTypeContext;
-(void)setSubTypeContext:(NSDictionary *)arg1 ;
@end

