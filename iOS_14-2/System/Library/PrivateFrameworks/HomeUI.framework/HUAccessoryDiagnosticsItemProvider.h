/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItemProvider.h>

@class NSMutableSet, HUAccessoryDiagnosticsItemManager;

@interface HUAccessoryDiagnosticsItemProvider : HFItemProvider {

	NSMutableSet* _diagnosticItems;
	HUAccessoryDiagnosticsItemManager* _itemManager;

}

@property (nonatomic,retain) NSMutableSet * diagnosticItems;                                      //@synthesize diagnosticItems=_diagnosticItems - In the implementation block
@property (assign,nonatomic,__weak) HUAccessoryDiagnosticsItemManager * itemManager;              //@synthesize itemManager=_itemManager - In the implementation block
-(NSMutableSet *)diagnosticItems;
-(void)setDiagnosticItems:(NSMutableSet *)arg1 ;
-(id)items;
-(HUAccessoryDiagnosticsItemManager *)itemManager;
-(id)reloadItems;
-(void)setItemManager:(HUAccessoryDiagnosticsItemManager *)arg1 ;
-(id)invalidationReasons;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithItemManager:(id)arg1 ;
@end

