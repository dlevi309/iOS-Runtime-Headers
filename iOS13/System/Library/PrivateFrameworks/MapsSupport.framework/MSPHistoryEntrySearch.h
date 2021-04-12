/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

@class NSString, GEOMapRegion;


@protocol MSPHistoryEntrySearch <MSPHistoryEntry>
@property (nonatomic,copy,readonly) NSString * query; 
@property (nonatomic,copy,readonly) NSString * locationDisplayString; 
@property (nonatomic,copy,readonly) NSString * languageCode; 
@property (nonatomic,copy,readonly) GEOMapRegion * mapRegion; 
@required
-(NSString *)query;
-(NSString *)languageCode;
-(GEOMapRegion *)mapRegion;
-(NSString *)locationDisplayString;

@end

