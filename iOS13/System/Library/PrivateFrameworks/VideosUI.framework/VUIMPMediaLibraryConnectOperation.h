/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUICore/VUIAsynchronousOperation.h>

@protocol OS_dispatch_source;
@class NSError, MPMediaLibrary, NSObject;

@interface VUIMPMediaLibraryConnectOperation : VUIAsynchronousOperation {

	BOOL _success;
	/*^block*/id _progressBlock;
	NSError* _error;
	MPMediaLibrary* _mediaLibrary;
	NSObject*<OS_dispatch_source> _progressTimer;

}

@property (assign,nonatomic) BOOL success;                                             //@synthesize success=_success - In the implementation block
@property (nonatomic,copy) NSError * error;                                            //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;                            //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> progressTimer;              //@synthesize progressTimer=_progressTimer - In the implementation block
@property (nonatomic,copy) id progressBlock;                                           //@synthesize progressBlock=_progressBlock - In the implementation block
-(id)init;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(void)executionDidBegin;
-(NSObject*<OS_dispatch_source>)progressTimer;
-(void)setProgressTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 ;
-(void)_startProgressTimer;
-(void)_stopProgressTimer;
-(void)_notifyClientOfProgress:(float)arg1 ;
@end

