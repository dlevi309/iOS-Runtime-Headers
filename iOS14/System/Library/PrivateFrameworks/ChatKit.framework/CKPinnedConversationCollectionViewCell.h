/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@protocol CKPinnedConversationCollectionViewCellDelegate;
@class NSObject, CKPinnedConversationView, CKConversationListAccessoryView;

@interface CKPinnedConversationCollectionViewCell : UICollectionViewCell {

	BOOL _showsBackgroundViewWhenSelected;
	BOOL _isShowingUnpinAccessory;
	BOOL _isShowingCheckboxAccessory;
	BOOL _isPreparingForReuse;
	NSObject*<CKPinnedConversationCollectionViewCellDelegate> _delegate;
	CKPinnedConversationView* _pinnedConversationView;
	CKConversationListAccessoryView* _unpinAccessoryView;
	unsigned long long _editingMode;
	CKConversationListAccessoryView* _checkboxAccessoryView;
	unsigned long long _currentState;

}

@property (nonatomic,retain) CKPinnedConversationView * pinnedConversationView;                                      //@synthesize pinnedConversationView=_pinnedConversationView - In the implementation block
@property (assign,setter=setShowingUnpinAccessory:,nonatomic) BOOL isShowingUnpinAccessory;                          //@synthesize isShowingUnpinAccessory=_isShowingUnpinAccessory - In the implementation block
@property (nonatomic,retain) CKConversationListAccessoryView * unpinAccessoryView;                                   //@synthesize unpinAccessoryView=_unpinAccessoryView - In the implementation block
@property (assign,setter=setShowingCheckboxAccessory:,nonatomic) BOOL isShowingCheckboxAccessory;                    //@synthesize isShowingCheckboxAccessory=_isShowingCheckboxAccessory - In the implementation block
@property (nonatomic,retain) CKConversationListAccessoryView * checkboxAccessoryView;                                //@synthesize checkboxAccessoryView=_checkboxAccessoryView - In the implementation block
@property (assign,nonatomic) unsigned long long currentState;                                                        //@synthesize currentState=_currentState - In the implementation block
@property (assign,setter=setJittering:,nonatomic) BOOL isJittering; 
@property (assign,nonatomic) BOOL isPreparingForReuse;                                                               //@synthesize isPreparingForReuse=_isPreparingForReuse - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CKPinnedConversationCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsBackgroundViewWhenSelected;                                                   //@synthesize showsBackgroundViewWhenSelected=_showsBackgroundViewWhenSelected - In the implementation block
@property (nonatomic,readonly) unsigned long long editingMode;                                                       //@synthesize editingMode=_editingMode - In the implementation block
+(id)unpinAccessoryView;
+(id)_jitterXTranslationAnimation;
+(id)checkmarkAccessoryView;
+(id)_jitterRotationAnimation;
+(id)_jitterYTranslationAnimation;
+(id)reuseIdentifier;
-(void)setCurrentState:(unsigned long long)arg1 ;
-(void)setJittering:(BOOL)arg1 ;
-(CKPinnedConversationView *)pinnedConversationView;
-(id)initWithFrame:(CGRect)arg1 ;
-(unsigned long long)currentState;
-(NSObject*<CKPinnedConversationCollectionViewCellDelegate>)delegate;
-(CKConversationListAccessoryView *)unpinAccessoryView;
-(void)didMoveToSuperview;
-(void)prepareForReuse;
-(void)setDelegate:(NSObject*<CKPinnedConversationCollectionViewCellDelegate>)arg1 ;
-(void)_updateZPositionForState:(unsigned long long)arg1 ;
-(BOOL)showsBackgroundViewWhenSelected;
-(void)_updateActivitySupressionForState:(unsigned long long)arg1 ;
-(CKConversationListAccessoryView *)checkboxAccessoryView;
-(CGRect)checkboxFrame;
-(void)updateCheckboxAccessoryImageForCurrentLayoutStyle;
-(CGRect)unpinAccessoryViewFrame;
-(void)unpinButtonTapped:(id)arg1 ;
-(void)updateUnpinAccessoryImageForCurrentLayoutStyle;
-(BOOL)isShowingCheckboxAccessory;
-(void)setShowingCheckboxAccessory:(BOOL)arg1 ;
-(void)_createCheckboxAccessoryIfNecessary;
-(void)setCheckboxAccessoryView:(CKConversationListAccessoryView *)arg1 ;
-(BOOL)isShowingUnpinAccessory;
-(void)setShowingUnpinAccessory:(BOOL)arg1 ;
-(void)_createUnpinAccessoryIfNecessary;
-(void)setUnpinAccessoryView:(CKConversationListAccessoryView *)arg1 ;
-(BOOL)isPreparingForReuse;
-(double)accessorySizeForLayoutStyle:(long long)arg1 ;
-(void)setPinnedConversationView:(CKPinnedConversationView *)arg1 ;
-(void)setIsPreparingForReuse:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)isJittering;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)editingMode;
-(id)configurationState;
-(void)dragStateDidChange:(long long)arg1 ;
-(void)_updateGhostedAppearance;
-(void)_updateViewConfigurationsWithState:(unsigned long long)arg1 ;
-(void)setEditingMode:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setShowsBackgroundViewWhenSelected:(BOOL)arg1 ;
-(unsigned long long)_viewConfigurationState;
@end

