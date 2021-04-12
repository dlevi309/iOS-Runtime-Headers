/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreOverlays.framework/AppStoreOverlays
*/

#import <AppStoreOverlays/AppStoreOverlays-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface ASOOverlayTransitionContext : NSObject <NSSecureCoding> {

	NSMutableArray* _animationBlocks;
	CGRect _startFrame;
	CGRect _endFrame;

}

@property (nonatomic,retain) NSMutableArray * animationBlocks;              //@synthesize animationBlocks=_animationBlocks - In the implementation block
@property (assign,nonatomic) CGRect startFrame;                             //@synthesize startFrame=_startFrame - In the implementation block
@property (assign,nonatomic) CGRect endFrame;                               //@synthesize endFrame=_endFrame - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setStartFrame:(CGRect)arg1 ;
-(void)setEndFrame:(CGRect)arg1 ;
-(CGRect)endFrame;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)startFrame;
-(NSMutableArray *)animationBlocks;
-(void)addAnimationBlock:(/*^block*/id)arg1 ;
-(id)initWithStartFrame:(CGRect)arg1 endFrame:(CGRect)arg2 ;
-(void)setAnimationBlocks:(NSMutableArray *)arg1 ;
@end

