/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/_UICollectionViewListCell.h>

@protocol CKConversationListEmbeddedCollectionViewCellDelegate;
@class NSObject, UITableViewCell;

@interface CKConversationListEmbeddedCollectionViewCell : _UICollectionViewListCell {

	BOOL _shouldUseSidebarBackgroundConfiguration;
	NSObject*<CKConversationListEmbeddedCollectionViewCellDelegate> _embeddedCellDelegate;
	unsigned long long _editingMode;
	UITableViewCell* _embeddedTableViewCell;

}

@property (assign,nonatomic,__weak) NSObject*<CKConversationListEmbeddedCollectionViewCellDelegate> embeddedCellDelegate;              //@synthesize embeddedCellDelegate=_embeddedCellDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long editingMode;                                                                           //@synthesize editingMode=_editingMode - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSidebarBackgroundConfiguration;                                                             //@synthesize shouldUseSidebarBackgroundConfiguration=_shouldUseSidebarBackgroundConfiguration - In the implementation block
@property (nonatomic,retain) UITableViewCell * embeddedTableViewCell;                                                                  //@synthesize embeddedTableViewCell=_embeddedTableViewCell - In the implementation block
+(Class)embeddedTableViewCellClass;
+(Class)_contentViewClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(UITableViewCell *)embeddedTableViewCell;
-(void)prepareForReuse;
-(unsigned long long)editingMode;
-(id)configurationState;
-(void)_updateViewConfigurationsWithState:(unsigned long long)arg1 ;
-(void)setEditingMode:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setEditingMode:(unsigned long long)arg1 ;
-(void)forwardStateToEmbeddedCell:(unsigned long long)arg1 ;
-(void)setShouldUseSidebarBackgroundConfiguration:(BOOL)arg1 ;
-(id)leadingEditingAccessoryConfigurationsForEditingMode:(unsigned long long)arg1 ;
-(id)trailingEditingAccessoryConfigurationsForEditingMode:(unsigned long long)arg1 ;
-(void)setEmbeddedCellDelegate:(NSObject*<CKConversationListEmbeddedCollectionViewCellDelegate>)arg1 ;
-(unsigned long long)_viewConfigurationState;
-(id)pinButtonView;
-(void)setEmbeddedTableViewCell:(UITableViewCell *)arg1 ;
-(void)pinButtonTapped:(id)arg1 ;
-(BOOL)shouldUseSidebarBackgroundConfiguration;
-(id)multiselectCellAccessoryConfiguration;
-(NSObject*<CKConversationListEmbeddedCollectionViewCellDelegate>)embeddedCellDelegate;
-(id)insertCellAccessoryConfiguration;
@end

