/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/


@protocol OS_dispatch_queue, RPMessageable;
#import <Rapport/Rapport-Structs.h>
@class NSObject, NSDictionary;

@interface RPHIDGCSession : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSDictionary* _options;
	id<RPMessageable> _messenger;

}

@property (nonatomic,retain) id<RPMessageable> messenger;              //@synthesize messenger=_messenger - In the implementation block
-(id)initWithOptions:(id)arg1 ;
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidate;
-(void)sendGCEvent:(RPHIDGCEvent*)arg1 destinationID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<RPMessageable>)messenger;
-(void)setMessenger:(id<RPMessageable>)arg1 ;
@end

