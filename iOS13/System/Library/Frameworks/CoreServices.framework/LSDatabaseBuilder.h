/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface LSDatabaseBuilder : NSObject {

	NSObject*<OS_dispatch_queue> _ioQueue;

}
-(void)setSeedingComplete:(BOOL)arg1 ;
-(id)initWithIOQueue:(id)arg1 ;
-(void)createAndSeedLocalDatabase:(BOOL*)arg1 ;
@end

