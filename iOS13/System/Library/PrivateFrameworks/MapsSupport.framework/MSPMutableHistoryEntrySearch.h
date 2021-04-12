/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MSPMutableHistoryEntry.h>
#import <libobjc.A.dylib/MSPHistoryEntrySearch.h>

@class NSString, GEOMapRegion, NSDate;

@interface MSPMutableHistoryEntrySearch : MSPMutableHistoryEntry <MSPHistoryEntrySearch>

@property (nonatomic,copy) NSString * query; 
@property (nonatomic,copy) NSString * locationDisplayString; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) GEOMapRegion * mapRegion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDate * usageDate; 
@property (nonatomic,readonly) BOOL tracksRAPReportingOnly; 
+(Class)mutableObjectClass;
+(id)mutableObjectProtocol;
+(Class)immutableObjectClass;
+(id)immutableObjectProtocol;
-(NSString *)query;
-(NSString *)languageCode;
-(void)setQuery:(NSString *)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(GEOMapRegion *)mapRegion;
-(id)transferToImmutableIfValidWithError:(out id*)arg1 ;
-(BOOL)_isUserVisibleDuplicateOfSameClassObject:(id)arg1 ;
-(NSString *)locationDisplayString;
-(void)setLocationDisplayString:(NSString *)arg1 ;
@end

