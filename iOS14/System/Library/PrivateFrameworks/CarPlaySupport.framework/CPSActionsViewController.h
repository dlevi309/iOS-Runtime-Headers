/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CPSButtonDelegate.h>
#import <libobjc.A.dylib/CPSActionButtonLayoutDelegate.h>
#import <libobjc.A.dylib/CPSEntityUpdateSupporting.h>

@protocol CPSEntityContentViewControllerDelegate, CPEntityActionsProviding, CPSActionButtonLayoutDelegate;
@class UIStackView, UIFocusGuide, NSArray, NSString;

@interface CPSActionsViewController : UIViewController <CPSButtonDelegate, CPSActionButtonLayoutDelegate, CPSEntityUpdateSupporting> {

	struct {
		unsigned buttonSize : 1;
		unsigned buttonGlyphSize : 1;
		unsigned font : 1;
		unsigned buttonBackgroundColor : 1;
		unsigned buttonRadius : 1;
		unsigned buttonsShouldFill : 1;
		unsigned configureButton : 1;
	}  _layoutflags;
	id<CPSEntityContentViewControllerDelegate> _eventDelegate;
	id<CPEntityActionsProviding> _entity;
	UIStackView* _stackView;
	UIFocusGuide* _focusGuide;
	NSArray* _layoutConstraints;
	id<CPSActionButtonLayoutDelegate> _layoutDelegate;

}

@property (nonatomic,retain) id<CPEntityActionsProviding> entity;                                          //@synthesize entity=_entity - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                                      //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) UIFocusGuide * focusGuide;                                                    //@synthesize focusGuide=_focusGuide - In the implementation block
@property (nonatomic,retain) NSArray * layoutConstraints;                                                  //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<CPSActionButtonLayoutDelegate> layoutDelegate;                      //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CPSEntityContentViewControllerDelegate> eventDelegate;              //@synthesize eventDelegate=_eventDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateViewConstraints;
-(void)setEntity:(id<CPEntityActionsProviding>)arg1 ;
-(id<CPSActionButtonLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<CPSActionButtonLayoutDelegate>)arg1 ;
-(id<CPEntityActionsProviding>)entity;
-(CGSize)buttonSize;
-(UIStackView *)stackView;
-(void)resetLayoutConstraints;
-(void)setupLayoutConstraints;
-(NSArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSArray *)arg1 ;
-(void)viewDidLoad;
-(void)setupViews;
-(void)updateViews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(UIFocusGuide *)focusGuide;
-(void)setFocusGuide:(UIFocusGuide *)arg1 ;
-(void)didSelectButton:(id)arg1 ;
-(void)updateWithEntity:(id)arg1 ;
-(CGSize)buttonGlyphSize;
-(double)buttonRadius;
-(id<CPSEntityContentViewControllerDelegate>)eventDelegate;
-(id)initWithEntity:(id)arg1 layoutDelete:(id)arg2 ;
-(void)setEventDelegate:(id<CPSEntityContentViewControllerDelegate>)arg1 ;
@end

