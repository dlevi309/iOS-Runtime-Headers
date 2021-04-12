/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/WorldClockComplications.bundle/WorldClockComplications
*/


@class NSOperationQueue;

@interface NTAWorldClockPreferencesListenerObserver : NSObject {

	NSOperationQueue* _queue;
	/*^block*/id _block;

}

@property (nonatomic,retain) NSOperationQueue * queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id block;                                //@synthesize block=_block - In the implementation block
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(unsigned long long)hash;
-(NSOperationQueue *)queue;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

