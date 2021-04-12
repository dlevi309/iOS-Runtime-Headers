/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <Foundation/NSOperation.h>

@class HMDBackingStoreLocal;

@interface HMDBackingStoreLocalFlushOperation : NSOperation {

	BOOL _clearCloud;
	HMDBackingStoreLocal* _store;
	/*^block*/id _resultHandler;

}

@property (nonatomic,retain) HMDBackingStoreLocal * store;              //@synthesize store=_store - In the implementation block
@property (nonatomic,copy) id resultHandler;                            //@synthesize resultHandler=_resultHandler - In the implementation block
@property (assign,nonatomic) BOOL clearCloud;                           //@synthesize clearCloud=_clearCloud - In the implementation block
-(void)main;
-(HMDBackingStoreLocal *)store;
-(void)setStore:(HMDBackingStoreLocal *)arg1 ;
-(id)resultHandler;
-(void)setResultHandler:(id)arg1 ;
-(id)initWithStore:(id)arg1 clearCloud:(BOOL)arg2 resultHandler:(/*^block*/id)arg3 ;
-(BOOL)clearCloud;
-(void)setClearCloud:(BOOL)arg1 ;
@end

