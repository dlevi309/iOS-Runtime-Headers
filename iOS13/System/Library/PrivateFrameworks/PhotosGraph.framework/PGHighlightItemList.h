/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGHighlightItem.h>

@protocol PGHighlightItem;
@class NSDate, NSString, PHAsset, NSArray, NSMutableOrderedSet, NSMutableSet, NSDateComponents, NSSet;

@interface PGHighlightItemList : NSObject <PGHighlightItem> {

	unsigned short _type;
	unsigned short _visibilityState;
	unsigned short _enrichmentState;
	unsigned short _kind;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDate* _localStartDate;
	NSDate* _localEndDate;
	NSMutableOrderedSet* _internalHighlightItems;
	NSMutableSet* _internalAddedHighlightItems;
	NSMutableSet* _internalRemovedHighlightItems;
	id<PGHighlightItem> _parentHighlightItem;
	NSString* _dateDescription;
	NSString* _smartDescription;
	PHAsset* _keyAsset;
	NSArray* _extendedCuratedAssets;
	id _modelObject;
	double _promotionScore;

}

@property (nonatomic,retain) NSMutableOrderedSet * internalHighlightItems;                  //@synthesize internalHighlightItems=_internalHighlightItems - In the implementation block
@property (nonatomic,readonly) NSMutableSet * internalAddedHighlightItems;                  //@synthesize internalAddedHighlightItems=_internalAddedHighlightItems - In the implementation block
@property (nonatomic,readonly) NSMutableSet * internalRemovedHighlightItems;                //@synthesize internalRemovedHighlightItems=_internalRemovedHighlightItems - In the implementation block
@property (nonatomic,retain) id modelObject;                                                //@synthesize modelObject=_modelObject - In the implementation block
@property (nonatomic,readonly) NSDate * localStartDate;                                     //@synthesize localStartDate=_localStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * localEndDate;                                       //@synthesize localEndDate=_localEndDate - In the implementation block
@property (nonatomic,readonly) NSDateComponents * localDateComponents; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,copy,readonly) NSArray * sortedChildHighlightItems; 
@property (nonatomic,copy,readonly) NSArray * sortedHighlightItemModelObjects; 
@property (nonatomic,readonly) BOOL isNewList; 
@property (nonatomic,readonly) BOOL isCandidateForReuse; 
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,copy,readonly) NSSet * addedHighlightItems; 
@property (nonatomic,copy,readonly) NSSet * removedHighlightItems; 
@property (nonatomic,readonly) id<PGHighlightItem> parentHighlightItem;                     //@synthesize parentHighlightItem=_parentHighlightItem - In the implementation block
@property (nonatomic,copy) NSString * dateDescription;                                      //@synthesize dateDescription=_dateDescription - In the implementation block
@property (nonatomic,copy) NSString * smartDescription;                                     //@synthesize smartDescription=_smartDescription - In the implementation block
@property (nonatomic,retain) PHAsset * keyAsset;                                            //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,retain) NSArray * extendedCuratedAssets;                               //@synthesize extendedCuratedAssets=_extendedCuratedAssets - In the implementation block
@property (assign,nonatomic) double promotionScore;                                         //@synthesize promotionScore=_promotionScore - In the implementation block
@property (assign,nonatomic) unsigned short visibilityState;                                //@synthesize visibilityState=_visibilityState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * startDate;                                          //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                            //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfAssetsInExtended; 
@property (nonatomic,readonly) unsigned short type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned short kind;                                         //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) unsigned short enrichmentState;                              //@synthesize enrichmentState=_enrichmentState - In the implementation block
+(id)timeSortDescriptors;
+(void)updateParentHighlightItemLists:(id)arg1 withChildHighlightItems:(id)arg2 ;
-(NSString *)description;
-(unsigned short)type;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)uuid;
-(BOOL)hasChanges;
-(unsigned short)kind;
-(PHAsset *)keyAsset;
-(void)setKeyAsset:(PHAsset *)arg1 ;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(double)promotionScore;
-(void)setPromotionScore:(double)arg1 ;
-(unsigned short)visibilityState;
-(void)setVisibilityState:(unsigned short)arg1 ;
-(unsigned short)enrichmentState;
-(unsigned long long)numberOfAssetsInExtended;
-(NSArray *)extendedCuratedAssets;
-(NSArray *)sortedChildHighlightItems;
-(void)setExtendedCuratedAssets:(NSArray *)arg1 ;
-(id)initWithParentHighlightItem:(id)arg1 childHighlightItems:(id)arg2 ;
-(id)initAsNewList;
-(BOOL)isCandidateForReuse;
-(BOOL)isNewList;
-(NSSet *)addedHighlightItems;
-(NSSet *)removedHighlightItems;
-(void)addHighlightItem:(id)arg1 ;
-(void)removeHighlightItem:(id)arg1 ;
-(void)_updateHighlightItemsOrdering;
-(NSMutableOrderedSet *)internalHighlightItems;
-(NSMutableSet *)internalAddedHighlightItems;
-(NSMutableSet *)internalRemovedHighlightItems;
-(id<PGHighlightItem>)parentHighlightItem;
-(NSString *)dateDescription;
-(void)setDateDescription:(NSString *)arg1 ;
-(NSString *)smartDescription;
-(void)setSmartDescription:(NSString *)arg1 ;
-(id)modelObject;
-(void)setModelObject:(id)arg1 ;
-(NSDateComponents *)localDateComponents;
-(NSArray *)sortedHighlightItemModelObjects;
-(void)setInternalHighlightItems:(NSMutableOrderedSet *)arg1 ;
@end

