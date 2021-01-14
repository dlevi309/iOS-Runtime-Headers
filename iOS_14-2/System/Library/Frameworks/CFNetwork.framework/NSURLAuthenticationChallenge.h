/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<NSURLAuthenticationChallengeSender>)sender;
-(void)setSender:(id<NSURLAuthenticationChallengeSender>)arg1 ;
-(NSURLResponse *)failureResponse;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSError *)error;
-(id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURLCredential *)proposedCredential;
-(NSURLProtectionSpace *)protectionSpace;
-(id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2 ;
-(id)_initWithListOfProtectionSpaces:(id)arg1 CurrentProtectionSpace:(id)arg2 proposedCredential:(id)arg3 previousFailureCount:(long long)arg4 failureResponse:(id)arg5 error:(id)arg6 sender:(id)arg7 ;
-(void)dealloc;
-(CFURLAuthChallengeRef)_createCFAuthChallenge;
-(long long)previousFailureCount;
@end

