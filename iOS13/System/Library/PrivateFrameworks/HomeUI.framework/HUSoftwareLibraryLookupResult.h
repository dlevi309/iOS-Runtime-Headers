/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class NSSet;

@interface HUSoftwareLibraryLookupResult : NSObject {

	NSSet* _matchedLibraryItems;
	NSSet* _matchedStoreItems;
	NSSet* _unmatchedRequests;

}

@property (nonatomic,retain) NSSet * matchedLibraryItems;              //@synthesize matchedLibraryItems=_matchedLibraryItems - In the implementation block
@property (nonatomic,retain) NSSet * matchedStoreItems;                //@synthesize matchedStoreItems=_matchedStoreItems - In the implementation block
@property (nonatomic,retain) NSSet * unmatchedRequests;                //@synthesize unmatchedRequests=_unmatchedRequests - In the implementation block
+(id)resultForRequests:(id)arg1 ;
+(id)resultForAccessories:(id)arg1 ;
+(id)_libraryResultForRequests:(id)arg1 ;
+(id)_storeResultForRequests:(id)arg1 ;
-(id)init;
-(NSSet *)matchedLibraryItems;
-(NSSet *)matchedStoreItems;
-(NSSet *)unmatchedRequests;
-(void)setMatchedLibraryItems:(NSSet *)arg1 ;
-(void)setMatchedStoreItems:(NSSet *)arg1 ;
-(void)setUnmatchedRequests:(NSSet *)arg1 ;
@end

