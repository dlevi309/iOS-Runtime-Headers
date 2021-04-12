/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/_PLClientTransaction.h>

@protocol OS_dispatch_queue;
@class NSCountedSet, NSObject;

@interface _PLServerTransaction : _PLClientTransaction {

	NSCountedSet* _enqueuedChangeScopes;
	NSObject*<OS_dispatch_queue> _changeScopeQueue;

}
-(void)dealloc;
-(id)initWithPathManager:(id)arg1 ;
-(void)completeTransactionScope:(id)arg1 ;
-(void)completeTransaction;
-(void)popChangeScopesBatch;
-(void)pushChangeScopesBatch;
-(void)abortTransaction;
-(id)changeScopes;
-(void)addChangeScopes:(id)arg1 ;
-(BOOL)isClientTransaction;
-(id)generateChangeScopesDescription;
-(void)_enqueueChangeScopes:(id)arg1 ;
@end

