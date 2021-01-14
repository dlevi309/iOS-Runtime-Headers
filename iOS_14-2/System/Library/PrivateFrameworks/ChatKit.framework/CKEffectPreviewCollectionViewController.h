/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol CKEffectPreviewCollectionViewControllerDelegate;
@class CKFullScreenEffect, CKFullScreenEffectManager, CKMomentCollectionViewCell, NSString, NSTimer, UIView;

@interface CKEffectPreviewCollectionViewController : UIViewController {

	BOOL _hideEffects;
	id<CKEffectPreviewCollectionViewControllerDelegate> _delegate;
	CKFullScreenEffect* _currentEffect;
	CKFullScreenEffectManager* _fsem;
	CKMomentCollectionViewCell* _currentCell;
	NSString* _resizingSavedIdentifier;
	NSTimer* _animationTimer;
	UIView* _cellWrapper;

}

@property (nonatomic,retain) CKFullScreenEffectManager * fsem;                                                 //@synthesize fsem=_fsem - In the implementation block
@property (assign,nonatomic,__weak) CKFullScreenEffect * currentEffect;                                        //@synthesize currentEffect=_currentEffect - In the implementation block
@property (nonatomic,retain) CKMomentCollectionViewCell * currentCell;                                         //@synthesize currentCell=_currentCell - In the implementation block
@property (nonatomic,retain) NSString * resizingSavedIdentifier;                                               //@synthesize resizingSavedIdentifier=_resizingSavedIdentifier - In the implementation block
@property (nonatomic,retain) NSTimer * animationTimer;                                                         //@synthesize animationTimer=_animationTimer - In the implementation block
@property (assign,nonatomic) BOOL hideEffects;                                                                 //@synthesize hideEffects=_hideEffects - In the implementation block
@property (nonatomic,retain) UIView * cellWrapper;                                                             //@synthesize cellWrapper=_cellWrapper - In the implementation block
@property (assign,nonatomic,__weak) id<CKEffectPreviewCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(CKFullScreenEffectManager *)fsem;
-(id)init;
-(void)setFsem:(CKFullScreenEffectManager *)arg1 ;
-(id<CKEffectPreviewCollectionViewControllerDelegate>)delegate;
-(void)displayEffectWithIdentifier:(id)arg1 ;
-(CKFullScreenEffect *)currentEffect;
-(void)setAnimationTimer:(NSTimer *)arg1 ;
-(void)setDelegate:(id<CKEffectPreviewCollectionViewControllerDelegate>)arg1 ;
-(CKMomentCollectionViewCell *)currentCell;
-(UIView *)cellWrapper;
-(void)setCurrentCell:(CKMomentCollectionViewCell *)arg1 ;
-(void)addAnimationTimerForCell:(id)arg1 ;
-(NSString *)resizingSavedIdentifier;
-(void)resumeEffect;
-(void)setResizingSavedIdentifier:(NSString *)arg1 ;
-(void)setHideEffects:(BOOL)arg1 ;
-(void)setCellWrapper:(UIView *)arg1 ;
-(NSTimer *)animationTimer;
-(BOOL)hideEffects;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setCurrentEffect:(CKFullScreenEffect *)arg1 ;
-(void)dealloc;
@end

