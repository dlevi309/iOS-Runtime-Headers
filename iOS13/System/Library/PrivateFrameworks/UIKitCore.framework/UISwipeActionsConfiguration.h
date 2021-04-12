/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSArray;

@interface UISwipeActionsConfiguration : NSObject {

	BOOL _performsFirstActionWithFullSwipe;
	BOOL _autosizesButtons;
	NSArray* _actions;

}

@property (assign,setter=_setAutosizesButtons:,getter=_autosizesButtons,nonatomic) BOOL autosizesButtons;              //@synthesize autosizesButtons=_autosizesButtons - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actions;                                                                 //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic) BOOL performsFirstActionWithFullSwipe;                                                    //@synthesize performsFirstActionWithFullSwipe=_performsFirstActionWithFullSwipe - In the implementation block
+(id)configurationWithActions:(id)arg1 ;
-(id)init;
-(id)description;
-(NSArray *)actions;
-(void)setPerformsFirstActionWithFullSwipe:(BOOL)arg1 ;
-(void)_setAutosizesButtons:(BOOL)arg1 ;
-(BOOL)performsFirstActionWithFullSwipe;
-(BOOL)_autosizesButtons;
@end

