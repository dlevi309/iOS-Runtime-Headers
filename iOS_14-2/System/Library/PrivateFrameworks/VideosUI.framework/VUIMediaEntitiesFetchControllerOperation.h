/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSArray, VUIMediaEntitiesFetchControllerResult, NSError, VUIMediaLibrary, NSOperation;

@interface VUIMediaEntitiesFetchControllerOperation : VUIAsynchronousOperation {

	long long _fetchReason;
	NSArray* _requests;
	NSArray* _currentFetchResponses;
	VUIMediaEntitiesFetchControllerResult* _result;
	NSError* _error;
	VUIMediaLibrary* _mediaLibrary;
	NSOperation* _currentSubOperation;

}

@property (nonatomic,retain) VUIMediaEntitiesFetchControllerResult * result;              //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) NSError * error;                                               //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) long long fetchReason;                                       //@synthesize fetchReason=_fetchReason - In the implementation block
@property (nonatomic,copy) NSArray * requests;                                            //@synthesize requests=_requests - In the implementation block
@property (nonatomic,retain) VUIMediaLibrary * mediaLibrary;                              //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,retain) NSOperation * currentSubOperation;                           //@synthesize currentSubOperation=_currentSubOperation - In the implementation block
@property (nonatomic,copy) NSArray * currentFetchResponses;                               //@synthesize currentFetchResponses=_currentFetchResponses - In the implementation block
-(void)setResult:(VUIMediaEntitiesFetchControllerResult *)arg1 ;
-(void)executionDidBegin;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSArray *)requests;
-(void)setRequests:(NSArray *)arg1 ;
-(void)setMediaLibrary:(VUIMediaLibrary *)arg1 ;
-(VUIMediaEntitiesFetchControllerResult *)result;
-(long long)fetchReason;
-(VUIMediaLibrary *)mediaLibrary;
-(void)cancel;
-(void)setFetchReason:(long long)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 fetchReason:(long long)arg2 requests:(id)arg3 ;
-(void)setCurrentFetchResponses:(NSArray *)arg1 ;
-(NSArray *)currentFetchResponses;
-(void)_startMediaLibraryFetchOperation;
-(NSOperation *)currentSubOperation;
-(void)_handleCompletdFetchWithResponses:(id)arg1 error:(id)arg2 ;
-(void)setCurrentSubOperation:(NSOperation *)arg1 ;
-(void)_startChangesOperationWithMediaEntityFetchResponses:(id)arg1 currentFetchResponses:(id)arg2 ;
-(id)_resultWithResponses:(id)arg1 ;
@end

