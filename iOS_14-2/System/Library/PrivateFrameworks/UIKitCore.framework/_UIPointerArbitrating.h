/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIPointerArbitrating <NSObject>
@property (nonatomic,readonly) long long pointerState; 
@required
-(void)applyStyle:(id)arg1 forRegion:(id)arg2 effectSourceHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4;
-(void)exitRegion:(id)arg1 removeStyle:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)beginScrollingWithRegion:(id)arg1;
-(void)endScrollingWithRegion:(id)arg1;
-(long long)pointerState;

@end

