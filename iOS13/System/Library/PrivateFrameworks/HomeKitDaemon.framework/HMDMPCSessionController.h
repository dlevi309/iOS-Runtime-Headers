/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSOperationQueue;

@interface HMDMPCSessionController : HMFObject {

	NSOperationQueue* _speakerGroupCommandOperationQueue;

}

@property (nonatomic,readonly) NSOperationQueue * speakerGroupCommandOperationQueue;              //@synthesize speakerGroupCommandOperationQueue=_speakerGroupCommandOperationQueue - In the implementation block
-(id)init;
-(void)executeSessionWithSessionData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSOperationQueue *)speakerGroupCommandOperationQueue;
@end

