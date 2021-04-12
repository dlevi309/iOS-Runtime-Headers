/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/_MKUIViewControllerRootView.h>
#import <libobjc.A.dylib/MKVibrantGroup.h>

@class NSLayoutConstraint, UIView, NSString;

@interface _MKStackingContentView : _MKUIViewControllerRootView <MKVibrantGroup> {

	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _middleConstraint;
	NSLayoutConstraint* _bottomConstraint;
	UIView* _topView;
	UIView* _bottomView;

}

@property (nonatomic,retain) UIView * topView;                                     //@synthesize topView=_topView - In the implementation block
@property (nonatomic,retain) UIView * bottomView;                                  //@synthesize bottomView=_bottomView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * bottomConstraint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateConstraints;
-(NSLayoutConstraint *)bottomConstraint;
-(id)initWithViewController:(id)arg1 ;
-(UIView *)topView;
-(UIView *)bottomView;
-(id)vibrancyGroupName;
-(void)setBottomView:(UIView *)arg1 ;
-(void)setTopView:(UIView *)arg1 ;
@end

