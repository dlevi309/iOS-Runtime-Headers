/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <UIKitCore/UITableViewController.h>

@protocol WFSSHKeyGenerationViewControllerDelegate;
@class WFTableDataSource, WFTableSection, WFSegmentedControlTableItem, NSNumber, WFTextFieldTableItem;

@interface WFSSHKeyGenerationViewController : UITableViewController {

	id<WFSSHKeyGenerationViewControllerDelegate> _delegate;
	WFTableDataSource* _dataSource;
	WFTableSection* _keyTypeSection;
	WFTableSection* _keySizeSection;
	WFTableSection* _commentSection;
	WFSegmentedControlTableItem* _keyTypeItem;
	WFSegmentedControlTableItem* _keySizeItem;
	Class _currentFormat;
	NSNumber* _currentKeySize;
	WFTextFieldTableItem* _commentItem;

}

@property (nonatomic,readonly) WFTableDataSource * dataSource;                                          //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) WFTableSection * keyTypeSection;                                         //@synthesize keyTypeSection=_keyTypeSection - In the implementation block
@property (nonatomic,readonly) WFTableSection * keySizeSection;                                         //@synthesize keySizeSection=_keySizeSection - In the implementation block
@property (nonatomic,readonly) WFTableSection * commentSection;                                         //@synthesize commentSection=_commentSection - In the implementation block
@property (nonatomic,readonly) WFSegmentedControlTableItem * keyTypeItem;                               //@synthesize keyTypeItem=_keyTypeItem - In the implementation block
@property (nonatomic,readonly) WFSegmentedControlTableItem * keySizeItem;                               //@synthesize keySizeItem=_keySizeItem - In the implementation block
@property (assign,nonatomic) Class currentFormat;                                                       //@synthesize currentFormat=_currentFormat - In the implementation block
@property (nonatomic,retain) NSNumber * currentKeySize;                                                 //@synthesize currentKeySize=_currentKeySize - In the implementation block
@property (nonatomic,readonly) WFTextFieldTableItem * commentItem;                                      //@synthesize commentItem=_commentItem - In the implementation block
@property (assign,nonatomic,__weak) id<WFSSHKeyGenerationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<WFSSHKeyGenerationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFSSHKeyGenerationViewControllerDelegate>)arg1 ;
-(WFTableDataSource *)dataSource;
-(void)viewDidLoad;
-(void)donePressed:(id)arg1 ;
-(void)cancelPressed:(id)arg1 ;
-(void)updateVisibleItems;
-(WFTextFieldTableItem *)commentItem;
-(void)authenticationTypeDidChange:(id)arg1 ;
-(void)keySizeDidChange:(id)arg1 ;
-(void)generateKeyPairAndFinish;
-(WFTableSection *)keyTypeSection;
-(WFTableSection *)keySizeSection;
-(WFTableSection *)commentSection;
-(WFSegmentedControlTableItem *)keyTypeItem;
-(WFSegmentedControlTableItem *)keySizeItem;
-(Class)currentFormat;
-(void)setCurrentFormat:(Class)arg1 ;
-(NSNumber *)currentKeySize;
-(void)setCurrentKeySize:(NSNumber *)arg1 ;
@end

