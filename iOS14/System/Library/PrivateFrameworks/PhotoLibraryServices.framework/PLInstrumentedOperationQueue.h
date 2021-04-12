/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <Foundation/NSOperationQueue.h>

@interface PLInstrumentedOperationQueue : NSOperationQueue {

	/*^block*/id _pl_operationCountChangedBlock;

}

@property (copy) id pl_operationCountChangedBlock;              //@synthesize pl_operationCountChangedBlock=_pl_operationCountChangedBlock - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(id)pl_operationCountChangedBlock;
-(void)setPl_operationCountChangedBlock:(id)arg1 ;
-(void)dealloc;
@end

