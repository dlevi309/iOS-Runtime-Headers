/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue, CMPickupDelegate;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMPickupManager : NSObject {

	NSObject*<OS_dispatch_queue> fPrivateQueue;
	Dispatcher* fDispatcher;
	id<CMPickupDelegate> _delegate;

}

@property (assign,nonatomic) id<CMPickupDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isPickupAvailable;
-(id)init;
-(void)dealloc;
-(id<CMPickupDelegate>)delegate;
-(void)setDelegate:(id<CMPickupDelegate>)arg1 ;
-(void)onPickupStateUpdated:(const Sample*)arg1 ;
-(void)startPickupUpdates;
-(void)stopPickupUpdates;
@end

