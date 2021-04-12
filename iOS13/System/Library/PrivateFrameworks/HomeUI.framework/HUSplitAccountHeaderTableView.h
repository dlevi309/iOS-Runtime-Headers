/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UITableView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol HUSplitAccountDelegate;
@class ACAccount, HMHome, NSString;

@interface HUSplitAccountHeaderTableView : UITableView <UITableViewDelegate, UITableViewDataSource> {

	ACAccount* _mediaAccount;
	HMHome* _home;
	id<HUSplitAccountDelegate> _splitAccountDelegate;

}

@property (nonatomic,retain) ACAccount * mediaAccount;                                            //@synthesize mediaAccount=_mediaAccount - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                       //@synthesize home=_home - In the implementation block
@property (assign,nonatomic,__weak) id<HUSplitAccountDelegate> splitAccountDelegate;              //@synthesize splitAccountDelegate=_splitAccountDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HMHome *)home;
-(id)_titleFont;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setHome:(HMHome *)arg1 ;
-(double)_titleHeight;
-(id)_descriptionFont;
-(id<HUSplitAccountDelegate>)splitAccountDelegate;
-(id)initWithFrame:(CGRect)arg1 mediaAccount:(id)arg2 home:(id)arg3 delegate:(id)arg4 ;
-(double)tableViewHeightForWidth:(double)arg1 ;
-(void)setSplitAccountDelegate:(id<HUSplitAccountDelegate>)arg1 ;
-(id)_buttonTitleTextFont;
-(ACAccount *)mediaAccount;
-(double)_descriptionHeight;
-(double)_buttonTitleTextHeight;
-(double)_maxTitleAndDescriptionCellHeightForWidth:(double)arg1 ;
-(void)setMediaAccount:(ACAccount *)arg1 ;
@end

