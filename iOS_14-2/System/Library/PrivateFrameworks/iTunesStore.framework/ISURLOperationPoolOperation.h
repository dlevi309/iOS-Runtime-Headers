/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)run;
-(void)addOperation:(id)arg1 ;
-(void)cancelOperation:(id)arg1 ;
-(BOOL)containsOperation:(id)arg1 ;
-(void)dealloc;
-(ISURLOperation *)mainOperation;
-(void)_forwardResponseFromOperation:(id)arg1 toOperation:(id)arg2 ;
@end

