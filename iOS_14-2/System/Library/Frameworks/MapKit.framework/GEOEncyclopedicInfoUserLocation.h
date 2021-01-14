/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/GEOEncyclopedicInfo.h>

@class NSString, NSArray, GEOMapItemAttribution, MKMapItem;

@interface GEOEncyclopedicInfoUserLocation : NSObject <GEOEncyclopedicInfo> {

	BOOL _isUserLocation;
	MKMapItem* _mapItem;

}

@property (nonatomic,retain) MKMapItem * mapItem;                                            //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) BOOL hasTextBlock; 
@property (nonatomic,readonly) NSString * textBlockTitle; 
@property (nonatomic,readonly) NSString * textBlockText; 
@property (nonatomic,readonly) BOOL hasPairOfFactoids; 
@property (nonatomic,readonly) NSArray * factoids; 
@property (nonatomic,readonly) BOOL hasStandAloneFactoids; 
@property (nonatomic,readonly) GEOMapItemAttribution * encyclopedicAttribution; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMapItem:(id)arg1 isUserLocation:(BOOL)arg2 ;
-(MKMapItem *)mapItem;
-(NSArray *)factoids;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(BOOL)hasStandAloneFactoids;
-(NSString *)textBlockTitle;
-(GEOMapItemAttribution *)encyclopedicAttribution;
-(NSString *)textBlockText;
-(BOOL)hasPairOfFactoids;
-(BOOL)hasTextBlock;
@end

