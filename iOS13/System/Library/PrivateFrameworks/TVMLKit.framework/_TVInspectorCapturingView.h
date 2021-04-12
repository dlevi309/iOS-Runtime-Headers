/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _TVInspectorCapturingViewDelegate;
@class UILabel;

@interface _TVInspectorCapturingView : UIView {

	BOOL _testingHits;
	UILabel* _descriptionLabel;
	id<_TVInspectorCapturingViewDelegate> _delegate;

}

@property (getter=isTestingHits,nonatomic,readonly) BOOL testingHits;                            //@synthesize testingHits=_testingHits - In the implementation block
@property (nonatomic,__weak,readonly) UILabel * descriptionLabel;                                //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (assign,nonatomic,__weak) id<_TVInspectorCapturingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_TVInspectorCapturingViewDelegate>)delegate;
-(void)setDelegate:(id<_TVInspectorCapturingViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UILabel *)descriptionLabel;
-(void)didTapView:(id)arg1 ;
-(BOOL)isTestingHits;
@end

