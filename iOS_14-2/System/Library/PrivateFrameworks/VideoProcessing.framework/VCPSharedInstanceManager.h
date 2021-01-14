/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

