/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CNActionViewDelegate.h>

@protocol CNActionsViewProtocol;
@class NSObject, NSArray, NUIContainerStackView, NSMutableDictionary, UIFont, NSString;

@interface CNActionsView : UIView <CNActionViewDelegate> {

	NSObject*<CNActionsViewProtocol> _actionsDelegate;
	NSArray* _sortedActionTypes;
	double _spacing;
	long long _style;
	NUIContainerStackView* _stackView;
	NSMutableDictionary* _actionItemsByType;
	NSMutableDictionary* _actionViewsByType;
	UIFont* _titleFont;

}

@property (nonatomic,retain) NUIContainerStackView * stackView;                                    //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * actionItemsByType;                              //@synthesize actionItemsByType=_actionItemsByType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * actionViewsByType;                              //@synthesize actionViewsByType=_actionViewsByType - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                                                   //@synthesize titleFont=_titleFont - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CNActionsViewProtocol> actionsDelegate;              //@synthesize actionsDelegate=_actionsDelegate - In the implementation block
@property (nonatomic,copy) NSArray * sortedActionTypes;                                            //@synthesize sortedActionTypes=_sortedActionTypes - In the implementation block
@property (assign,nonatomic) double spacing;                                                       //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) long long style;                                                      //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)intrinsicContentSizeForHorizontalLayoutForActionsViews:(id)arg1 spacing:(double)arg2 ;
+(CGSize)intrinsicContentSizeForVerticalLayoutForActionsViews:(id)arg1 spacing:(double)arg2 ;
+(long long)axisWithTitlesPresent:(BOOL)arg1 ;
-(double)spacing;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setSpacing:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NUIContainerStackView *)stackView;
-(void)didMoveToWindow;
-(void)setStackView:(NUIContainerStackView *)arg1 ;
-(UIFont *)titleFont;
-(void)setTitleFont:(UIFont *)arg1 ;
-(void)didPressActionView:(id)arg1 longPress:(BOOL)arg2 ;
-(void)setSortedActionTypes:(NSArray *)arg1 ;
-(unsigned long long)insertionIndexForType:(id)arg1 ;
-(id)actionViewForType:(id)arg1 ;
-(void)addActionItem:(id)arg1 ;
-(void)removeActionItem:(id)arg1 ;
-(void)updateActionItem:(id)arg1 ;
-(void)updateAxis;
-(void)resetActions;
-(NSObject*<CNActionsViewProtocol>)actionsDelegate;
-(void)setActionsDelegate:(NSObject*<CNActionsViewProtocol>)arg1 ;
-(NSArray *)sortedActionTypes;
-(NSMutableDictionary *)actionItemsByType;
-(void)setActionItemsByType:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)actionViewsByType;
-(void)setActionViewsByType:(NSMutableDictionary *)arg1 ;
@end

