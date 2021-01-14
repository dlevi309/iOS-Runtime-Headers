/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableModuleController.h>

@protocol HUItemTableModuleControllerHosting, HUMediaServiceDefaultAccountsItemModuleControllerDelegate;
@class HUMediaServiceDefaultAccountsItemModule;

@interface HUMediaServiceDefaultAccountsItemModuleController : HUItemTableModuleController {

	BOOL _shouldClearSpinnerOnNextUpdate;
	id<HUItemTableModuleControllerHosting> _host;
	id<HUMediaServiceDefaultAccountsItemModuleControllerDelegate> _delegate;
	long long _selectedMediaServiceIndex;

}

@property (assign,nonatomic) long long selectedMediaServiceIndex;                                                          //@synthesize selectedMediaServiceIndex=_selectedMediaServiceIndex - In the implementation block
@property (assign,nonatomic) BOOL shouldClearSpinnerOnNextUpdate;                                                          //@synthesize shouldClearSpinnerOnNextUpdate=_shouldClearSpinnerOnNextUpdate - In the implementation block
@property (nonatomic,readonly) HUMediaServiceDefaultAccountsItemModule * module; 
@property (nonatomic,__weak,readonly) id<HUMediaServiceDefaultAccountsItemModuleControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setHost:(id)arg1 ;
-(id)host;
-(id<HUMediaServiceDefaultAccountsItemModuleControllerDelegate>)delegate;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(id)updateDefaultAccount:(id)arg1 ;
-(void)_clearSpinner;
-(void)setShouldClearSpinnerOnNextUpdate:(BOOL)arg1 ;
-(BOOL)shouldClearSpinnerOnNextUpdate;
-(id)_indexPathForItem:(id)arg1 ;
-(long long)selectedMediaServiceIndex;
-(void)setSelectedMediaServiceIndex:(long long)arg1 ;
-(id)initWithModule:(id)arg1 delegate:(id)arg2 host:(id)arg3 ;
@end

