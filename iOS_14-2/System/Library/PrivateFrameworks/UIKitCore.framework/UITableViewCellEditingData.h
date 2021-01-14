/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UITableViewCell, UITableViewCellEditControl, UITableViewCellReorderControl, UIView;

@interface UITableViewCellEditingData : NSObject {

	UITableViewCell* _cell;
	long long _editingStyle;
	UITableViewCellEditControl* _editControl;
	UITableViewCellReorderControl* _reorderControl;
	UIView* _reorderSeparatorView;

}

@property (getter=isDataRequired,nonatomic,readonly) BOOL dataRequired; 
@property (nonatomic,readonly) BOOL wantsMaskingWhileAnimatingDisabled; 
-(id)initWithTableViewCell:(id)arg1 editingStyle:(long long)arg2 ;
-(id)reorderControl:(BOOL)arg1 ;
-(id)editControl:(BOOL)arg1 ;
-(BOOL)wantsMaskingWhileAnimatingDisabled;
-(id)reorderSeparatorView:(BOOL)arg1 ;
-(BOOL)isDataRequired;
-(void)dealloc;
@end

