/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _UICollectionViewAnimationContext;
@class _UICollectionViewAnimationContext;

@interface _UICollectionViewAnimator : NSObject <NSCopying> {

	id<_UICollectionViewAnimationContext> _animationContext;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) id handler;                                                      //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) _UICollectionViewAnimationContext * animationContext; 
-(void)setAnimationContext:(_UICollectionViewAnimationContext *)arg1 ;
-(_UICollectionViewAnimationContext *)animationContext;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(id)handler;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

