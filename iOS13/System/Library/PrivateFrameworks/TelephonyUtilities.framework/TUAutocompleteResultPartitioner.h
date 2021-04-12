/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@class TUSearchController, NSMutableArray;

@interface TUAutocompleteResultPartitioner : NSObject {

	TUSearchController* _searchController;
	NSMutableArray* _normalResultsArray;
	NSMutableArray* _foundInMailResultsArray;
	NSMutableArray* _foundOnServersResultsArray;

}

@property (nonatomic,retain) NSMutableArray * normalResultsArray;                      //@synthesize normalResultsArray=_normalResultsArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * foundInMailResultsArray;                 //@synthesize foundInMailResultsArray=_foundInMailResultsArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * foundOnServersResultsArray;              //@synthesize foundOnServersResultsArray=_foundOnServersResultsArray - In the implementation block
@property (__weak) TUSearchController * searchController;                              //@synthesize searchController=_searchController - In the implementation block
+(BOOL)sourceTypeIsFoundInMail:(unsigned long long)arg1 ;
+(BOOL)sourceTypeIsFoundOnServers:(unsigned long long)arg1 ;
-(id)init;
-(TUSearchController *)searchController;
-(void)setSearchController:(TUSearchController *)arg1 ;
-(id)searchResults;
-(NSMutableArray *)foundInMailResultsArray;
-(NSMutableArray *)foundOnServersResultsArray;
-(NSMutableArray *)normalResultsArray;
-(void)addResult:(id)arg1 ;
-(void)setNormalResultsArray:(NSMutableArray *)arg1 ;
-(void)setFoundInMailResultsArray:(NSMutableArray *)arg1 ;
-(void)setFoundOnServersResultsArray:(NSMutableArray *)arg1 ;
@end

