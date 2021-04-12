/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIView.h>

@class TSDLineEnd;

@interface TSDLineEndView : UIView {

	TSDLineEnd* mLineEnd;
	BOOL mOnRight;

}

@property (nonatomic,retain) TSDLineEnd * lineEnd; 
@property (assign,nonatomic) BOOL onRight; 
+(id)viewWithLineEnd:(id)arg1 onRight:(BOOL)arg2 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setLineEnd:(TSDLineEnd *)arg1 ;
-(void)setOnRight:(BOOL)arg1 ;
-(TSDLineEnd *)lineEnd;
-(BOOL)onRight;
@end

