/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/


@protocol OS_dispatch_queue, RPMessageable;
@class NSObject;

@interface RPHIDSession : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	id<RPMessageable> _messenger;

}

@property (nonatomic,retain) id<RPMessageable> messenger;              //@synthesize messenger=_messenger - In the implementation block
-(id)init;
-(void)invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)hidCommand:(int)arg1 destinationID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)hidCommand:(int)arg1 buttonState:(int)arg2 destinationID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id<RPMessageable>)messenger;
-(void)setMessenger:(id<RPMessageable>)arg1 ;
@end

