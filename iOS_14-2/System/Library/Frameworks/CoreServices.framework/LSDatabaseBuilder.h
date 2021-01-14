/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@protocol OS_dispatch_queue;
#import <CoreServices/CoreServices-Structs.h>
@class NSObject;

@interface LSDatabaseBuilder : NSObject {

	NSObject*<OS_dispatch_queue> _ioQueue;

}
-(id)initWithIOQueue:(id)arg1 ;
-(void)createAndSeedLocalDatabase:(BOOL*)arg1 ;
-(void)setSeedingComplete:(BOOL)arg1 ;
-(void)syncWithMI:(unordered_set<std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::basic_string<char> > >*)arg1 ;
@end

