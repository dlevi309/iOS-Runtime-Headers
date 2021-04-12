/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSAsynchronousFetchRequest *)fetchRequest;
-(id)initForFetchRequest:(id)arg1 withContext:(id)arg2 andProgress:(id)arg3 completetionBlock:(/*^block*/id)arg4 ;
-(NSArray *)finalResult;
-(void)setFinalResult:(NSArray *)arg1 ;
-(id)intermediateResultCallback;
-(void)setIntermediateResultCallback:(id)arg1 ;
@end

