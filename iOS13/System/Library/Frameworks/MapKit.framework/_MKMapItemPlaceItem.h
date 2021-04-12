/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/_MKPlaceItem.h>

@class NSString, MKMapItem, EKCalendarItem, CNContact;

@interface _MKMapItemPlaceItem : NSObject <_MKPlaceItem> {

	MKMapItem* _mapItem;
	unsigned long long _options;
	BOOL _isIntermediateMapItem;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) MKMapItem * mapItem; 
@property (nonatomic,readonly) BOOL isIntermediateMapItem; 
@property (nonatomic,readonly) EKCalendarItem * calendarItem; 
@property (nonatomic,readonly) CNContact * contact; 
@property (nonatomic,readonly) BOOL isContactPersisted; 
@property (nonatomic,readonly) BOOL hasContactOnly; 
@property (nonatomic,readonly) unsigned long long options; 
+(id)placeItemWithMapItem:(id)arg1 options:(unsigned long long)arg2 ;
+(id)placeItemWithMapItem:(id)arg1 options:(unsigned long long)arg2 isIntermediateMapItem:(BOOL)arg3 ;
-(NSString *)name;
-(unsigned long long)options;
-(CNContact *)contact;
-(MKMapItem *)mapItem;
-(BOOL)isIntermediateMapItem;
-(BOOL)hasContactOnly;
-(EKCalendarItem *)calendarItem;
-(BOOL)isContactPersisted;
-(void)setIsSuggestedFavorite:(BOOL)arg1 ;
@end

