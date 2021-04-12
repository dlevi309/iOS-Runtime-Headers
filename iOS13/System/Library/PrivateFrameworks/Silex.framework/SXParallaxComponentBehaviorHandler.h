/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentBehaviorHandler.h>

@interface SXParallaxComponentBehaviorHandler : SXComponentBehaviorHandler {

	BOOL _isRotating;
	BOOL _inFirstViewport;
	BOOL _inLastViewport;
	int _direction;
	double _factor;
	CGRect _absoluteContentViewFrame;

}

@property (nonatomic,readonly) BOOL isRotating;                            //@synthesize isRotating=_isRotating - In the implementation block
@property (assign,nonatomic) BOOL inFirstViewport;                         //@synthesize inFirstViewport=_inFirstViewport - In the implementation block
@property (assign,nonatomic) BOOL inLastViewport;                          //@synthesize inLastViewport=_inLastViewport - In the implementation block
@property (assign,nonatomic) CGRect absoluteContentViewFrame;              //@synthesize absoluteContentViewFrame=_absoluteContentViewFrame - In the implementation block
@property (assign,nonatomic) int direction;                                //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) double factor;                              //@synthesize factor=_factor - In the implementation block
-(double)factor;
-(int)direction;
-(void)setDirection:(int)arg1 ;
-(BOOL)isRotating;
-(id)initWithComponentView:(id)arg1 withBehavior:(id)arg2 ;
-(void)setupWithBehaviorController:(id)arg1 ;
-(void)updateWithBehaviorController:(id)arg1 ;
-(void)destroyWithBehaviorController:(id)arg1 ;
-(void)setAbsoluteContentViewFrame:(CGRect)arg1 ;
-(CGRect)absoluteContentViewFrame;
-(void)setInFirstViewport:(BOOL)arg1 ;
-(void)setInLastViewport:(BOOL)arg1 ;
-(BOOL)inFirstViewport;
-(BOOL)inLastViewport;
-(BOOL)requiresContinuousUpdates;
@end

