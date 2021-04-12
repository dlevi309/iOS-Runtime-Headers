/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIIdleModeLayoutAttributes : NSObject {

	BOOL _wantsDimmingOverlay;
	double _alphaOffset;
	CGPoint _centerOffset;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) CGPoint centerOffset;                     //@synthesize centerOffset=_centerOffset - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) double alphaOffset;                       //@synthesize alphaOffset=_alphaOffset - In the implementation block
@property (assign,nonatomic) BOOL wantsDimmingOverlay;                 //@synthesize wantsDimmingOverlay=_wantsDimmingOverlay - In the implementation block
-(id)init;
-(CGAffineTransform)transform;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(double)alphaOffset;
-(CGPoint)centerOffset;
-(void)setAlphaOffset:(double)arg1 ;
-(void)setCenterOffset:(CGPoint)arg1 ;
-(BOOL)wantsDimmingOverlay;
-(void)setWantsDimmingOverlay:(BOOL)arg1 ;
@end

