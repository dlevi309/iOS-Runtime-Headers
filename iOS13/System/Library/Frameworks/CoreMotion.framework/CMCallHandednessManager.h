/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue, CMCallHandednessDelegate;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMCallHandednessManager : NSObject {

	NSObject*<OS_dispatch_queue> fPrivateQueue;
	Dispatcher* fDispatcher;
	id<CMCallHandednessDelegate> _delegate;

}

@property (assign,nonatomic) id<CMCallHandednessDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isCallHandednessAvailable;
-(id)init;
-(void)dealloc;
-(id<CMCallHandednessDelegate>)delegate;
-(void)setDelegate:(id<CMCallHandednessDelegate>)arg1 ;
-(void)onCallHandednessStateUpdated:(const Sample*)arg1 ;
-(void)startCallHandednessUpdates;
-(void)stopCallHandednessUpdates;
@end

