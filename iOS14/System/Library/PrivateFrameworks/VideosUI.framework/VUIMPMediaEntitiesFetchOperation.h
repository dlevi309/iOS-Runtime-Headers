/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)executionDidBegin;
-(id)init;
-(NSOperationQueue *)privateQueue;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSArray *)requests;
-(void)setRequests:(NSArray *)arg1 ;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(void)setMediaLibrary:(VUIMPMediaLibrary *)arg1 ;
-(void)setResponses:(NSArray *)arg1 ;
-(VUIMPMediaLibrary *)mediaLibrary;
-(NSArray *)responses;
-(id)initWithMediaLibrary:(id)arg1 requests:(id)arg2 ;
@end

