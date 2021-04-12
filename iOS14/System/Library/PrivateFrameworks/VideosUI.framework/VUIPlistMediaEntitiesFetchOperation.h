/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)executionDidBegin;
-(id)init;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSArray *)requests;
-(void)setRequests:(NSArray *)arg1 ;
-(void)setMediaLibrary:(VUIPlistMediaLibrary *)arg1 ;
-(void)setResponses:(NSArray *)arg1 ;
-(VUIPlistMediaLibrary *)mediaLibrary;
-(NSArray *)responses;
-(id)initWithMediaLibrary:(id)arg1 requests:(id)arg2 ;
-(id)_itemsFetchResponseWithRequest:(id)arg1 error:(id*)arg2 ;
-(id)_collectionsFetchResponseWithRequest:(id)arg1 error:(id*)arg2 ;
-(id)_fetchResponseWithMediaEntities:(id)arg1 request:(id)arg2 ;
-(id)_mediaEntityKindForRequest:(id)arg1 ;
@end

