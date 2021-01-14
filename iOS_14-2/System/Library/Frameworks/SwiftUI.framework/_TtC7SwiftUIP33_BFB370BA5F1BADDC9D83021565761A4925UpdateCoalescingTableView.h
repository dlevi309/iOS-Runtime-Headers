/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
*/

#import <SwiftUI/SwiftUI-Structs.h>
#import <UIKitCore/UITableView.h>

@interface _TtC7SwiftUIP33_BFB370BA5F1BADDC9D83021565761A4925UpdateCoalescingTableView : UITableView {

	 programmaticSelectionDelegate;
	 visibleCellsUpdate;
	 ignoreGraphUpdates;
	 pendingGraphUpdate;
	 previousHorizontalMargin;
	 _lastUpdateSeed;
	 bridgedState;
	 shouldDetermineInsetStyle;

}

@property (assign,nonatomic) CGRect bounds; 
+(BOOL)_isInternalTableView;
-(CGRect)bounds;
-(void)selectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(long long)arg3 ;
-(void)layoutMarginsDidChange;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)deselectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
@end

