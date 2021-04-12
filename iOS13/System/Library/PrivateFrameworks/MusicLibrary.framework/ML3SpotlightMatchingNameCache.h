/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@class NSString, ML3MusicLibrary;

@interface ML3SpotlightMatchingNameCache : NSObject {

	unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> >* _matchingSet;
	NSString* _matchString;
	BOOL _idle;
	ML3MusicLibrary* _library;

}
+(void)initialize;
+(void)loadFromLibrary:(id)arg1 namesMatchingString:(id)arg2 cancelHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)_initWithLibrary:(id)arg1 matchString:(id)arg2 cancelHandler:(/*^block*/id)arg3 ;
@end

