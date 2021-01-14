/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CALayer *)layer;
-(id)init;
-(id)initWithLayer:(id)arg1 key:(id)arg2 ;
-(NSString *)key;
-(id)removalAction;
-(void)removeAnimationIfPossible;
-(void)setRemovalAction:(id)arg1 ;
@end

