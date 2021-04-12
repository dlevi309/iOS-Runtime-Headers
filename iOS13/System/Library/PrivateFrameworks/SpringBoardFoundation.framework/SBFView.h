/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface SBFView : UIView {

	NSArray* _animatedLayerProperties;
	/*^block*/id _didMoveToWindowHandler;
	CGSize _intrinsicContentSize;

}

@property (assign,nonatomic) CGSize intrinsicContentSize;                  //@synthesize intrinsicContentSize=_intrinsicContentSize - In the implementation block
@property (nonatomic,copy) NSArray * animatedLayerProperties;              //@synthesize animatedLayerProperties=_animatedLayerProperties - In the implementation block
@property (nonatomic,copy) id didMoveToWindowHandler;                      //@synthesize didMoveToWindowHandler=_didMoveToWindowHandler - In the implementation block
-(CGSize)intrinsicContentSize;
-(void)didMoveToWindow;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setAnimatedLayerProperties:(NSArray *)arg1 ;
-(NSArray *)animatedLayerProperties;
-(id)didMoveToWindowHandler;
-(void)setIntrinsicContentSize:(CGSize)arg1 ;
-(void)setDidMoveToWindowHandler:(id)arg1 ;
@end

