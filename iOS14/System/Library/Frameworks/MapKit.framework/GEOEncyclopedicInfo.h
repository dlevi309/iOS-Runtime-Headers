/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

@class NSString, NSArray, GEOMapItemAttribution;


@protocol GEOEncyclopedicInfo <NSObject>
@property (nonatomic,readonly) BOOL hasTextBlock; 
@property (nonatomic,readonly) NSString * textBlockTitle; 
@property (nonatomic,readonly) NSString * textBlockText; 
@property (nonatomic,readonly) BOOL hasPairOfFactoids; 
@property (nonatomic,readonly) NSArray * factoids; 
@property (nonatomic,readonly) BOOL hasStandAloneFactoids; 
@property (nonatomic,readonly) GEOMapItemAttribution * encyclopedicAttribution; 
@required
-(NSArray *)factoids;
-(BOOL)hasStandAloneFactoids;
-(NSString *)textBlockTitle;
-(GEOMapItemAttribution *)encyclopedicAttribution;
-(NSString *)textBlockText;
-(BOOL)hasPairOfFactoids;
-(BOOL)hasTextBlock;

@end

