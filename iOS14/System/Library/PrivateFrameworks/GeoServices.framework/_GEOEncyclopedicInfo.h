/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOEncyclopedicInfo.h>

@class NSString, NSArray, GEOMapItemAttribution, GEOPDPlace, NSMapTable;

@interface _GEOEncyclopedicInfo : NSObject <GEOEncyclopedicInfo> {

	GEOPDPlace* _placeData;
	NSMapTable* _attributionMap;

}

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
-(NSArray *)factoids;
-(BOOL)hasStandAloneFactoids;
-(NSString *)textBlockTitle;
-(GEOMapItemAttribution *)encyclopedicAttribution;
-(NSString *)textBlockText;
-(BOOL)hasPairOfFactoids;
-(id)initWithPlaceData:(id)arg1 attributionMap:(id)arg2 ;
-(BOOL)hasTextBlock;
@end

