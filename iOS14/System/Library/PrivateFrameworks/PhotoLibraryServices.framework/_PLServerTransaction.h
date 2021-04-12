/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/_PLClientTransaction.h>

@protocol OS_dispatch_queue;
@class NSCountedSet, NSObject;

@interface _PLServerTransaction : _PLClientTransaction {

	NSCountedSet* _enqueuedChangeScopes;
	NSObject*<OS_dispatch_queue> _changeScopeQueue;

}
-(void)pushChangeScopesBatch;
-(void)completeTransaction;
-(void)completeTransactionScope:(id)arg1 ;
-(id)generateChangeScopesDescription;
-(id)initWithPathManager:(id)arg1 ;
-(void)abortTransaction;
-(void)_enqueueChangeScopes:(id)arg1 ;
-(void)popChangeScopesBatch;
-(id)changeScopes;
-(void)addChangeScopes:(id)arg1 ;
-(BOOL)isClientTransaction;
-(void)dealloc;
@end

