/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <BaseBoardUI/BSUICAPackageView.h>

@class CALayer, NSTimer, UILabel;

@interface WGWidgetPinningTeachingAnimationView : BSUICAPackageView {

	unsigned long long _state;
	CALayer* _materialsLayer;
	CALayer* _pagesLayer;
	CALayer* _page1Layer;
	NSTimer* _timerToNextState;
	UILabel* _debugLabel;

}

@property (assign,setter=_setState:,nonatomic) unsigned long long state;                           //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) CALayer * materialsLayer;                                             //@synthesize materialsLayer=_materialsLayer - In the implementation block
@property (nonatomic,retain) CALayer * pagesLayer;                                                 //@synthesize pagesLayer=_pagesLayer - In the implementation block
@property (nonatomic,retain) CALayer * page1Layer;                                                 //@synthesize page1Layer=_page1Layer - In the implementation block
@property (setter=_setTimerToNextState:,nonatomic,retain) NSTimer * timerToNextState;              //@synthesize timerToNextState=_timerToNextState - In the implementation block
@property (nonatomic,retain) UILabel * debugLabel;                                                 //@synthesize debugLabel=_debugLabel - In the implementation block
-(void)_setState:(unsigned long long)arg1 ;
-(id)init;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setDebugLabel:(UILabel *)arg1 ;
-(UILabel *)debugLabel;
-(void)startAnimating;
-(unsigned long long)state;
-(void)stopAnimating;
-(void)_updateMaterials;
-(double)_durationForState:(unsigned long long)arg1 ;
-(unsigned long long)_stateFollowingState:(unsigned long long)arg1 ;
-(void)_setTimerToNextState:(id)arg1 ;
-(CALayer *)materialsLayer;
-(void)setMaterialsLayer:(CALayer *)arg1 ;
-(CALayer *)pagesLayer;
-(void)setPagesLayer:(CALayer *)arg1 ;
-(CALayer *)page1Layer;
-(void)setPage1Layer:(CALayer *)arg1 ;
-(NSTimer *)timerToNextState;
@end

