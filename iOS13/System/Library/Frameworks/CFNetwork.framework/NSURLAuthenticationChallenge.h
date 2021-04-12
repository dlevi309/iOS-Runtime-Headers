/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURLAuthenticationChallengeInternal, NSURLProtectionSpace, NSURLCredential, NSURLResponse, NSError;

@interface NSURLAuthenticationChallenge : NSObject <NSSecureCoding> {

	NSURLAuthenticationChallengeInternal* _internal;

}

@property (copy,readonly) NSURLProtectionSpace * protectionSpace; 
@property (copy,readonly) NSURLCredential * proposedCredential; 
@property (readonly) long long previousFailureCount; 
@property (copy,readonly) NSURLResponse * failureResponse; 
@property (copy,readonly) NSError * error; 
@property (retain,readonly) id<NSURLAuthenticationChallengeSender> sender; 
+(BOOL)supportsSecureCoding;
+(id)_authenticationChallengeForCFAuthChallenge:(CFURLAuthChallengeRef)arg1 sender:(id)arg2 ;
+(id)_createAuthenticationChallengeForCFAuthChallenge:(CFURLAuthChallengeRef)arg1 sender:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(id<NSURLAuthenticationChallengeSender>)sender;
-(void)setSender:(id<NSURLAuthenticationChallengeSender>)arg1 ;
-(NSURLProtectionSpace *)protectionSpace;
-(long long)previousFailureCount;
-(CFURLAuthChallengeRef)_createCFAuthChallenge;
-(NSURLCredential *)proposedCredential;
-(NSURLResponse *)failureResponse;
-(id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6 ;
-(id)_initWithListOfProtectionSpaces:(id)arg1 CurrentProtectionSpace:(id)arg2 proposedCredential:(id)arg3 previousFailureCount:(long long)arg4 failureResponse:(id)arg5 error:(id)arg6 sender:(id)arg7 ;
-(id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2 ;
-(id)_initWithCFAuthChallenge:(CFURLAuthChallengeRef)arg1 sender:(id)arg2 ;
-(BOOL)_isPasswordBasedChallenge;
@end

