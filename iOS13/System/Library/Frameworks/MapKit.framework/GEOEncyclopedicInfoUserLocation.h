/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/GEOEncyclopedicInfo.h>

@class NSString, NSArray, GEOMapItemAttribution, MKMapItem;

@interface GEOEncyclopedicInfoUserLocation : NSObject <GEOEncyclopedicInfo> {

	MKMapItem* _mapItem;

}

@property (nonatomic,retain) MKMapItem * mapItem;                                            //@synthesize mapItem=_mapItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasTextBlock; 
@property (nonatomic,readonly) NSString * textBlockTitle; 
@property (nonatomic,readonly) NSString * textBlockText; 
@property (nonatomic,readonly) BOOL hasPairOfFactoids; 
@property (nonatomic,readonly) NSArray * factoids; 
@property (nonatomic,readonly) BOOL hasStandAloneFactoids; 
@property (nonatomic,readonly) GEOMapItemAttribution * encyclopedicAttribution; 
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(NSString *)textBlockText;
-(BOOL)hasTextBlock;
-(NSString *)textBlockTitle;
-(BOOL)hasPairOfFactoids;
-(NSArray *)factoids;
-(BOOL)hasStandAloneFactoids;
-(GEOMapItemAttribution *)encyclopedicAttribution;
-(id)initWithMapItem:(id)arg1 ;
@end

