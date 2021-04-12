/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)pushChangeScopesBatch;
-(void)setProcessAssertion:(id)arg1 ;
-(void)completeTransaction;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(void)_updateChangeScopesDescriptionSnapshot;
-(void)setChangeScopesDescriptionSnapshot:(NSString *)arg1 ;
-(void)completeTransactionScope:(id)arg1 ;
-(id)generateChangeScopesDescription;
-(NSString *)changeScopesDescriptionSnapshot;
-(id)initWithPathManager:(id)arg1 ;
-(void)abortTransaction;
-(id)description;
-(NSObject*<OS_dispatch_semaphore>)fdResourceSemaphore;
-(void)popChangeScopesBatch;
-(int)fileDescriptor;
-(void)setFdResourceSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)changeScopes;
-(void)addChangeScopes:(id)arg1 ;
-(id)processAssertion;
-(void)persistTransactionScopes:(id)arg1 ;
-(void)setFileDescriptor:(int)arg1 ;
-(BOOL)isClientTransaction;
-(void)dealloc;
@end

