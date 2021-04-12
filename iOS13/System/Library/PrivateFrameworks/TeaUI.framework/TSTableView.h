/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <UIKitCore/UITableView.h>

@interface TSTableView : UITableView {

	BOOL _tsaxPrefersCustomReorderMessage;

}

@property (assign,nonatomic) BOOL tsaxPrefersCustomReorderMessage;              //@synthesize tsaxPrefersCustomReorderMessage=_tsaxPrefersCustomReorderMessage - In the implementation block
+(long long)ts_preferredStyleForStyle:(long long)arg1 ;
-(id)contextualActionForDeletingRowAtIndexPath:(id)arg1 ;
-(BOOL)tsaxPrefersCustomReorderMessage;
-(id)_accessibilityReorderMessageForNewIndexPath:(id)arg1 swappedWithRow:(long long)arg2 movingDown:(BOOL)arg3 ;
-(void)setTsaxPrefersCustomReorderMessage:(BOOL)arg1 ;
@end

