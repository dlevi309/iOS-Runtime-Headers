/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/


@interface AXSSKeyboardCommandInfo : NSObject {

	BOOL _handlesBothDownAndUp;
	/*^block*/id _handler;
	/*^block*/id _downHandler;
	/*^block*/id _upHandler;

}

@property (nonatomic,readonly) BOOL handlesBothDownAndUp;              //@synthesize handlesBothDownAndUp=_handlesBothDownAndUp - In the implementation block
@property (nonatomic,readonly) id handler;                             //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) id downHandler;                         //@synthesize downHandler=_downHandler - In the implementation block
@property (nonatomic,readonly) id upHandler;                           //@synthesize upHandler=_upHandler - In the implementation block
+(id)infoWithHandler:(/*^block*/id)arg1 ;
+(id)infoWithDownHandler:(/*^block*/id)arg1 upHandler:(/*^block*/id)arg2 ;
-(id)handler;
-(id)_initWithHandler:(/*^block*/id)arg1 downHandler:(/*^block*/id)arg2 upHandler:(/*^block*/id)arg3 handlesBothDownAndUp:(BOOL)arg4 ;
-(BOOL)handlesBothDownAndUp;
-(id)downHandler;
-(id)upHandler;
@end

