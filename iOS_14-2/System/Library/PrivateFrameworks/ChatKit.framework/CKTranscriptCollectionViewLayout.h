/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSIndexSet, NSArray, NSMutableIndexSet, CADisplayLink, NSDate, NSMutableDictionary, IMScheduledUpdater;

@interface CKTranscriptCollectionViewLayout : UICollectionViewLayout {

	BOOL _holdingBoundsInvalidation;
	BOOL _useInitialLayoutAttributesForRotation;
	BOOL _useOverlayLayout;
	BOOL _inlineAnimatingOut;
	unsigned char _chatStyle;
	BOOL _isResting;
	BOOL _disableDynamicsWhileScrolling;
	BOOL _easingUp;
	BOOL _hasLoadMore;
	BOOL _useFastQuanta;
	BOOL _coalesceInvalidations;
	BOOL _sizeCategoryIsAccessibilitySizeCategory;
	double _anchorYPosition;
	NSIndexSet* _indicesOfChatItemsToBeRemovedWithoutFading;
	NSIndexSet* _indicesOfChatItemsToBeInsertedWithoutFading;
	NSIndexSet* _indicesOfReplyChatItemsToBeInserted;
	NSArray* _layoutAttributes;
	NSArray* _associatedLayoutAttributes;
	NSArray* _decorationLayoutAttributes;
	NSArray* _oldAssociatedLayoutAttributes;
	NSMutableIndexSet* _insertedAssociatedLayoutAttributes;
	CADisplayLink* _displayLink;
	double _prevTimestamp;
	NSDate* _lastTouchTime;
	NSMutableDictionary* _initialParentLayoutAttributes;
	NSMutableDictionary* _finalParentVerticalOffsets;
	IMScheduledUpdater* _dynamicsUpdater;
	CGPoint _targetContentOffset;
	CGSize _sizeForRotation;
	CGSize _contentSize;
	CGRect _visibleBounds;

}

@property (nonatomic,copy) NSArray * layoutAttributes;                                                                                 //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (nonatomic,copy) NSArray * associatedLayoutAttributes;                                                                       //@synthesize associatedLayoutAttributes=_associatedLayoutAttributes - In the implementation block
@property (nonatomic,copy) NSArray * decorationLayoutAttributes;                                                                       //@synthesize decorationLayoutAttributes=_decorationLayoutAttributes - In the implementation block
@property (nonatomic,copy) NSArray * oldAssociatedLayoutAttributes;                                                                    //@synthesize oldAssociatedLayoutAttributes=_oldAssociatedLayoutAttributes - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * insertedAssociatedLayoutAttributes;                                                   //@synthesize insertedAssociatedLayoutAttributes=_insertedAssociatedLayoutAttributes - In the implementation block
@property (nonatomic,retain) NSDate * lastTouchTime;                                                                                   //@synthesize lastTouchTime=_lastTouchTime - In the implementation block
@property (assign,nonatomic) BOOL hasLoadMore;                                                                                         //@synthesize hasLoadMore=_hasLoadMore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * initialParentLayoutAttributes;                                                      //@synthesize initialParentLayoutAttributes=_initialParentLayoutAttributes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * finalParentVerticalOffsets;                                                         //@synthesize finalParentVerticalOffsets=_finalParentVerticalOffsets - In the implementation block
@property (assign,nonatomic) BOOL coalesceInvalidations;                                                                               //@synthesize coalesceInvalidations=_coalesceInvalidations - In the implementation block
@property (assign,nonatomic) BOOL sizeCategoryIsAccessibilitySizeCategory;                                                             //@synthesize sizeCategoryIsAccessibilitySizeCategory=_sizeCategoryIsAccessibilitySizeCategory - In the implementation block
@property (nonatomic,retain) IMScheduledUpdater * dynamicsUpdater;                                                                     //@synthesize dynamicsUpdater=_dynamicsUpdater - In the implementation block
@property (assign,nonatomic) double anchorYPosition;                                                                                   //@synthesize anchorYPosition=_anchorYPosition - In the implementation block
@property (assign,nonatomic) CGPoint targetContentOffset;                                                                              //@synthesize targetContentOffset=_targetContentOffset - In the implementation block
@property (assign,getter=isHoldingBoundsInvalidation,nonatomic) BOOL holdingBoundsInvalidation;                                        //@synthesize holdingBoundsInvalidation=_holdingBoundsInvalidation - In the implementation block
@property (assign,getter=isUsingInitialLayoutAttributesForRotation,nonatomic) BOOL useInitialLayoutAttributesForRotation;              //@synthesize useInitialLayoutAttributesForRotation=_useInitialLayoutAttributesForRotation - In the implementation block
@property (assign,getter=isUsingOverlayLayout,nonatomic) BOOL useOverlayLayout;                                                        //@synthesize useOverlayLayout=_useOverlayLayout - In the implementation block
@property (assign,getter=isInlineAnimatingOut,nonatomic) BOOL inlineAnimatingOut;                                                      //@synthesize inlineAnimatingOut=_inlineAnimatingOut - In the implementation block
@property (assign,nonatomic) unsigned char chatStyle;                                                                                  //@synthesize chatStyle=_chatStyle - In the implementation block
@property (nonatomic,readonly) BOOL isResting; 
@property (assign,nonatomic) CGSize sizeForRotation;                                                                                   //@synthesize sizeForRotation=_sizeForRotation - In the implementation block
@property (nonatomic,retain) NSIndexSet * indicesOfChatItemsToBeRemovedWithoutFading;                                                  //@synthesize indicesOfChatItemsToBeRemovedWithoutFading=_indicesOfChatItemsToBeRemovedWithoutFading - In the implementation block
@property (nonatomic,retain) NSIndexSet * indicesOfChatItemsToBeInsertedWithoutFading;                                                 //@synthesize indicesOfChatItemsToBeInsertedWithoutFading=_indicesOfChatItemsToBeInsertedWithoutFading - In the implementation block
@property (nonatomic,retain) NSIndexSet * indicesOfReplyChatItemsToBeInserted;                                                         //@synthesize indicesOfReplyChatItemsToBeInserted=_indicesOfReplyChatItemsToBeInserted - In the implementation block
@property (assign,nonatomic) BOOL disableDynamicsWhileScrolling;                                                                       //@synthesize disableDynamicsWhileScrolling=_disableDynamicsWhileScrolling - In the implementation block
+(long long)translateLayoutIndexToEffectIndex:(long long)arg1 ;
+(Class)layoutAttributesClass;
-(NSDate *)lastTouchTime;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(void)setLayoutAttributes:(NSArray *)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(NSArray *)layoutAttributes;
-(unsigned char)chatStyle;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)init;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(void)sizeCategoryDidChange:(id)arg1 ;
-(BOOL)hasLoadMore;
-(NSArray *)decorationLayoutAttributes;
-(void)_kickDynamicsIfNeeded;
-(void)setDynamicsUpdater:(IMScheduledUpdater *)arg1 ;
-(void)reduceMotionSettingChanged:(id)arg1 ;
-(IMScheduledUpdater *)dynamicsUpdater;
-(UIEdgeInsets)_visibleRectInsectsForMaxYAnchorLayoutAttribute:(id)arg1 forVisibleBounds:(CGRect)arg2 ;
-(void)_configureThreadGroupsForAttributes:(id)arg1 outMaxYAnchorAttribute:(id*)arg2 forVisibleBounds:(CGRect)arg3 ;
-(void)setDecorationLayoutAttributes:(NSArray *)arg1 ;
-(void)prepareLayoutForRotisserieScrolling;
-(BOOL)isUsingInitialLayoutAttributesForRotation;
-(NSArray *)associatedLayoutAttributes;
-(NSMutableIndexSet *)insertedAssociatedLayoutAttributes;
-(NSIndexSet *)indicesOfChatItemsToBeInsertedWithoutFading;
-(BOOL)isHoldingBoundsInvalidation;
-(NSIndexSet *)indicesOfReplyChatItemsToBeInserted;
-(NSIndexSet *)indicesOfChatItemsToBeRemovedWithoutFading;
-(void)setAssociatedLayoutAttributes:(NSArray *)arg1 ;
-(void)setOldAssociatedLayoutAttributes:(NSArray *)arg1 ;
-(void)setHasLoadMore:(BOOL)arg1 ;
-(NSArray *)oldAssociatedLayoutAttributes;
-(void)updateFrames;
-(CGSize)sizeForRotation;
-(void)setInsertedAssociatedLayoutAttributes:(NSMutableIndexSet *)arg1 ;
-(BOOL)isUsingOverlayLayout;
-(double)anchorYPosition;
-(double)bezierPointForPercentage:(double)arg1 anchor1:(double)arg2 anchor2:(double)arg3 control1:(double)arg4 control2:(double)arg5 ;
-(void)updateAttributesForAnchorYChangeWithAttributes:(id)arg1 ;
-(void)updateAttributesForTargetContentOffsetChangeWithAttributes:(id)arg1 ;
-(double)handleInvalidCaseForChatItem:(id)arg1 withPrevChatItem:(id)arg2 ;
-(BOOL)nextItemIsOriginatorWithRepliesForIndex:(unsigned long long)arg1 ;
-(BOOL)nextMessageIsReplyForIndex:(unsigned long long)arg1 ;
-(CGRect)_convertScreenFrameToLocalFrame:(CGRect)arg1 ;
-(BOOL)needsAdditionalBracketPaddingForChatItem:(id)arg1 prevChatItem:(id)arg2 ;
-(void)_applyCurrentFrameOffsetsForLayoutAttributesIfNeeded:(id)arg1 ;
-(BOOL)previousReplyCount:(unsigned long long)arg1 isOccludedForAssociatedFrame:(CGRect)arg2 outMaxY:(double*)arg3 ;
-(void)_applyTargetFrameOffsetsForLayoutAttributesIfNeeded:(id)arg1 ;
-(BOOL)isInlineAnimatingOut;
-(void)_applyAttributeUpdatesWithTargetMap:(id)arg1 layoutAttributes:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(BOOL)coalesceInvalidations;
-(void)setLastTouchTime:(NSDate *)arg1 ;
-(BOOL)sizeCategoryIsAccessibilitySizeCategory;
-(void)setSizeCategoryIsAccessibilitySizeCategory:(BOOL)arg1 ;
-(void)setCoalesceInvalidations:(BOOL)arg1 ;
-(NSMutableDictionary *)initialParentLayoutAttributes;
-(void)setInitialParentLayoutAttributes:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)finalParentVerticalOffsets;
-(void)setFinalParentVerticalOffsets:(NSMutableDictionary *)arg1 ;
-(CGPoint)targetContentOffset;
-(void)setTargetContentOffset:(CGPoint)arg1 ;
-(BOOL)isResting;
-(void)reloadData;
-(void)setUseOverlayLayout:(BOOL)arg1 ;
-(void)beginHoldingDynamicsUpdatesForKey:(id)arg1 ;
-(void)setNeedsDynamicsUpdate;
-(void)setInlineAnimatingOut:(BOOL)arg1 ;
-(void)endHoldingDynamicsUpdatesForKey:(id)arg1 ;
-(void)_dealloc;
-(void)setChatStyle:(unsigned char)arg1 ;
-(void)setSizeForRotation:(CGSize)arg1 ;
-(void)setUseInitialLayoutAttributesForRotation:(BOOL)arg1 ;
-(void)setAnchorYPosition:(double)arg1 ;
-(BOOL)disableDynamicsWhileScrolling;
-(void)setDisableDynamicsWhileScrolling:(BOOL)arg1 ;
-(void)invalidateDisplayLink;
-(long long)effectIndexForDecorationViewAtIndex:(long long)arg1 ;
-(void)updateContentSize;
-(void)setHoldingBoundsInvalidation:(BOOL)arg1 ;
-(void)setIndicesOfReplyChatItemsToBeInserted:(NSIndexSet *)arg1 ;
-(void)setIndicesOfChatItemsToBeRemovedWithoutFading:(NSIndexSet *)arg1 ;
-(void)setIndicesOfChatItemsToBeInsertedWithoutFading:(NSIndexSet *)arg1 ;
-(void)setInitialIndex:(unsigned long long)arg1 forParentOfAssociatedItemInsertedAtIndex:(unsigned long long)arg2 ;
-(void)setVerticalOffset:(double)arg1 forParentOfAssociatedItemDeletedAtIndex:(unsigned long long)arg2 ;
-(void)clearParentInitialIndexesAndFinalOffsets;
-(void)updateAssociatedLayoutAttributesIfNecessary;
-(void)dealloc;
-(void)displayLinkFired:(id)arg1 ;
@end

