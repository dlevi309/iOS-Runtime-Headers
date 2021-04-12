/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol VUIImageLoadingOperation;
@class NSOperation;

@interface VUIImageLoadContext : NSObject {

	NSOperation*<VUIImageLoadingOperation> _imageLoadOperation;
	unsigned long long _requestCount;

}

@property (nonatomic,retain) NSOperation*<VUIImageLoadingOperation> imageLoadOperation;              //@synthesize imageLoadOperation=_imageLoadOperation - In the implementation block
@property (assign,nonatomic) unsigned long long requestCount;                                        //@synthesize requestCount=_requestCount - In the implementation block
-(void)setRequestCount:(unsigned long long)arg1 ;
-(unsigned long long)requestCount;
-(NSOperation*<VUIImageLoadingOperation>)imageLoadOperation;
-(void)setImageLoadOperation:(NSOperation*<VUIImageLoadingOperation>)arg1 ;
@end

