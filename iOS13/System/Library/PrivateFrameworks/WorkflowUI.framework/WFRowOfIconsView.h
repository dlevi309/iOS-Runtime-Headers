/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIStackView, NSMutableArray;

@interface WFRowOfIconsView : UIView {

	unsigned long long _maxNumberOfIcons;
	UIStackView* _stackView;
	NSMutableArray* _iconViews;
	double _height;

}

@property (nonatomic,readonly) unsigned long long maxNumberOfIcons;              //@synthesize maxNumberOfIcons=_maxNumberOfIcons - In the implementation block
@property (nonatomic,readonly) UIStackView * stackView;                          //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) NSMutableArray * iconViews;                       //@synthesize iconViews=_iconViews - In the implementation block
@property (nonatomic,readonly) double height;                                    //@synthesize height=_height - In the implementation block
-(double)height;
-(CGSize)intrinsicContentSize;
-(UIStackView *)stackView;
-(void)setIcons:(id)arg1 ;
-(unsigned long long)maxNumberOfIcons;
-(NSMutableArray *)iconViews;
-(id)initWithMaxNumberOfIcons:(unsigned long long)arg1 height:(double)arg2 ;
-(void)setHomeIcons:(id)arg1 ;
-(void)rebuildSubviewsForItems:(id)arg1 ;
@end

