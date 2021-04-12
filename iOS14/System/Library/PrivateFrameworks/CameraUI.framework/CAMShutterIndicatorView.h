/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSAttributedString;

@interface CAMShutterIndicatorView : UIView {

	NSAttributedString* __indicatorText;

}

@property (nonatomic,readonly) NSAttributedString * _indicatorText;              //@synthesize _indicatorText=__indicatorText - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonCAMShutterIndicatorViewInitialization;
-(NSAttributedString *)_indicatorText;
@end

