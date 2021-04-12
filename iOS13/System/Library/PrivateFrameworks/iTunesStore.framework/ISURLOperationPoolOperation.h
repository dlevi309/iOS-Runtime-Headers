/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISOperation.h>

@class NSMutableArray, ISURLOperation;

@interface ISURLOperationPoolOperation : ISOperation {

	long long _cancelCount;
	BOOL _forwardImmediately;
	NSMutableArray* _operations;

}

@property (nonatomic,readonly) ISURLOperation * mainOperation; 
-(void)dealloc;
-(void)run;
-(void)addOperation:(id)arg1 ;
-(void)cancelOperation:(id)arg1 ;
-(BOOL)containsOperation:(id)arg1 ;
-(ISURLOperation *)mainOperation;
-(void)_forwardResponseFromOperation:(id)arg1 toOperation:(id)arg2 ;
@end

