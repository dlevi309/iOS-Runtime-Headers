/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

