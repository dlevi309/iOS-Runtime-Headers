/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

