/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/


@class NSMutableDictionary, NSUUID;

@interface CCUIAnimationBatch : NSObject {

	NSMutableDictionary* _animationsByParameters;
	NSUUID* _UUID;

}

@property (nonatomic,copy,readonly) NSUUID * UUID;              //@synthesize UUID=_UUID - In the implementation block
-(NSUUID *)UUID;
-(id)init;
-(void)addAnimation:(id)arg1 ;
-(void)iterateAnimationsOfType:(Class)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)iterateAnimationsWithBlock:(/*^block*/id)arg1 ;
@end

