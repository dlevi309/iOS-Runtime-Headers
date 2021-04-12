/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCenterOffset:(CGPoint)arg1 ;
-(id)init;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(CGPoint)centerOffset;
-(double)alphaOffset;
-(void)setWantsDimmingOverlay:(BOOL)arg1 ;
-(BOOL)wantsDimmingOverlay;
-(void)setAlphaOffset:(double)arg1 ;
@end

