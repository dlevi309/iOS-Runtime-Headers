/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


#import <SpringBoardHome/SpringBoardHome-Structs.h>
@interface _SBFloatingDockPlatterMetrics : NSObject {

	double _continuousCornerRadius;
	double _shadowRadius;
	double _shadowYOffset;
	CGRect _bounds;

}

@property (nonatomic,readonly) CGRect bounds;                              //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) double continuousCornerRadius;              //@synthesize continuousCornerRadius=_continuousCornerRadius - In the implementation block
@property (nonatomic,readonly) double shadowRadius;                        //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (nonatomic,readonly) double shadowYOffset;                       //@synthesize shadowYOffset=_shadowYOffset - In the implementation block
-(CGRect)bounds;
-(double)shadowRadius;
-(double)shadowYOffset;
-(double)continuousCornerRadius;
-(id)initWithBounds:(CGRect)arg1 continuousCornerRadius:(double)arg2 shadowRadius:(double)arg3 shadowYOffset:(double)arg4 ;
@end

