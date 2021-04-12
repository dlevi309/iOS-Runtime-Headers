/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CNActionViewDelegate.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@protocol CNActionsViewProtocol;
@class NSObject, NSArray, NSMutableDictionary, UIFont, NUIContainerStackView, NSString;

@interface CNActionsView : UIView <CNActionViewDelegate, NUIContainerViewDelegate> {

	NSObject*<CNActionsViewProtocol> _actionsDelegate;
	NSArray* _sortedActionTypes;
	double _spacing;
	long long _style;
	NSMutableDictionary* _actionItemsByType;
	NSMutableDictionary* _actionViewsByType;
	UIFont* _titleFont;
	NUIContainerStackView* _containerView;

}

@property (nonatomic,retain) NSMutableDictionary * actionItemsByType;                              //@synthesize actionItemsByType=_actionItemsByType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * actionViewsByType;                              //@synthesize actionViewsByType=_actionViewsByType - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                                                   //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,retain) NUIContainerStackView * containerView;                                //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CNActionsViewProtocol> actionsDelegate;              //@synthesize actionsDelegate=_actionsDelegate - In the implementation block
@property (nonatomic,copy) NSArray * sortedActionTypes;                                            //@synthesize sortedActionTypes=_sortedActionTypes - In the implementation block
@property (assign,nonatomic) double spacing;                                                       //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) long long style;                                                      //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)axisWithTitlesPresent:(BOOL)arg1 ;
-(double)spacing;
-(NSObject*<CNActionsViewProtocol>)actionsDelegate;
-(void)setSpacing:(double)arg1 ;
-(void)setTitleFont:(UIFont *)arg1 ;
-(void)setContainerView:(NUIContainerStackView *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setActionsDelegate:(NSObject*<CNActionsViewProtocol>)arg1 ;
-(UIFont *)titleFont;
-(BOOL)actionViewShouldPresentDisambiguationUI:(id)arg1 ;
-(void)didPressActionView:(id)arg1 longPress:(BOOL)arg2 ;
-(NUIContainerStackView *)containerView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)updateAxis;
-(void)resetActions;
-(long long)style;
-(void)setSortedActionTypes:(NSArray *)arg1 ;
-(unsigned long long)insertionIndexForType:(id)arg1 ;
-(id)actionViewForType:(id)arg1 ;
-(void)addActionItem:(id)arg1 ;
-(void)removeActionItem:(id)arg1 ;
-(void)updateActionItem:(id)arg1 ;
-(NSArray *)sortedActionTypes;
-(NSMutableDictionary *)actionItemsByType;
-(void)setActionItemsByType:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)actionViewsByType;
-(void)setActionViewsByType:(NSMutableDictionary *)arg1 ;
@end

