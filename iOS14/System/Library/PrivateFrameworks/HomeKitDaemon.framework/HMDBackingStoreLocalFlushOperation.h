/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)resultHandler;
-(void)setStore:(HMDBackingStoreLocal *)arg1 ;
-(HMDBackingStoreLocal *)store;
-(void)main;
-(void)setResultHandler:(id)arg1 ;
-(id)initWithStore:(id)arg1 clearCloud:(BOOL)arg2 resultHandler:(/*^block*/id)arg3 ;
-(BOOL)clearCloud;
-(void)setClearCloud:(BOOL)arg1 ;
@end

