/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemModule.h>

@class HFItem;

@interface HUExpandableItemModule : HFItemModule {

	BOOL _showOptions;

}

@property (assign,nonatomic) BOOL showOptions;                        //@synthesize showOptions=_showOptions - In the implementation block
@property (nonatomic,readonly) HFItem * showOptionsItem; 
-(HFItem *)showOptionsItem;
-(BOOL)showOptions;
-(void)setShowOptions:(BOOL)arg1 ;
@end

