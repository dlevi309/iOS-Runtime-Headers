/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/

#import <Espresso/Espresso-Structs.h>
#import <libobjc.A.dylib/ETDataSource.h>

@protocol ETDataSource;
@interface ETDataSourceWithCache : NSObject <ETDataSource> {

	id<ETDataSource> _source;
	map<int, ETDataPoint *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, ETDataPoint *> > >* _cache;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > dump_path;
	BOOL dump_descriptors;

}
-(id)initWithDataSource:(id)arg1 ;
-(int)numberOfDataPoints;
-(id)dataPointAtIndex:(int)arg1 ;
-(id)initWithDataSource:(id)arg1 dumpPath:(id)arg2 ;
@end

