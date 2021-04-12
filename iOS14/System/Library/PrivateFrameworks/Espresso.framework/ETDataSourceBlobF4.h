/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/

#import <Espresso/Espresso-Structs.h>
#import <libobjc.A.dylib/ETDataSource.h>

@interface ETDataSourceBlobF4 : NSObject <ETDataSource> {

	map<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > > > >* blobs;

}
-(int)numberOfDataPoints;
-(id)dataPointAtIndex:(int)arg1 ;
-(void)addBlob:(id)arg1 forKey:(id)arg2 ;
@end

