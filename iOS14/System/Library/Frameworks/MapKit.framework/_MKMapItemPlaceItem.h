/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)placeItemWithMapItem:(id)arg1 options:(unsigned long long)arg2 isIntermediateMapItem:(BOOL)arg3 ;
+(id)placeItemWithMapItem:(id)arg1 options:(unsigned long long)arg2 ;
-(CNContact *)contact;
-(BOOL)isContactPersisted;
-(void)setIsSuggestedFavorite:(BOOL)arg1 ;
-(unsigned long long)options;
-(MKMapItem *)mapItem;
-(NSString *)name;
-(EKCalendarItem *)calendarItem;
-(BOOL)hasContactOnly;
-(BOOL)isIntermediateMapItem;
@end

