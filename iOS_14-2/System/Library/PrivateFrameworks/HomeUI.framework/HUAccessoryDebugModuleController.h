/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)canSelectItem:(id)arg1 ;
-(NSMapTable *)cellToItemMap;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(id)initWithModule:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(void)setCellToItemMap:(NSMapTable *)arg1 ;
@end

