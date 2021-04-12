/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet, ICSDateValue;

@interface CalDAVCalendarServerResourceChangedItem : CoreDAVItem {

	NSMutableSet* _created;
	NSMutableSet* _updated;
	NSMutableSet* _deleted;
	NSMutableSet* _collectionChanges;
	NSMutableSet* _collectionUpdates;
	ICSDateValue* _dtstamp;

}

@property (nonatomic,retain) NSMutableSet * created;                        //@synthesize created=_created - In the implementation block
@property (nonatomic,retain) NSMutableSet * updated;                        //@synthesize updated=_updated - In the implementation block
@property (nonatomic,retain) NSMutableSet * deleted;                        //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,retain) NSMutableSet * collectionChanges;              //@synthesize collectionChanges=_collectionChanges - In the implementation block
@property (nonatomic,retain) NSMutableSet * collectionUpdates;              //@synthesize collectionUpdates=_collectionUpdates - In the implementation block
@property (nonatomic,retain) ICSDateValue * dtstamp;                        //@synthesize dtstamp=_dtstamp - In the implementation block
-(id)init;
-(NSMutableSet *)deleted;
-(NSMutableSet *)created;
-(void)setCreated:(NSMutableSet *)arg1 ;
-(void)setDeleted:(NSMutableSet *)arg1 ;
-(NSMutableSet *)updated;
-(void)setUpdated:(NSMutableSet *)arg1 ;
-(ICSDateValue *)dtstamp;
-(void)setDtstamp:(ICSDateValue *)arg1 ;
-(NSMutableSet *)collectionChanges;
-(NSMutableSet *)collectionUpdates;
-(id)copyParseRules;
-(void)setCollectionChanges:(NSMutableSet *)arg1 ;
-(void)setCollectionUpdates:(NSMutableSet *)arg1 ;
-(void)addCreated:(id)arg1 ;
-(void)addUpdated:(id)arg1 ;
-(void)addDeleted:(id)arg1 ;
-(void)addCollectionChanges:(id)arg1 ;
-(void)addCollectionUpdates:(id)arg1 ;
-(void)setDtstampItem:(id)arg1 ;
@end

