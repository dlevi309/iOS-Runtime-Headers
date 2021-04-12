/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIFocusLinearMovementDebugViewLineElement : NSObject {

	int _type;
	CGPoint _point;
	CGPoint _cp1;
	CGPoint _cp2;

}

@property (nonatomic,readonly) int type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) CGPoint point;              //@synthesize point=_point - In the implementation block
@property (nonatomic,readonly) CGPoint cp1;                //@synthesize cp1=_cp1 - In the implementation block
@property (nonatomic,readonly) CGPoint cp2;                //@synthesize cp2=_cp2 - In the implementation block
+(id)elementWithCGPathElement:(const CGPathElement*)arg1 ;
-(int)type;
-(CGPoint)point;
-(CGPoint)cp1;
-(CGPoint)cp2;
-(id)initWithType:(int)arg1 point:(CGPoint)arg2 cp1:(CGPoint)arg3 cp2:(CGPoint)arg4 ;
@end

