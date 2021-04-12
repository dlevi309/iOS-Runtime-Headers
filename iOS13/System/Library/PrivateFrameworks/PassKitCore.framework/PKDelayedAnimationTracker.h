/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class CALayer, NSString;

@interface PKDelayedAnimationTracker : NSObject {

	CALayer* _layer;
	NSString* _key;
	/*^block*/id _removalAction;

}

@property (nonatomic,__weak,readonly) CALayer * layer;              //@synthesize layer=_layer - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                 //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) id removalAction;                        //@synthesize removalAction=_removalAction - In the implementation block
-(id)init;
-(NSString *)key;
-(CALayer *)layer;
-(id)initWithLayer:(id)arg1 key:(id)arg2 ;
-(void)removeAnimationIfPossible;
-(id)removalAction;
-(void)setRemovalAction:(id)arg1 ;
@end

