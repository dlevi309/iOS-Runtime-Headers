/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/TSCacheFlushingManagerType.h>

@interface TSCacheFlushingManager : NSObject <TSCacheFlushingManagerType> {

	 cacheFlusher;
	 storageLevelProvider;
	 preFlushGroup;

}
-(id)init;
-(void)addPreFlushTask:(/*^block*/id)arg1 ;
-(void)enableFlushing;
-(id)createPreFlushTask;
@end

