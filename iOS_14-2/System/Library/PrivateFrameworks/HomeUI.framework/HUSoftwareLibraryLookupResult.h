/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class NSSet, NSDictionary;

@interface HUSoftwareLibraryLookupResult : NSObject {

	NSSet* _matchedLibraryItems;
	NSDictionary* _accessoriesByBundleIDs;
	NSSet* _matchedStoreItems;
	NSDictionary* _accessoriesByStoreIDs;
	NSSet* _unmatchedRequests;

}

@property (nonatomic,retain) NSSet * matchedLibraryItems;                        //@synthesize matchedLibraryItems=_matchedLibraryItems - In the implementation block
@property (nonatomic,retain) NSDictionary * accessoriesByBundleIDs;              //@synthesize accessoriesByBundleIDs=_accessoriesByBundleIDs - In the implementation block
@property (nonatomic,retain) NSSet * matchedStoreItems;                          //@synthesize matchedStoreItems=_matchedStoreItems - In the implementation block
@property (nonatomic,retain) NSDictionary * accessoriesByStoreIDs;               //@synthesize accessoriesByStoreIDs=_accessoriesByStoreIDs - In the implementation block
@property (nonatomic,retain) NSSet * unmatchedRequests;                          //@synthesize unmatchedRequests=_unmatchedRequests - In the implementation block
+(id)resultForRequests:(id)arg1 ;
+(id)resultForAccessories:(id)arg1 ;
+(id)_libraryResultForRequests:(id)arg1 ;
+(id)_storeResultForRequests:(id)arg1 ;
-(id)init;
-(NSSet *)matchedLibraryItems;
-(NSSet *)matchedStoreItems;
-(NSDictionary *)accessoriesByBundleIDs;
-(NSDictionary *)accessoriesByStoreIDs;
-(NSSet *)unmatchedRequests;
-(void)setMatchedLibraryItems:(NSSet *)arg1 ;
-(void)setAccessoriesByBundleIDs:(NSDictionary *)arg1 ;
-(void)setMatchedStoreItems:(NSSet *)arg1 ;
-(void)setAccessoriesByStoreIDs:(NSDictionary *)arg1 ;
-(void)setUnmatchedRequests:(NSSet *)arg1 ;
@end

