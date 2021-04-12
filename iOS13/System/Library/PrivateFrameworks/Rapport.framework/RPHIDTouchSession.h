/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/


@protocol OS_dispatch_queue, RPMessageable;
#import <Rapport/Rapport-Structs.h>
@class NSObject, NSNumber;

@interface RPHIDTouchSession : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSNumber* _touchSessionID;
	unsigned _flags;
	id<RPMessageable> _messenger;
	CGSize _screenSize;

}

@property (assign,nonatomic) unsigned flags;                           //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) id<RPMessageable> messenger;              //@synthesize messenger=_messenger - In the implementation block
@property (assign,nonatomic) CGSize screenSize;                        //@synthesize screenSize=_screenSize - In the implementation block
-(id)init;
-(void)invalidate;
-(void)_invalidate;
-(unsigned)flags;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(void)setScreenSize:(CGSize)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(CGSize)screenSize;
-(id<RPMessageable>)messenger;
-(void)setMessenger:(id<RPMessageable>)arg1 ;
-(void)sendTouchEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

