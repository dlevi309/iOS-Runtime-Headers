/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/


#import <FrontBoard/FrontBoard-Structs.h>
@class NSHashTable;

@interface FBSceneTransform : NSObject {

	CGAffineTransform _transform;
	NSHashTable* _targets;
	BOOL _appliesToSystemGestureView;

}

@property (assign,nonatomic) CGAffineTransform transform;                  //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) BOOL appliesToSystemGestureView;              //@synthesize appliesToSystemGestureView=_appliesToSystemGestureView - In the implementation block
+(CGAffineTransform)concatenateTransforms:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(CGAffineTransform)transform;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(id)_initWithTransform:(CGAffineTransform)arg1 ;
-(void)_notifyTargetsTransformDidUpdate;
-(void)setAppliesToSystemGestureView:(BOOL)arg1 ;
-(void)addTransformTarget:(id)arg1 ;
-(void)removeTransformTarget:(id)arg1 ;
-(BOOL)appliesToSystemGestureView;
@end

