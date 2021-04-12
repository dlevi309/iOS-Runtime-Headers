/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUIApps.framework/PhotosUIApps
*/

#import <PhotosUIApps/PhotosUIApps-Structs.h>
#import <UIKitCore/UIView.h>

@class PUXHelloWorld, UILabel;

@interface PUXHelloWorldView : UIView {

	PUXHelloWorld* _swiftObject;
	UILabel* _label;

}

@property (nonatomic,retain) PUXHelloWorld * swiftObject;              //@synthesize swiftObject=_swiftObject - In the implementation block
@property (nonatomic,readonly) UILabel * label;                        //@synthesize label=_label - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)label;
-(PUXHelloWorld *)swiftObject;
-(void)setSwiftObject:(PUXHelloWorld *)arg1 ;
@end

