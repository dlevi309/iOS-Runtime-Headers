/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <NotesUI/ICPaperStyleCollectionViewController.h>

@protocol ICPaperStyleSheetCollectionViewControllerDelegate;
@interface ICPaperStyleSheetCollectionViewController : ICPaperStyleCollectionViewController {

	id<ICPaperStyleSheetCollectionViewControllerDelegate> _paperStyleDelegate;
	unsigned long long _initialPaperStyleType;

}

@property (assign,nonatomic) unsigned long long initialPaperStyleType;                                                     //@synthesize initialPaperStyleType=_initialPaperStyleType - In the implementation block
@property (assign,nonatomic,__weak) id<ICPaperStyleSheetCollectionViewControllerDelegate> paperStyleDelegate;              //@synthesize paperStyleDelegate=_paperStyleDelegate - In the implementation block
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)preferredContentSize;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(BOOL)accessibilityPerformEscape;
-(id)indexPathForInitialSelection;
-(void)cancelAction:(id)arg1 ;
-(unsigned long long)initialPaperStyleType;
-(id<ICPaperStyleSheetCollectionViewControllerDelegate>)paperStyleDelegate;
-(id)initWithInitialPaperStyleType:(unsigned long long)arg1 delegate:(id)arg2 ;
-(void)setPaperStyleDelegate:(id<ICPaperStyleSheetCollectionViewControllerDelegate>)arg1 ;
-(void)setInitialPaperStyleType:(unsigned long long)arg1 ;
@end

