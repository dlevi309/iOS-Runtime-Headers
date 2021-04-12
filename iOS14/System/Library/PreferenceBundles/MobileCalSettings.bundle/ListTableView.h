/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobileCalSettings.bundle/MobileCalSettings
*/

#import <MobileCalSettings/MobileCalSettings-Structs.h>
#import <UIKitCore/UITableView.h>

@protocol ListTableViewDelegate;
@class UILabel, UIWindow;

@interface ListTableView : UITableView {

	UILabel* _noContentView;
	BOOL _layoutOnJoiningViewHierarchy;
	UIWindow* _lastKnownWindow;
	CGRect _keyboardFrame;
	BOOL _noContentAvoidsKeyboard;
	id<ListTableViewDelegate> _listViewDelegate;

}

@property (assign,nonatomic,__weak) id<ListTableViewDelegate> listViewDelegate;              //@synthesize listViewDelegate=_listViewDelegate - In the implementation block
@property (assign,nonatomic) BOOL showsNoContentString; 
@property (assign,nonatomic) BOOL noContentAvoidsKeyboard;                                   //@synthesize noContentAvoidsKeyboard=_noContentAvoidsKeyboard - In the implementation block
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)layoutSubviews;
-(void)willMoveToWindow:(id)arg1 ;
-(void)keyboardFrameChanged:(id)arg1 ;
-(id<ListTableViewDelegate>)listViewDelegate;
-(void)setNoContentAvoidsKeyboard:(BOOL)arg1 ;
-(void)setInitialKeyboardFrame:(CGRect)arg1 ;
-(void)setShowsNoContentString:(BOOL)arg1 ;
-(BOOL)showsNoContentString;
-(void)setListViewDelegate:(id<ListTableViewDelegate>)arg1 ;
-(BOOL)noContentAvoidsKeyboard;
@end

