/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIKBRTDecayingObject.h>

@interface _UIKBRTDecayingOffset : _UIKBRTDecayingObject {

	BOOL _limitMovement;
	CGPoint _offset;

}

@property (nonatomic,readonly) CGPoint offset; 
@property (nonatomic,readonly) CGPoint originalOffset; 
-(void)reset;
-(CGPoint)offset;
-(id)initWithTimeoutDuration:(double)arg1 limitMovement:(BOOL)arg2 ;
-(void)updateOffsetTo:(CGPoint)arg1 ;
-(CGPoint)originalOffset;
@end

