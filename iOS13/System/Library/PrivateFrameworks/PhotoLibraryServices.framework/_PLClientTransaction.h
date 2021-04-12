/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLClientServerTransaction.h>

@protocol OS_dispatch_semaphore;
@class NSSet, NSString, NSObject;

@interface _PLClientTransaction : PLClientServerTransaction {

	NSSet* _changeScopes;
	long long _addChangeScopesBatch;
	NSSet* _batchScopes;
	int _fileDescriptor;
	id _processAssertion;
	NSString* _path;
	NSObject*<OS_dispatch_semaphore> _fdResourceSemaphore;
	NSString* _changeScopesDescriptionSnapshot;

}

@property (assign,nonatomic) int fileDescriptor;                                                       //@synthesize fileDescriptor=_fileDescriptor - In the implementation block
@property (nonatomic,retain) id processAssertion;                                                      //@synthesize processAssertion=_processAssertion - In the implementation block
@property (nonatomic,retain) NSString * path;                                                          //@synthesize path=_path - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_semaphore> fdResourceSemaphore;              //@synthesize fdResourceSemaphore=_fdResourceSemaphore - In the implementation block
@property (copy) NSString * changeScopesDescriptionSnapshot;                                           //@synthesize changeScopesDescriptionSnapshot=_changeScopesDescriptionSnapshot - In the implementation block
+(id)_fdResourceSemaphore;
+(id)_fdIsolationQueue;
-(void)dealloc;
-(id)description;
-(NSString *)path;
-(int)fileDescriptor;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithPathManager:(id)arg1 ;
-(void)setFileDescriptor:(int)arg1 ;
-(void)completeTransactionScope:(id)arg1 ;
-(void)completeTransaction;
-(void)popChangeScopesBatch;
-(void)pushChangeScopesBatch;
-(void)abortTransaction;
-(id)changeScopes;
-(void)_updateChangeScopesDescriptionSnapshot;
-(void)persistTransactionScopes:(id)arg1 ;
-(void)addChangeScopes:(id)arg1 ;
-(BOOL)isClientTransaction;
-(id)generateChangeScopesDescription;
-(id)processAssertion;
-(void)setProcessAssertion:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)fdResourceSemaphore;
-(void)setFdResourceSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSString *)changeScopesDescriptionSnapshot;
-(void)setChangeScopesDescriptionSnapshot:(NSString *)arg1 ;
@end

