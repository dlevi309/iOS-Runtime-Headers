/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSArray;

@interface PLSearchResultSection : NSObject {

	unsigned long long _resultTypes;
	unsigned long long _categoryMask;
	NSArray* _searchResults;

}

@property (nonatomic,readonly) unsigned long long resultTypes;               //@synthesize resultTypes=_resultTypes - In the implementation block
@property (nonatomic,readonly) unsigned long long categoryMask;              //@synthesize categoryMask=_categoryMask - In the implementation block
@property (nonatomic,readonly) NSArray * searchResults;                      //@synthesize searchResults=_searchResults - In the implementation block
-(NSArray *)searchResults;
-(unsigned long long)categoryMask;
-(id)initWithResultTypes:(unsigned long long)arg1 categoryMask:(unsigned long long)arg2 searchResults:(id)arg3 ;
-(unsigned long long)resultTypes;
@end

