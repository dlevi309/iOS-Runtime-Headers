/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


#import <PhotosGraph/PhotosGraph-Structs.h>
@interface PGUnfairLock : NSObject {

	os_unfair_lock_s _lock;

}
-(id)init;
-(void)lock;
-(void)unlock;
@end

