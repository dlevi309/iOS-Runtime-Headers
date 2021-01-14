/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSURLAuthenticationChallenge, NSOperationQueue;

@interface NSURLDownloadInternal : NSObject {

	CFURLDownloadRef cfDownload;
	CFURLAuthChallengeRef currCFChallenge;
	NSURLAuthenticationChallenge* currNSChallenge;
	id delegate;
	BOOL downloadActive;
	NSOperationQueue* _targetQueue;

}
-(void)dealloc;
@end

