/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)endDate;
-(NSString *)uuid;
-(BOOL)isNewList;
-(BOOL)isCandidateForReuse;
-(NSMutableOrderedSet *)internalHighlightItems;
-(id)initAsNewList;
-(id)initWithParentHighlightItem:(id)arg1 childHighlightItems:(id)arg2 ;
-(NSDate *)startDate;
-(void)addHighlightItem:(id)arg1 ;
-(NSMutableSet *)internalRemovedHighlightItems;
-(NSMutableSet *)internalAddedHighlightItems;
-(NSSet *)removedHighlightItems;
-(void)mergeWithHighlightItemList:(id)arg1 ;
-(id<PLHighlightItem>)parentHighlightItem;
-(id)description;
-(void)removeHighlightItem:(id)arg1 ;
-(BOOL)hasChanges;
-(NSArray *)sortedChildHighlightItems;
-(void)_updateHighlightItemsOrdering;
-(void)reset;
-(unsigned long long)numberOfAssetsInExtended;
-(void)_updateStartEndDates;
-(NSSet *)addedHighlightItems;
@end

