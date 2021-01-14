/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)setScreenSize:(CGSize)arg1 ;
-(unsigned)flags;
-(CGSize)screenSize;
-(void)setFlags:(unsigned)arg1 ;
-(void)invalidate;
-(id<RPMessageable>)messenger;
-(void)setMessenger:(id<RPMessageable>)arg1 ;
-(void)sendTouchEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

