/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SASyncServerVerifyResponse : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * internalVerifications; 
@property (nonatomic,copy) NSArray * serverChecksums; 
@property (nonatomic,copy) NSArray * syncDebugInfo; 
+(id)serverVerifyResponse;
+(id)serverVerifyResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)internalVerifications;
-(void)setInternalVerifications:(NSArray *)arg1 ;
-(NSArray *)serverChecksums;
-(void)setServerChecksums:(NSArray *)arg1 ;
-(NSArray *)syncDebugInfo;
-(void)setSyncDebugInfo:(NSArray *)arg1 ;
@end

