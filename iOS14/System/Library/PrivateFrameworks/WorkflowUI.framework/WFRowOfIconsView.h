/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableArray *)iconViews;
-(CGSize)intrinsicContentSize;
-(unsigned long long)maxNumberOfIcons;
-(void)setIcons:(id)arg1 ;
-(UIStackView *)stackView;
-(double)height;
-(id)initWithMaxNumberOfIcons:(unsigned long long)arg1 height:(double)arg2 ;
-(void)setHomeIcons:(id)arg1 ;
-(void)rebuildSubviewsForItems:(id)arg1 ;
@end

