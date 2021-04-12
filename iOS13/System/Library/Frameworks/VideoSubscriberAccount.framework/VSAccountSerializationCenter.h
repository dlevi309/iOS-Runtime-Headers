/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@class NSOperationQueue, VSPersistentStorage, NSUndoManager;

@interface VSAccountSerializationCenter : NSObject {

	NSOperationQueue* _serializationQueue;
	VSPersistentStorage* _storage;

}

@property (nonatomic,retain) NSOperationQueue * serializationQueue;              //@synthesize serializationQueue=_serializationQueue - In the implementation block
@property (nonatomic,retain) VSPersistentStorage * storage;                      //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) NSUndoManager * undoManager; 
+(id)defaultSerializationCenter;
-(id)init;
-(VSPersistentStorage *)storage;
-(void)setStorage:(VSPersistentStorage *)arg1 ;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(NSUndoManager *)undoManager;
-(NSOperationQueue *)serializationQueue;
-(id)exportDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)importData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setSerializationQueue:(NSOperationQueue *)arg1 ;
@end

