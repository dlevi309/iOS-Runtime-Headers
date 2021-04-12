/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <Foundation/NSOperationQueue.h>

@interface PLInstrumentedOperationQueue : NSOperationQueue {

	/*^block*/id _pl_operationCountChangedBlock;

}

@property (copy) id pl_operationCountChangedBlock;              //@synthesize pl_operationCountChangedBlock=_pl_operationCountChangedBlock - In the implementation block
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)pl_operationCountChangedBlock;
-(void)setPl_operationCountChangedBlock:(id)arg1 ;
@end

