/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/

#import <Espresso/Espresso-Structs.h>
#import <libobjc.A.dylib/ETDataSource.h>

@interface ETDataSourceBuf : NSObject <ETDataSource> {

	map<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 2> >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 2> > > > >* blobs;
	int number_of_data_points;

}
-(int)numberOfDataPoints;
-(float*)dataAtIndex:(unsigned long long)arg1 key:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg2 ;
-(id)dataPointAtIndex:(int)arg1 ;
-(void)setBlobs:(const map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int> > >*)arg1 numberOfDataPoints:(int)arg2 nonBatches:(const vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >*)arg3 ;
@end

