/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Eyedropper.framework/Eyedropper
*/

#import <Eyedropper/Eyedropper-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface EDGridView : UIView {

	long long _cellCount;
	UIColor* _strokeColor;

}

@property (nonatomic,retain) UIColor * strokeColor;              //@synthesize strokeColor=_strokeColor - In the implementation block
-(UIColor *)strokeColor;
-(void)drawRect:(CGRect)arg1 ;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(id)initWithWithCellCount:(long long)arg1 ;
@end

