/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUIImage.h>

@class SFSearchResult, QLThumbnailGenerationRequest;

@interface SearchUIQuickLookThumbnailImage : SearchUIImage {

	BOOL _isCompact;
	SFSearchResult* _result;
	QLThumbnailGenerationRequest* _request;

}

@property (nonatomic,retain) SFSearchResult * result;                   //@synthesize result=_result - In the implementation block
@property (__weak) QLThumbnailGenerationRequest * request;              //@synthesize request=_request - In the implementation block
@property (assign) BOOL isCompact;                                      //@synthesize isCompact=_isCompact - In the implementation block
-(void)setResult:(SFSearchResult *)arg1 ;
-(void)setRequest:(QLThumbnailGenerationRequest *)arg1 ;
-(BOOL)isCompact;
-(id)url;
-(QLThumbnailGenerationRequest *)request;
-(Class)classForCoder;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(SFSearchResult *)result;
-(void)setIsCompact:(BOOL)arg1 ;
-(id)initWithResult:(id)arg1 isCompact:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

