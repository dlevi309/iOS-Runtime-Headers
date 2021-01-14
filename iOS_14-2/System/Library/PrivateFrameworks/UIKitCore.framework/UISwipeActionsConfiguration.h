/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSArray;

@interface UISwipeActionsConfiguration : NSObject {

	BOOL _performsFirstActionWithFullSwipe;
	BOOL _autosizesButtons;
	NSArray* _actions;
	long long __swipeActionsStyle;

}

@property (assign,setter=_setAutosizesButtons:,getter=_autosizesButtons,nonatomic) BOOL autosizesButtons;                       //@synthesize autosizesButtons=_autosizesButtons - In the implementation block
@property (assign,setter=_setSwipeActionsStyle:,getter=_swipeActionsStyle,nonatomic) long long _swipeActionsStyle;              //@synthesize _swipeActionsStyle=__swipeActionsStyle - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actions;                                                                          //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic) BOOL performsFirstActionWithFullSwipe;                                                             //@synthesize performsFirstActionWithFullSwipe=_performsFirstActionWithFullSwipe - In the implementation block
+(id)configurationWithActions:(id)arg1 ;
-(id)init;
-(NSArray *)actions;
-(id)description;
-(void)setPerformsFirstActionWithFullSwipe:(BOOL)arg1 ;
-(long long)_swipeActionsStyle;
-(void)_setSwipeActionsStyle:(long long)arg1 ;
-(void)_setAutosizesButtons:(BOOL)arg1 ;
-(BOOL)_autosizesButtons;
-(BOOL)performsFirstActionWithFullSwipe;
@end

