/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableModuleController.h>
#import <libobjc.A.dylib/HUAlarmTableViewCellDelegate.h>

@protocol HUHomePodAlarmItemModuleControllerDelegate;
@class NSMapTable, NSString;

@interface HUHomePodAlarmItemModuleController : HUItemTableModuleController <HUAlarmTableViewCellDelegate> {

	BOOL _allowsCellSelection;
	id<HUHomePodAlarmItemModuleControllerDelegate> _delegate;
	NSMapTable* _cellToItemMap;

}

@property (nonatomic,readonly) NSMapTable * cellToItemMap;                                                //@synthesize cellToItemMap=_cellToItemMap - In the implementation block
@property (assign,nonatomic,__weak) id<HUHomePodAlarmItemModuleControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL allowsCellSelection;                                                  //@synthesize allowsCellSelection=_allowsCellSelection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUHomePodAlarmItemModuleControllerDelegate>)delegate;
-(BOOL)canSelectItem:(id)arg1 ;
-(BOOL)_shouldAllowCellSelection;
-(NSMapTable *)cellToItemMap;
-(void)setAlarmEnabled:(BOOL)arg1 forCell:(id)arg2 ;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(void)setDelegate:(id<HUHomePodAlarmItemModuleControllerDelegate>)arg1 ;
-(BOOL)allowsCellSelection;
-(id)initWithModule:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
@end

