/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	id<ListTableViewDelegate> _listViewDelegate;

}

@property (assign,nonatomic,__weak) id<ListTableViewDelegate> listViewDelegate;              //@synthesize listViewDelegate=_listViewDelegate - In the implementation block
@property (assign,nonatomic) BOOL showsNoContentString; 
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(id<ListTableViewDelegate>)listViewDelegate;
-(void)setShowsNoContentString:(BOOL)arg1 ;
-(BOOL)showsNoContentString;
-(void)setListViewDelegate:(id<ListTableViewDelegate>)arg1 ;
@end

