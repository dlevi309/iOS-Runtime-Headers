/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UITableView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol HUMediaAccountDelegate;
@class ACAccount, HMHome, NSString;

@interface HUMultiUserTokenFixTableView : UITableView <UITableViewDelegate, UITableViewDataSource> {

	ACAccount* _mediaAccount;
	HMHome* _home;
	id<HUMediaAccountDelegate> _mediaAccountDelegate;

}

@property (nonatomic,retain) ACAccount * mediaAccount;                                            //@synthesize mediaAccount=_mediaAccount - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                       //@synthesize home=_home - In the implementation block
@property (assign,nonatomic,__weak) id<HUMediaAccountDelegate> mediaAccountDelegate;              //@synthesize mediaAccountDelegate=_mediaAccountDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)_titleFont;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)_descriptionFont;
-(double)_titleHeight;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setHome:(HMHome *)arg1 ;
-(HMHome *)home;
-(id<HUMediaAccountDelegate>)mediaAccountDelegate;
-(id)initWithFrame:(CGRect)arg1 mediaAccount:(id)arg2 home:(id)arg3 delegate:(id)arg4 ;
-(double)tableViewHeightForWidth:(double)arg1 ;
-(void)setMediaAccountDelegate:(id<HUMediaAccountDelegate>)arg1 ;
-(id)_buttonTitleTextFont;
-(ACAccount *)mediaAccount;
-(double)_descriptionHeight;
-(double)_buttonTitleTextHeight;
-(double)_maxTitleAndDescriptionCellHeightForWidth:(double)arg1 ;
-(void)setMediaAccount:(ACAccount *)arg1 ;
@end

