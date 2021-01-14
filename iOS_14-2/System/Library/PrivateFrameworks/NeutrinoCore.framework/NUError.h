/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <Foundation/NSError.h>

@class NSString;

@interface NUError : NSError

@property (readonly) NSString * nonLocalizedFailureReason; 
@property (readonly) id invalidObject; 
+(id)underlyingError:(id)arg1 ;
+(id)rootError:(id)arg1 ;
+(id)failureError:(id)arg1 object:(id)arg2 ;
+(id)invalidError:(id)arg1 object:(id)arg2 ;
+(id)missingError:(id)arg1 object:(id)arg2 ;
+(id)extraError:(id)arg1 object:(id)arg2 ;
+(id)mismatchError:(id)arg1 object:(id)arg2 ;
+(id)rangeError:(id)arg1 object:(id)arg2 ;
+(id)unknownError:(id)arg1 object:(id)arg2 ;
+(id)duplicateError:(id)arg1 object:(id)arg2 ;
+(id)unsupportedError:(id)arg1 object:(id)arg2 ;
+(id)canceledError:(id)arg1 object:(id)arg2 ;
+(id)timeoutError:(id)arg1 object:(id)arg2 ;
+(id)resourceUnavailableError:(id)arg1 object:(id)arg2 ;
+(id)errorWithCode:(long long)arg1 reason:(id)arg2 object:(id)arg3 ;
+(id)errorWithCode:(long long)arg1 reason:(id)arg2 object:(id)arg3 underlyingError:(id)arg4 ;
-(id)description;
-(id)descriptionWithIndent:(long long)arg1 ;
-(id)errorCodeDescription;
-(NSString *)nonLocalizedFailureReason;
-(id)invalidObject;
@end

