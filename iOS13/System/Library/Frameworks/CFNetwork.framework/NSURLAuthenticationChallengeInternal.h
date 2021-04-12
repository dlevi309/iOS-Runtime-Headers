/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol NSURLAuthenticationChallengeSender;
@class NSURLProtectionSpace, NSURLCredential, NSURLResponse, NSError, NSArray;

@interface NSURLAuthenticationChallengeInternal : NSObject {

	NSURLProtectionSpace* space;
	NSURLCredential* proposedCredential;
	long long previousFailureCount;
	NSURLResponse* failureResponse;
	NSError* error;
	id<NSURLAuthenticationChallengeSender> sender;
	NSArray* protectionSpacesForChallenge;
	long long preferredProtSpaceIndex;

}
-(void)dealloc;
-(id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6 ;
@end

