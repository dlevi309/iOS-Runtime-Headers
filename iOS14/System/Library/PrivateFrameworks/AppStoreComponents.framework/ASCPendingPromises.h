/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/


@class NSRecursiveLock, NSMutableArray;

@interface ASCPendingPromises : NSObject {

	NSRecursiveLock* _stateLock;
	NSMutableArray* _binaryPromisesIfLoaded;
	NSMutableArray* _promisesIfLoaded;

}

@property (nonatomic,readonly) NSRecursiveLock * stateLock;                        //@synthesize stateLock=_stateLock - In the implementation block
@property (nonatomic,retain) NSMutableArray * binaryPromisesIfLoaded;              //@synthesize binaryPromisesIfLoaded=_binaryPromisesIfLoaded - In the implementation block
@property (nonatomic,readonly) NSMutableArray * binaryPromises; 
@property (nonatomic,retain) NSMutableArray * promisesIfLoaded;                    //@synthesize promisesIfLoaded=_promisesIfLoaded - In the implementation block
@property (nonatomic,readonly) NSMutableArray * promises; 
-(id)init;
-(void)cancelAll;
-(NSRecursiveLock *)stateLock;
-(NSMutableArray *)promises;
-(void)finishAllWithError:(id)arg1 ;
-(void)addPromise:(id)arg1 ;
-(void)addBinaryPromise:(id)arg1 ;
-(NSMutableArray *)binaryPromisesIfLoaded;
-(void)setBinaryPromisesIfLoaded:(NSMutableArray *)arg1 ;
-(NSMutableArray *)promisesIfLoaded;
-(void)setPromisesIfLoaded:(NSMutableArray *)arg1 ;
-(NSMutableArray *)binaryPromises;
-(void)enumerateBinaryPromises:(/*^block*/id)arg1 andPromises:(/*^block*/id)arg2 ;
-(BOOL)containsBinaryPromise:(id)arg1 ;
-(BOOL)containsPromise:(id)arg1 ;
@end

