/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSPersistentStoreAsynchronousResult.h>

@class NSAsynchronousFetchRequest, NSArray;

@interface NSAsynchronousFetchResult : NSPersistentStoreAsynchronousResult {

	NSAsynchronousFetchRequest* _fetchRequest;
	NSArray* _finalResult;
	id _intermediateResultCallback;

}

@property (retain) NSArray * finalResult;                                    //@synthesize finalResult=_finalResult - In the implementation block
@property (copy) id intermediateResultCallback;                              //@synthesize intermediateResultCallback=_intermediateResultCallback - In the implementation block
@property (readonly) NSAsynchronousFetchRequest * fetchRequest;              //@synthesize fetchRequest=_fetchRequest - In the implementation block
-(void)setOperationError:(id)arg1 ;
-(NSAsynchronousFetchRequest *)fetchRequest;
-(NSArray *)finalResult;
-(id)initForFetchRequest:(id)arg1 withContext:(id)arg2 andProgress:(id)arg3 completetionBlock:(/*^block*/id)arg4 ;
-(void)setFinalResult:(NSArray *)arg1 ;
-(id)intermediateResultCallback;
-(void)setIntermediateResultCallback:(id)arg1 ;
-(void)dealloc;
@end

