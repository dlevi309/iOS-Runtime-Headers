/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSKSearch.h>

@class NSString, TSWPFilteredString, TSWPStorage;

@interface TSWPSearch : TSKSearch {

	NSString* _searchedString;
	TSWPFilteredString* _filteredString;
	TSWPStorage* _storage;
	NSRange _range;

}

@property (nonatomic,retain,readonly) TSWPFilteredString * filteredString;              //@synthesize filteredString=_filteredString - In the implementation block
@property (nonatomic,readonly) TSWPStorage * storage;                                   //@synthesize storage=_storage - In the implementation block
@property (assign,nonatomic) NSRange range;                                             //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) NSString * searchedString;                               //@synthesize searchedString=_searchedString - In the implementation block
-(void)dealloc;
-(TSWPStorage *)storage;
-(NSRange)range;
-(BOOL)isComplete;
-(void)setRange:(NSRange)arg1 ;
-(id)initWithString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(/*^block*/id)arg3 storage:(id)arg4 range:(NSRange)arg5 ;
-(NSString *)searchedString;
-(void)foundHitWithRange:(NSRange)arg1 ;
-(TSWPFilteredString *)filteredString;
@end

