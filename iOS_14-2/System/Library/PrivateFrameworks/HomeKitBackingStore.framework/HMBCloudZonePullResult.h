/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>

@class NAFuture;

@interface HMBCloudZonePullResult : HMFObject {

	NAFuture* _processingFuture;

}

@property (readonly) NAFuture * processingFuture;              //@synthesize processingFuture=_processingFuture - In the implementation block
-(id)initWithProcessingFuture:(id)arg1 ;
-(NAFuture *)processingFuture;
@end

