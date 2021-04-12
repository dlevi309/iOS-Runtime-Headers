/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray;

@interface UIKBStrokeView : UIView {

	NSMutableArray* _points;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)addStrokePoint:(CGPoint)arg1 withTimestamp:(double)arg2 ;
-(void)resetStrokePoints;
-(void)drawRect:(CGRect)arg1 ;
@end

