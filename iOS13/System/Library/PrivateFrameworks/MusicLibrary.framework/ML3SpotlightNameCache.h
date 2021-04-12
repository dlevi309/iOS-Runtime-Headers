/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@class ML3MusicLibrary;

@interface ML3SpotlightNameCache : NSObject {

	unordered_map<long long, NSString *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, NSString *> > >* _map;
	BOOL _idle;
	ML3MusicLibrary* _library;

}
+(void)initialize;
+(id)copyFromLibrary:(id)arg1 cancelHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)_initWithLibrary:(id)arg1 cancelHandler:(/*^block*/id)arg2 ;
@end

