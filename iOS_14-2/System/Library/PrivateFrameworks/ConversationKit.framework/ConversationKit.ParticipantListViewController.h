/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
*/

#import <ConversationKit/ConversationKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>

@interface ConversationKit.ParticipantListViewController : UIViewController <UICollectionViewDelegate> {

	 collectionViewDataSource;
	 viewContent;
	 lastLayedOutViewSize;
	 participantsViewControllerDelegate;

}
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

