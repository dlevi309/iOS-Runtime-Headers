/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableArray, UITouch, NSNumber, NSArray;

@interface _UIEstimatedTouchRecord : NSObject {

	NSMutableArray* _touchables;
	UITouch* _liveTouch;
	UITouch* _frozenTouch;
	NSNumber* _contextID;

}

@property (nonatomic,readonly) UITouch * liveTouch;                //@synthesize liveTouch=_liveTouch - In the implementation block
@property (nonatomic,readonly) UITouch * frozenTouch;              //@synthesize frozenTouch=_frozenTouch - In the implementation block
@property (nonatomic,readonly) NSArray * touchables;               //@synthesize touchables=_touchables - In the implementation block
@property (nonatomic,readonly) NSNumber * contextID;               //@synthesize contextID=_contextID - In the implementation block
-(UITouch *)frozenTouch;
-(NSNumber *)contextID;
-(UITouch *)liveTouch;
-(void)addTouchable:(id)arg1 ;
-(id)initWithLiveTouch:(id)arg1 freezeTouch:(id)arg2 contextID:(id)arg3 ;
-(void)removeTouchable:(id)arg1 ;
-(void)dispatchUpdateWithPressure:(double)arg1 stillEstimated:(BOOL)arg2 ;
-(NSArray *)touchables;
@end

