/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSArray, NSError, NSOperationQueue, VUIMPMediaLibrary;

@interface VUIMPMediaEntitiesFetchOperation : VUIAsynchronousOperation {

	NSArray* _requests;
	NSArray* _responses;
	NSError* _error;
	NSOperationQueue* _privateQueue;
	VUIMPMediaLibrary* _mediaLibrary;

}

@property (nonatomic,copy) NSArray * requests;                              //@synthesize requests=_requests - In the implementation block
@property (nonatomic,copy) NSArray * responses;                             //@synthesize responses=_responses - In the implementation block
@property (nonatomic,copy) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;               //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,retain) VUIMPMediaLibrary * mediaLibrary;              //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
-(id)init;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSArray *)requests;
-(void)setRequests:(NSArray *)arg1 ;
-(NSArray *)responses;
-(void)setResponses:(NSArray *)arg1 ;
-(VUIMPMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(VUIMPMediaLibrary *)arg1 ;
-(NSOperationQueue *)privateQueue;
-(void)executionDidBegin;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 requests:(id)arg2 ;
@end

