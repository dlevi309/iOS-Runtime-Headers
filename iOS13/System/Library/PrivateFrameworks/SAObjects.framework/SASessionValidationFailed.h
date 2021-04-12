/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASessionValidationFailed : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * errorCode; 
+(id)sessionValidationFailed;
+(id)sessionValidationFailedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)errorCode;
-(void)setErrorCode:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

