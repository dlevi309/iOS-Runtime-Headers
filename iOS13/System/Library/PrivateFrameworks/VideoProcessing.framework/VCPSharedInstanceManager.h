/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface VCPSharedInstanceManager : NSObject {

	NSObject*<OS_dispatch_queue> serialQueue_;
	NSMutableDictionary* sharedInstances_;

}
+(id)sharedManager;
-(id)init;
-(void)reset;
-(id)sharedInstanceWithIdentifier:(id)arg1 andCreationBlock:(/*^block*/id)arg2 ;
@end

