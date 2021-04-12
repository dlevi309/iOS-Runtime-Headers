/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setIntrinsicContentSize:(CGSize)arg1 ;
-(void)didMoveToWindow;
-(id)didMoveToWindowHandler;
-(NSArray *)animatedLayerProperties;
-(void)setAnimatedLayerProperties:(NSArray *)arg1 ;
-(void)setDidMoveToWindowHandler:(id)arg1 ;
@end

