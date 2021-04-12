/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@protocol CKNetworkImageDownloading;
#import <WorkflowEditor/WorkflowEditor-Structs.h>
@class NSURL, UIImage;

@interface CKNetworkImageSpecifier : NSObject {

	NSURL* _url;
	UIImage* _defaultImage;
	id<CKNetworkImageDownloading> _imageDownloader;
	id _scenePath;
	CGRect _cropRect;

}

@property (nonatomic,copy,readonly) NSURL * url;                                           //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) UIImage * defaultImage;                                     //@synthesize defaultImage=_defaultImage - In the implementation block
@property (nonatomic,readonly) id<CKNetworkImageDownloading> imageDownloader;              //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (nonatomic,readonly) id scenePath;                                               //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,readonly) CGRect cropRect;                                            //@synthesize cropRect=_cropRect - In the implementation block
-(CGRect)cropRect;
-(UIImage *)defaultImage;
-(NSURL *)url;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id<CKNetworkImageDownloading>)imageDownloader;
-(id)initWithURL:(id)arg1 defaultImage:(id)arg2 imageDownloader:(id)arg3 scenePath:(id)arg4 cropRect:(CGRect)arg5 ;
-(id)scenePath;
@end

