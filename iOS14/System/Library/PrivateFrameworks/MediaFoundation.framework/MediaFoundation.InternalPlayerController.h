/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaFoundation.framework/MediaFoundation
*/

#import <libobjc.A.dylib/MFStateDumpable.h>
#import <libobjc.A.dylib/MFResettable.h>
#import <libobjc.A.dylib/MFStateDumpable.h>
#import <libobjc.A.dylib/MFResettable.h>

@class NSDictionary;

@interface MediaFoundation.InternalPlayerController : _UKNOWN_SUPERCLASS_ <MFStateDumpable, MFResettable, MFStateDumpable, MFResettable> {

	 delegate;
	 currentRate;
	 targetRate;
	 targetStartTime;
	 currentItem;
	 player;
	 reporter;
	 queue;
	 scanningSubscription;
	 lastFullyDownloadedPlayerItem;

}

@property (readonly,nonatomic) NSDictionary * stateDictionary; 
-(NSDictionary *)stateDictionary;
-(void)reset;
@end

