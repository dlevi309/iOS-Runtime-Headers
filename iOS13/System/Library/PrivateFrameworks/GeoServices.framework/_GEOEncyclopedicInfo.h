/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOEncyclopedicInfo.h>

@class NSString, NSArray, GEOMapItemAttribution, GEOPDPlace, NSMapTable;

@interface _GEOEncyclopedicInfo : NSObject <GEOEncyclopedicInfo> {

	GEOPDPlace* _placeData;
	NSMapTable* _attributionMap;

}

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
-(NSString *)textBlockText;
-(BOOL)hasTextBlock;
-(NSString *)textBlockTitle;
-(BOOL)hasPairOfFactoids;
-(NSArray *)factoids;
-(BOOL)hasStandAloneFactoids;
-(GEOMapItemAttribution *)encyclopedicAttribution;
-(id)initWithPlaceData:(id)arg1 attributionMap:(id)arg2 ;
@end

