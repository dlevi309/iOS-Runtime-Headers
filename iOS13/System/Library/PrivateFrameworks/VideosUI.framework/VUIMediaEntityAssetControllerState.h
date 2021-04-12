/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VUIMediaEntityAssetControllerState : NSObject <NSCopying> {

	BOOL _supportsCancellation;
	BOOL _supportsPausing;
	unsigned long long _status;
	double _downloadProgress;
	unsigned long long _bytesToDownload;
	unsigned long long _bytesDownloaded;

}

@property (assign,nonatomic) unsigned long long status;                                          //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) double downloadProgress;                                            //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (assign,nonatomic) BOOL supportsCancellation;                                          //@synthesize supportsCancellation=_supportsCancellation - In the implementation block
@property (assign,nonatomic) BOOL supportsPausing;                                               //@synthesize supportsPausing=_supportsPausing - In the implementation block
@property (assign,nonatomic) unsigned long long bytesToDownload;                                 //@synthesize bytesToDownload=_bytesToDownload - In the implementation block
@property (assign,nonatomic) unsigned long long bytesDownloaded;                                 //@synthesize bytesDownloaded=_bytesDownloaded - In the implementation block
@property (getter=isDownloadInProgress,nonatomic,readonly) BOOL downloadInProgress; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
-(unsigned long long)bytesDownloaded;
-(void)setBytesDownloaded:(unsigned long long)arg1 ;
-(double)downloadProgress;
-(void)setDownloadProgress:(double)arg1 ;
-(void)setSupportsCancellation:(BOOL)arg1 ;
-(void)setSupportsPausing:(BOOL)arg1 ;
-(void)setBytesToDownload:(unsigned long long)arg1 ;
-(unsigned long long)bytesToDownload;
-(BOOL)supportsCancellation;
-(BOOL)supportsPausing;
-(BOOL)isDownloadInProgress;
@end

