/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSArray, NSError, VUIPlistMediaLibrary;

@interface VUIPlistMediaEntitiesFetchOperation : VUIAsynchronousOperation {

	NSArray* _requests;
	NSArray* _responses;
	NSError* _error;
	VUIPlistMediaLibrary* _mediaLibrary;

}

@property (nonatomic,retain) VUIPlistMediaLibrary * mediaLibrary;              //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,copy) NSArray * requests;                                 //@synthesize requests=_requests - In the implementation block
@property (nonatomic,retain) NSArray * responses;                              //@synthesize responses=_responses - In the implementation block
@property (nonatomic,copy) NSError * error;                                    //@synthesize error=_error - In the implementation block
-(id)init;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSArray *)requests;
-(void)setRequests:(NSArray *)arg1 ;
-(NSArray *)responses;
-(void)setResponses:(NSArray *)arg1 ;
-(VUIPlistMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(VUIPlistMediaLibrary *)arg1 ;
-(void)executionDidBegin;
-(id)initWithMediaLibrary:(id)arg1 requests:(id)arg2 ;
-(id)_itemsFetchResponseWithRequest:(id)arg1 error:(id*)arg2 ;
-(id)_collectionsFetchResponseWithRequest:(id)arg1 error:(id*)arg2 ;
-(id)_fetchResponseWithMediaEntities:(id)arg1 request:(id)arg2 ;
-(id)_mediaEntityKindForRequest:(id)arg1 ;
@end

