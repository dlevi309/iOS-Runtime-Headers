/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


#import <PhotosGraph/PhotosGraph-Structs.h>
@interface PGUnfairLock : NSObject {

	os_unfair_lock_s _lock;

}
-(void)unlock;
-(id)init;
-(void)lock;
@end

