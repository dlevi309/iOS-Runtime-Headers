/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUIImage.h>

@class NSURL, QLThumbnailGenerationRequest;

@interface SearchUIQuickLookThumbnailImage : SearchUIImage {

	NSURL* _url;
	QLThumbnailGenerationRequest* _request;

}

@property (nonatomic,retain) NSURL * url;                               //@synthesize url=_url - In the implementation block
@property (__weak) QLThumbnailGenerationRequest * request;              //@synthesize request=_request - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(Class)classForCoder;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)url;
-(void)setRequest:(QLThumbnailGenerationRequest *)arg1 ;
-(QLThumbnailGenerationRequest *)request;
-(void)setUrl:(NSURL *)arg1 ;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
@end

