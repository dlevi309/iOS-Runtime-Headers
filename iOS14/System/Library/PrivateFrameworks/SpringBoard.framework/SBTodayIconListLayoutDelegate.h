/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBIconListLayoutDelegate.h>

@class SBIconListView, UIView, UIScrollView, NSMutableDictionary, NSString;

@interface SBTodayIconListLayoutDelegate : NSObject <SBIconListLayoutDelegate> {

	BOOL _carouselLayout;
	BOOL _revealed;
	BOOL _visuallyRevealed;
	SBIconListView* _iconListView;
	UIView* _containerView;
	UIScrollView* _scrollView;
	double _revealProgress;
	double _dismissProgress;
	NSMutableDictionary* _catchupProperties;
	NSMutableDictionary* _catchupTimers;
	UIEdgeInsets _carouselInsets;
	UIEdgeInsets _additionalLayoutInsets;

}

@property (nonatomic,retain) NSMutableDictionary * catchupProperties;                      //@synthesize catchupProperties=_catchupProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * catchupTimers;                          //@synthesize catchupTimers=_catchupTimers - In the implementation block
@property (nonatomic,__weak,readonly) SBIconListView * iconListView;                       //@synthesize iconListView=_iconListView - In the implementation block
@property (assign,nonatomic,__weak) UIView * containerView;                                //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * scrollView;                             //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) BOOL carouselLayout;                                          //@synthesize carouselLayout=_carouselLayout - In the implementation block
@property (assign,nonatomic) UIEdgeInsets carouselInsets;                                  //@synthesize carouselInsets=_carouselInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets additionalLayoutInsets;                          //@synthesize additionalLayoutInsets=_additionalLayoutInsets - In the implementation block
@property (assign,getter=isRevealed,nonatomic) BOOL revealed;                              //@synthesize revealed=_revealed - In the implementation block
@property (assign,nonatomic) double revealProgress;                                        //@synthesize revealProgress=_revealProgress - In the implementation block
@property (assign,nonatomic) double dismissProgress;                                       //@synthesize dismissProgress=_dismissProgress - In the implementation block
@property (assign,getter=isVisuallyRevealed,nonatomic) BOOL visuallyRevealed;              //@synthesize visuallyRevealed=_visuallyRevealed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isRevealed;
-(double)revealProgress;
-(void)setRevealProgress:(double)arg1 ;
-(void)setRevealed:(BOOL)arg1 ;
-(void)setAdditionalLayoutInsets:(UIEdgeInsets)arg1 ;
-(void)setContainerView:(UIView *)arg1 ;
-(UIEdgeInsets)additionalLayoutInsets;
-(SBIconListView *)iconListView;
-(void)setVisuallyRevealed:(BOOL)arg1 ;
-(void)setCatchupProperties:(NSMutableDictionary *)arg1 ;
-(void)setDismissProgress:(double)arg1 ;
-(double)dismissProgress;
-(void)setCatchupTimers:(NSMutableDictionary *)arg1 ;
-(UIView *)containerView;
-(NSMutableDictionary *)catchupProperties;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(id)initWithIconListView:(id)arg1 ;
-(NSMutableDictionary *)catchupTimers;
-(unsigned long long)iconListView:(id)arg1 rowAtPoint:(CGPoint)arg2 metrics:(id)arg3 proposedRow:(unsigned long long)arg4 ;
-(CGSize)iconListView:(id)arg1 sizeThatFits:(CGSize)arg2 metrics:(id)arg3 proposedSize:(CGSize)arg4 ;
-(void)iconListView:(id)arg1 willLayoutIconView:(id)arg2 ;
-(void)iconListViewDidLayoutIcons:(id)arg1 ;
-(CGPoint)iconListView:(id)arg1 originForIconCoordinate:(SBIconCoordinate)arg2 metrics:(id)arg3 proposedOrigin:(CGPoint)arg4 ;
-(UIScrollView *)scrollView;
-(BOOL)isVisuallyRevealed;
-(void)setVisuallyRevealed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setCarouselLayout:(BOOL)arg1 ;
-(void)setCarouselInsets:(UIEdgeInsets)arg1 ;
-(double)unadjustedOriginYForIconCoordinate:(SBIconCoordinate)arg1 ;
-(CGRect)unadjustedBoundsForIconCoordinate:(SBIconCoordinate)arg1 ;
-(BOOL)carouselLayout;
-(SBTodayIconListLayoutAttributes)layoutAttributesForIconCoordinate:(SBIconCoordinate)arg1 metrics:(id)arg2 adjustedForRevealProgress:(BOOL)arg3 ;
-(double)_iconListView:(id)arg1 originYForIconCoordinate:(SBIconCoordinate)arg2 metrics:(id)arg3 adjustedForRevealProgress:(BOOL)arg4 ;
-(UIEdgeInsets)carouselInsets;
@end

