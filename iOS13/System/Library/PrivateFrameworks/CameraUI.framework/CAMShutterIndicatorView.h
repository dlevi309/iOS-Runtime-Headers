/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSAttributedString;

@interface CAMShutterIndicatorView : UIView {

	NSAttributedString* __indicatorText;

}

@property (nonatomic,readonly) NSAttributedString * _indicatorText;              //@synthesize _indicatorText=__indicatorText - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)_commonCAMShutterIndicatorViewInitialization;
-(NSAttributedString *)_indicatorText;
@end

