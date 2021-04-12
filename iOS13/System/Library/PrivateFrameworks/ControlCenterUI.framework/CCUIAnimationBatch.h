/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/


@class NSMutableDictionary, NSUUID;

@interface CCUIAnimationBatch : NSObject {

	NSMutableDictionary* _animationsByParameters;
	NSUUID* _UUID;

}

@property (nonatomic,copy,readonly) NSUUID * UUID;              //@synthesize UUID=_UUID - In the implementation block
-(id)init;
-(NSUUID *)UUID;
-(void)addAnimation:(id)arg1 ;
-(void)iterateAnimationsWithBlock:(/*^block*/id)arg1 ;
-(void)iterateAnimationsOfType:(Class)arg1 withBlock:(/*^block*/id)arg2 ;
@end

