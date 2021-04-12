/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(id<GEOMapItem>)parent;
-(NSArray *)children;
-(unsigned long long)featureId;
-(id)initWithContainedPlace:(id)arg1 ;
-(unsigned long long)parentFeatureId;
-(NSArray *)siblings;
@end

