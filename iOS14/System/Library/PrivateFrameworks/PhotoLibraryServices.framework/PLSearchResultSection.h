/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)resultTypes;
-(id)initWithResultTypes:(unsigned long long)arg1 categoryMask:(unsigned long long)arg2 searchResults:(id)arg3 ;
-(unsigned long long)categoryMask;
-(NSArray *)searchResults;
@end

