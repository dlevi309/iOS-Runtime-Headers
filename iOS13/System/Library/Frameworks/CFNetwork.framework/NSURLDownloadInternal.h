/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

