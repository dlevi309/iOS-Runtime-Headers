/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLHighlightItem;
@class NSDate, NSMutableOrderedSet, NSMutableSet, NSString, NSArray, NSSet;

@interface PLHighlightItemList : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSMutableOrderedSet* _internalHighlightItems;
	NSMutableSet* _internalAddedHighlightItems;
	NSMutableSet* _internalRemovedHighlightItems;
	id<PLHighlightItem> _parentHighlightItem;

}

@property (nonatomic,readonly) NSMutableOrderedSet * internalHighlightItems;              //@synthesize internalHighlightItems=_internalHighlightItems - In the implementation block
@property (nonatomic,readonly) NSMutableSet * internalAddedHighlightItems;                //@synthesize internalAddedHighlightItems=_internalAddedHighlightItems - In the implementation block
@property (nonatomic,readonly) NSMutableSet * internalRemovedHighlightItems;              //@synthesize internalRemovedHighlightItems=_internalRemovedHighlightItems - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                        //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                          //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfAssetsInExtended; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,copy,readonly) NSArray * sortedChildHighlightItems; 
@property (nonatomic,readonly) BOOL isNewList; 
@property (nonatomic,readonly) BOOL isCandidateForReuse; 
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,copy,readonly) NSSet * addedHighlightItems; 
@property (nonatomic,copy,readonly) NSSet * removedHighlightItems; 
@property (nonatomic,readonly) id<PLHighlightItem> parentHighlightItem;                   //@synthesize parentHighlightItem=_parentHighlightItem - In the implementation block
+(id)timeSortDescriptors;
-(id)description;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)uuid;
-(void)reset;
-(BOOL)hasChanges;
-(unsigned long long)numberOfAssetsInExtended;
-(NSArray *)sortedChildHighlightItems;
-(id)initWithParentHighlightItem:(id)arg1 childHighlightItems:(id)arg2 ;
-(id)initAsNewList;
-(BOOL)isCandidateForReuse;
-(BOOL)isNewList;
-(NSSet *)addedHighlightItems;
-(NSSet *)removedHighlightItems;
-(void)addHighlightItem:(id)arg1 ;
-(void)removeHighlightItem:(id)arg1 ;
-(void)_updateHighlightItemsOrdering;
-(void)_updateStartEndDates;
-(void)mergeWithHighlightItemList:(id)arg1 ;
-(NSMutableOrderedSet *)internalHighlightItems;
-(NSMutableSet *)internalAddedHighlightItems;
-(NSMutableSet *)internalRemovedHighlightItems;
-(id<PLHighlightItem>)parentHighlightItem;
@end

