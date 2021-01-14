/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@end

