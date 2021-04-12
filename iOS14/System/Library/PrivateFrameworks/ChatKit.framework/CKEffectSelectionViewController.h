/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol CKEffectSelectionViewControllerDelegate;
@class UICollectionView, UICollectionViewDiffableDataSource, CKFullScreenEffectManager, NSArray, UIColor, NSString;

@interface CKEffectSelectionViewController : UIViewController <UICollectionViewDelegate> {

	BOOL _labelUsesDarkVibrancy;
	id<CKEffectSelectionViewControllerDelegate> _delegate;
	UICollectionView* _collectionView;
	UICollectionViewDiffableDataSource* _dataSource;
	CKFullScreenEffectManager* _fsem;
	NSArray* _sendEffects;
	UIColor* _labelColor;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                        //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * dataSource;                          //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) CKFullScreenEffectManager * fsem;                                         //@synthesize fsem=_fsem - In the implementation block
@property (nonatomic,retain) NSArray * sendEffects;                                                    //@synthesize sendEffects=_sendEffects - In the implementation block
@property (nonatomic,retain) UIColor * labelColor;                                                     //@synthesize labelColor=_labelColor - In the implementation block
@property (assign,nonatomic) BOOL labelUsesDarkVibrancy;                                               //@synthesize labelUsesDarkVibrancy=_labelUsesDarkVibrancy - In the implementation block
@property (assign,nonatomic,__weak) id<CKEffectSelectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * selectedEffectIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)orderedEffectIdentifiers;
-(BOOL)becomeFirstResponder;
-(CKFullScreenEffectManager *)fsem;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(double)maxCellHeight;
-(void)setFsem:(CKFullScreenEffectManager *)arg1 ;
-(id<CKEffectSelectionViewControllerDelegate>)delegate;
-(void)setSelectedEffectIdentifier:(NSString *)arg1 ;
-(NSString *)selectedEffectIdentifier;
-(UICollectionView *)collectionView;
-(UICollectionViewDiffableDataSource *)dataSource;
-(NSArray *)sendEffects;
-(void)setLabelColor:(UIColor *)arg1 ;
-(void)setSendEffects:(NSArray *)arg1 ;
-(id)effectImageForIndexPath:(id)arg1 ;
-(BOOL)labelUsesDarkVibrancy;
-(id)effectTitleForIndexPath:(id)arg1 ;
-(void)setLabelUsesDarkVibrancy:(BOOL)arg1 ;
-(UIColor *)labelColor;
-(void)setDelegate:(id<CKEffectSelectionViewControllerDelegate>)arg1 ;
-(void)setDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
@end

