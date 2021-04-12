/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer, CAPropertyAnimation;

@interface PHCloudActivityView : UIView {

	CALayer* _cloudImageLayer;
	CALayer* _completedImageLayer;
	CALayer* _loadingImageLayer;
	CAPropertyAnimation* _rotationAnimation;
	unsigned long long _state;
	double _initialWidth;

}

@property (nonatomic,retain) CALayer * cloudImageLayer;                            //@synthesize cloudImageLayer=_cloudImageLayer - In the implementation block
@property (nonatomic,retain) CALayer * completedImageLayer;                        //@synthesize completedImageLayer=_completedImageLayer - In the implementation block
@property (nonatomic,retain) CALayer * loadingImageLayer;                          //@synthesize loadingImageLayer=_loadingImageLayer - In the implementation block
@property (nonatomic,retain) CAPropertyAnimation * rotationAnimation;              //@synthesize rotationAnimation=_rotationAnimation - In the implementation block
@property (assign,nonatomic) unsigned long long state;                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double initialWidth;                                  //@synthesize initialWidth=_initialWidth - In the implementation block
+(void)initialize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)registerForNotifications;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(void)dealloc;
-(CALayer *)cloudImageLayer;
-(void)setCloudImageLayer:(CALayer *)arg1 ;
-(CALayer *)completedImageLayer;
-(void)setCompletedImageLayer:(CALayer *)arg1 ;
-(CALayer *)loadingImageLayer;
-(void)setLoadingImageLayer:(CALayer *)arg1 ;
-(void)persistenceManagerDidChange:(id)arg1 ;
-(void)streamingDidStart:(id)arg1 ;
-(void)streamingDidStop:(id)arg1 ;
-(void)updateViewVisibility;
-(void)stopRotationAnimation;
-(void)startRotationAnimation;
-(CAPropertyAnimation *)rotationAnimation;
-(void)setRotationAnimation:(CAPropertyAnimation *)arg1 ;
-(double)initialWidth;
-(void)setInitialWidth:(double)arg1 ;
@end

