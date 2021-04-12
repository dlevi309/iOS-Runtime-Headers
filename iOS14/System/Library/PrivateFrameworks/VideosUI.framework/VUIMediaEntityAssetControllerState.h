/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface VUIMediaEntityAssetControllerState : NSObject <NSCopying> {

	BOOL _supportsCancellation;
	BOOL _supportsPausing;
	BOOL _renewsOfflineKeysAutomatically;
	BOOL _performsKeyFetchOnly;
	BOOL _allowsCellular;
	unsigned long long _status;
	double _downloadProgress;
	NSDate* _downloadExpirationDate;
	NSDate* _availabilityEndDate;
	unsigned long long _bytesToDownload;
	unsigned long long _bytesDownloaded;

}

@property (assign,nonatomic) unsigned long long status;                                          //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) double downloadProgress;                                            //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (assign,nonatomic) BOOL supportsCancellation;                                          //@synthesize supportsCancellation=_supportsCancellation - In the implementation block
@property (assign,nonatomic) BOOL supportsPausing;                                               //@synthesize supportsPausing=_supportsPausing - In the implementation block
@property (assign,nonatomic) BOOL renewsOfflineKeysAutomatically;                                //@synthesize renewsOfflineKeysAutomatically=_renewsOfflineKeysAutomatically - In the implementation block
@property (assign,nonatomic) BOOL allowsCellular;                                                //@synthesize allowsCellular=_allowsCellular - In the implementation block
@property (nonatomic,retain) NSDate * downloadExpirationDate;                                    //@synthesize downloadExpirationDate=_downloadExpirationDate - In the implementation block
@property (nonatomic,retain) NSDate * availabilityEndDate;                                       //@synthesize availabilityEndDate=_availabilityEndDate - In the implementation block
@property (assign,nonatomic) BOOL performsKeyFetchOnly;                                          //@synthesize performsKeyFetchOnly=_performsKeyFetchOnly - In the implementation block
@property (assign,nonatomic) unsigned long long bytesToDownload;                                 //@synthesize bytesToDownload=_bytesToDownload - In the implementation block
@property (assign,nonatomic) unsigned long long bytesDownloaded;                                 //@synthesize bytesDownloaded=_bytesDownloaded - In the implementation block
@property (getter=isDownloadInProgress,nonatomic,readonly) BOOL downloadInProgress; 
-(id)init;
-(unsigned long long)bytesDownloaded;
-(double)downloadProgress;
-(id)description;
-(void)setBytesDownloaded:(unsigned long long)arg1 ;
-(BOOL)allowsCellular;
-(void)setAllowsCellular:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)setDownloadProgress:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)status;
-(void)setAvailabilityEndDate:(NSDate *)arg1 ;
-(NSDate *)downloadExpirationDate;
-(NSDate *)availabilityEndDate;
-(BOOL)renewsOfflineKeysAutomatically;
-(void)setSupportsCancellation:(BOOL)arg1 ;
-(void)setSupportsPausing:(BOOL)arg1 ;
-(void)setBytesToDownload:(unsigned long long)arg1 ;
-(unsigned long long)bytesToDownload;
-(BOOL)supportsCancellation;
-(BOOL)supportsPausing;
-(BOOL)isDownloadInProgress;
-(void)setRenewsOfflineKeysAutomatically:(BOOL)arg1 ;
-(void)setDownloadExpirationDate:(NSDate *)arg1 ;
-(BOOL)performsKeyFetchOnly;
-(void)setPerformsKeyFetchOnly:(BOOL)arg1 ;
@end

