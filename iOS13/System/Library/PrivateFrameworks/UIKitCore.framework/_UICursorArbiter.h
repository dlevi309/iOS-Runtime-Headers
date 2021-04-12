/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UICursorArbiterCore;
@interface _UICursorArbiter : NSObject {

	id<_UICursorArbiterCore> _core;

}

@property (nonatomic,readonly) long long pointerState; 
+(id)sharedArbiter;
-(id)init;
-(long long)pointerState;
-(void)applyStyle:(id)arg1 forRegion:(id)arg2 effectSourceHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)resetStyleForRegion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestAutohide;
-(void)beginScrollingWithRegion:(id)arg1 ;
-(void)endScrollingWithRegion:(id)arg1 ;
@end

