/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>

@class HMBProcessingOptions, NSArray, NAFuture;

@interface HMBProcessingResult : HMFObject {

	HMBProcessingOptions* _options;
	NSArray* _actions;
	NAFuture* _mirrorOutputResult;

}

@property (nonatomic,readonly) HMBProcessingOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSArray * actions;                           //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) NAFuture * mirrorOutputResult;               //@synthesize mirrorOutputResult=_mirrorOutputResult - In the implementation block
-(HMBProcessingOptions *)options;
-(NSArray *)actions;
-(id)initWithOptions:(id)arg1 actions:(id)arg2 mirrorOutputResult:(id)arg3 ;
-(NAFuture *)mirrorOutputResult;
@end

