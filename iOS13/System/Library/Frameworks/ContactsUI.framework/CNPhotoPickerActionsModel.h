/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNPhotoPickerActionsDelegate;
@class CNPhotoPickerProviderItem, NSArray, NSIndexPath, NSString;

@interface CNPhotoPickerActionsModel : NSObject {

	BOOL _canDelete;
	BOOL _buttonsDisabled;
	id<CNPhotoPickerActionsDelegate> _delegate;
	CNPhotoPickerProviderItem* _providerItem;
	NSArray* _currentInlineActionButtons;
	NSIndexPath* _indexPath;
	NSString* _assignActionTitleOverride;

}

@property (nonatomic,retain) NSArray * currentInlineActionButtons;                          //@synthesize currentInlineActionButtons=_currentInlineActionButtons - In the implementation block
@property (nonatomic,retain) CNPhotoPickerProviderItem * providerItem;                      //@synthesize providerItem=_providerItem - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                                       //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) BOOL canDelete;                                                //@synthesize canDelete=_canDelete - In the implementation block
@property (nonatomic,retain) NSString * assignActionTitleOverride;                          //@synthesize assignActionTitleOverride=_assignActionTitleOverride - In the implementation block
@property (assign,nonatomic) BOOL buttonsDisabled;                                          //@synthesize buttonsDisabled=_buttonsDisabled - In the implementation block
@property (assign,nonatomic,__weak) id<CNPhotoPickerActionsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * inlineActionButtons; 
+(id)buttonForActionType:(long long)arg1 withActionBlock:(/*^block*/id)arg2 ;
+(id)buttonForActionType:(long long)arg1 titleOverride:(id)arg2 withActionBlock:(/*^block*/id)arg3 ;
+(id)localizedTitleForActionType:(long long)arg1 ;
+(unsigned long long)maximumNumberOfButtons;
+(BOOL)actionIsDestructive:(long long)arg1 ;
-(id<CNPhotoPickerActionsDelegate>)delegate;
-(void)setDelegate:(id<CNPhotoPickerActionsDelegate>)arg1 ;
-(NSIndexPath *)indexPath;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(id)initWithProviderItem:(id)arg1 assignActionTitleOverride:(id)arg2 canDelete:(BOOL)arg3 atIndexPath:(id)arg4 ;
-(BOOL)canPerformActionType:(long long)arg1 ;
-(NSArray *)inlineActionButtons;
-(id)generateInlineActionButtons;
-(void)setButtonsDisabled:(BOOL)arg1 ;
-(void)updateProviderItem:(id)arg1 ;
-(void)didTapAssignToContact;
-(void)didTapEdit;
-(void)didTapDuplicate;
-(void)didTapDelete;
-(CNPhotoPickerProviderItem *)providerItem;
-(void)setProviderItem:(CNPhotoPickerProviderItem *)arg1 ;
-(NSArray *)currentInlineActionButtons;
-(void)setCurrentInlineActionButtons:(NSArray *)arg1 ;
-(BOOL)canDelete;
-(void)setCanDelete:(BOOL)arg1 ;
-(NSString *)assignActionTitleOverride;
-(void)setAssignActionTitleOverride:(NSString *)arg1 ;
-(BOOL)buttonsDisabled;
@end

