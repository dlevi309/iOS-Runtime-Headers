/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/ML3Predicate.h>

@class ML3SpotlightNameCache, NSArray, NSString;

@interface ML3SpotlightMatchPredicate : ML3Predicate {

	ML3SpotlightNameCache* _names;
	NSArray* _searchProperties;
	NSString* _searchString;

}

@property (nonatomic,readonly) NSString * searchString;              //@synthesize searchString=_searchString - In the implementation block
+(id)predicateWithProperties:(id)arg1 searchString:(id)arg2 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(NSString *)searchString;
-(void)dealloc;
-(id)SQLJoinClausesForClass:(Class)arg1 ;
-(id)spotlightPredicate;
-(id)initWithSearchString:(id)arg1 matchingProperties:(id)arg2 ;
@end

