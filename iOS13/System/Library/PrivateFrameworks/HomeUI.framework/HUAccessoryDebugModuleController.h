/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableModuleController.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>

@class NSMapTable, HUAccessoryDebugModule, NSString;

@interface HUAccessoryDebugModuleController : HUItemTableModuleController <HUSwitchCellDelegate> {

	NSMapTable* _cellToItemMap;

}

@property (retain) NSMapTable * cellToItemMap;                               //@synthesize cellToItemMap=_cellToItemMap - In the implementation block
@property (nonatomic,readonly) HUAccessoryDebugModule * module; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithModule:(id)arg1 ;
-(BOOL)canSelectItem:(id)arg1 ;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(NSMapTable *)cellToItemMap;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(void)setCellToItemMap:(NSMapTable *)arg1 ;
@end

