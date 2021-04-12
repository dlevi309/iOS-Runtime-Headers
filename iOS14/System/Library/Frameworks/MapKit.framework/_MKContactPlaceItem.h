/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/_MKPlaceItem.h>

@class MKMapItem, CNContact, NSString, EKCalendarItem;

@interface _MKContactPlaceItem : NSObject <_MKPlaceItem> {

	MKMapItem* _mapItem;
	CNContact* _contact;
	unsigned long long _options;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) MKMapItem * mapItem; 
@property (nonatomic,readonly) BOOL isIntermediateMapItem; 
@property (nonatomic,readonly) EKCalendarItem * calendarItem; 
@property (nonatomic,readonly) CNContact * contact; 
@property (nonatomic,readonly) BOOL isContactPersisted; 
@property (nonatomic,readonly) BOOL hasContactOnly; 
@property (nonatomic,readonly) unsigned long long options; 
+(id)placeItemWithMapItem:(id)arg1 contact:(id)arg2 options:(unsigned long long)arg3 ;
-(CNContact *)contact;
-(BOOL)isContactPersisted;
-(unsigned long long)options;
-(MKMapItem *)mapItem;
-(NSString *)name;
-(EKCalendarItem *)calendarItem;
-(BOOL)hasContactOnly;
-(BOOL)isIntermediateMapItem;
@end

