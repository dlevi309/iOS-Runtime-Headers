/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVEffect.h>

@protocol PVCompositeDelegate;
@interface PVCompositeDelegateEffect : PVEffect {

	atomic<int> _loaded;
	id<PVCompositeDelegate> _renderDelegate;
	id _userContext;

}

@property (nonatomic,retain) id<PVCompositeDelegate> renderDelegate;              //@synthesize renderDelegate=_renderDelegate - In the implementation block
@property (nonatomic,retain) id userContext;                                      //@synthesize userContext=_userContext - In the implementation block
+(void)registerEffects;
-(id)userContext;
-(void)setRenderDelegate:(id<PVCompositeDelegate>)arg1 ;
-(void)setUserContext:(id)arg1 ;
-(id<PVCompositeDelegate>)renderDelegate;
-(id)initWithEffectID:(id)arg1 ;
-(BOOL)loadEffect;
-(void)releaseEffect;
@end

