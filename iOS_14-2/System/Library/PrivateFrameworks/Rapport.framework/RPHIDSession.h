/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/


@protocol OS_dispatch_queue, RPMessageable;
@class NSObject;

@interface RPHIDSession : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	id<RPMessageable> _messenger;

}

@property (nonatomic,retain) id<RPMessageable> messenger;              //@synthesize messenger=_messenger - In the implementation block
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)invalidate;
-(id<RPMessageable>)messenger;
-(void)setMessenger:(id<RPMessageable>)arg1 ;
-(void)hidCommand:(int)arg1 destinationID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)hidCommand:(int)arg1 buttonState:(int)arg2 destinationID:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

