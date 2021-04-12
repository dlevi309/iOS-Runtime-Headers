/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol UICollectionViewDelegate, AVTUILogger;
@class UICollectionView, UISelectionFeedbackGenerator, NSIndexPath, UICollectionViewLayoutAttributes, NSString;

@interface AVTCenteringCollectionViewDelegate : NSObject <UICollectionViewDelegate> {

	UICollectionView* _collectionView;
	id<UICollectionViewDelegate> _delegate;
	UISelectionFeedbackGenerator* _feedbackGenerator;
	NSIndexPath* _lastHapticOnScrollIndexPath;
	id<AVTUILogger> _logger;
	CGPoint _previousOffset;

}

@property (nonatomic,readonly) UICollectionView * collectionView;                                    //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,__weak,readonly) id<UICollectionViewDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UISelectionFeedbackGenerator * feedbackGenerator;                       //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,nonatomic) CGPoint previousOffset;                                                 //@synthesize previousOffset=_previousOffset - In the implementation block
@property (nonatomic,retain) NSIndexPath * lastHapticOnScrollIndexPath;                              //@synthesize lastHapticOnScrollIndexPath=_lastHapticOnScrollIndexPath - In the implementation block
@property (nonatomic,retain) id<AVTUILogger> logger;                                                 //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) UICollectionViewLayoutAttributes * centerItemAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id<UICollectionViewDelegate>)delegate;
-(id<AVTUILogger>)logger;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(UICollectionView *)collectionView;
-(void)setFeedbackGenerator:(UISelectionFeedbackGenerator *)arg1 ;
-(UISelectionFeedbackGenerator *)feedbackGenerator;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setLogger:(id<AVTUILogger>)arg1 ;
-(NSIndexPath *)lastHapticOnScrollIndexPath;
-(void)setLastHapticOnScrollIndexPath:(NSIndexPath *)arg1 ;
-(void)setPreviousOffset:(CGPoint)arg1 ;
-(CGPoint)previousOffset;
-(id)initWithCollectionView:(id)arg1 delegate:(id)arg2 environment:(id)arg3 ;
-(UICollectionViewLayoutAttributes *)centerItemAttributes;
@end
