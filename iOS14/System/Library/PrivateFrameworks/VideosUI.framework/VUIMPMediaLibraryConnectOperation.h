/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setProgressBlock:(id)arg1 ;
-(void)executionDidBegin;
-(id)init;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)progressBlock;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(id)initWithMediaLibrary:(id)arg1 ;
-(void)_startProgressTimer;
-(void)_stopProgressTimer;
-(void)setProgressTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_notifyClientOfProgress:(float)arg1 ;
-(NSObject*<OS_dispatch_source>)progressTimer;
@end

