/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PUFeedCellDelegate;
@class NSIndexPath, NSString, UITapGestureRecognizer;

@interface PUFeedCell : UICollectionViewCell <UIGestureRecognizerDelegate> {

	BOOL _tappable;
	id<PUFeedCellDelegate> _delegate;
	NSIndexPath* _indexPath;
	NSString* _representedElementKind;
	UITapGestureRecognizer* __tapGestureRecognizer;
	CGPoint _parallaxOffset;
	CGPoint _edgeParallaxOffset;

}

@property (nonatomic,retain) NSIndexPath * indexPath;                                                                      //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain) NSString * representedElementKind;                                                            //@synthesize representedElementKind=_representedElementKind - In the implementation block
@property (setter=_setTapGestureRecognizer:,nonatomic,retain) UITapGestureRecognizer * _tapGestureRecognizer;              //@synthesize _tapGestureRecognizer=__tapGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<PUFeedCellDelegate> delegate;                                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isTappable,nonatomic) BOOL tappable;                                                              //@synthesize tappable=_tappable - In the implementation block
@property (assign,nonatomic) CGPoint parallaxOffset;                                                                       //@synthesize parallaxOffset=_parallaxOffset - In the implementation block
@property (assign,nonatomic) CGPoint edgeParallaxOffset;                                                                   //@synthesize edgeParallaxOffset=_edgeParallaxOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGRect)rectWithAspectRatio:(double)arg1 fillingRect:(CGRect)arg2 parallaxOffset:(CGPoint)arg3 edgeParallaxOffset:(CGPoint)arg4 ;
-(void)_setTapGestureRecognizer:(id)arg1 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(id<PUFeedCellDelegate>)delegate;
-(NSIndexPath *)indexPath;
-(void)setDelegate:(id<PUFeedCellDelegate>)arg1 ;
-(void)setTappable:(BOOL)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(BOOL)shouldRecognizerTap:(id)arg1 ;
-(void)setRepresentedElementKind:(NSString *)arg1 ;
-(NSString *)representedElementKind;
-(BOOL)isTappable;
-(void)setParallaxOffset:(CGPoint)arg1 ;
-(CGPoint)edgeParallaxOffset;
-(void)setEdgeParallaxOffset:(CGPoint)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_updateTapGestureRecognizer;
-(CGPoint)parallaxOffset;
-(void)dealloc;
-(UITapGestureRecognizer *)_tapGestureRecognizer;
@end

