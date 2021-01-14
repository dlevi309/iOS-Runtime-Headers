/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOMapItem;
@class GEOPDContainedPlace, NSArray;

@interface GEOMapItemContainedPlace : NSObject {

	GEOPDContainedPlace* _containedPlace;
	id<GEOMapItem> _parent;
	NSArray* _children;
	NSArray* _siblings;

}

@property (nonatomic,readonly) unsigned long long featureId; 
@property (nonatomic,readonly) unsigned long long parentFeatureId; 
@property (nonatomic,readonly) id<GEOMapItem> parent; 
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) NSArray * siblings; 
-(NSArray *)children;
-(NSArray *)siblings;
-(id<GEOMapItem>)parent;
-(unsigned long long)parentFeatureId;
-(id)init;
-(unsigned long long)featureId;
-(id)description;
-(id)initWithContainedPlace:(id)arg1 ;
@end

