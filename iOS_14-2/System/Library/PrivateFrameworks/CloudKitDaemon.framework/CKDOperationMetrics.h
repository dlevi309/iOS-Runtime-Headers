/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/MMCSOperationMetric.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSMutableDictionary, NSMutableSet, NSArray, NSMutableArray, NSString;

@interface CKDOperationMetrics : NSObject <MMCSOperationMetric, NSCopying, NSSecureCoding> {

	NSDate* _startDate;
	double _duration;
	double _queueing;
	double _executing;
	unsigned long long _bytesUploaded;
	unsigned long long _bytesDownloaded;
	unsigned long long _connections;
	unsigned long long _connectionsCreated;
	unsigned long long _recordsUploaded;
	unsigned long long _recordsDownloaded;
	unsigned long long _recordsDeleted;
	unsigned long long _assetsUploaded;
	unsigned long long _assetsUploadedFileSize;
	unsigned long long _assetsDownloaded;
	unsigned long long _assetsDownloadedFileSize;
	unsigned long long _requestCount;
	unsigned long long _retries;
	NSMutableSet* _requestUUIDs;
	NSMutableDictionary* _requestOperationCountsByType;
	NSMutableDictionary* _totalBytesByChunkProfile;
	NSMutableDictionary* _chunkCountByChunkProfile;
	NSMutableDictionary* _fileCountByChunkProfile;
	NSMutableArray* _ranges;

}

@property (nonatomic,retain) NSMutableArray * ranges;                                         //@synthesize ranges=_ranges - In the implementation block
@property (retain) NSDate * startDate;                                                        //@synthesize startDate=_startDate - In the implementation block
@property (assign) double duration;                                                           //@synthesize duration=_duration - In the implementation block
@property (assign) double queueing;                                                           //@synthesize queueing=_queueing - In the implementation block
@property (assign) double executing;                                                          //@synthesize executing=_executing - In the implementation block
@property (assign) unsigned long long bytesUploaded;                                          //@synthesize bytesUploaded=_bytesUploaded - In the implementation block
@property (assign) unsigned long long bytesDownloaded;                                        //@synthesize bytesDownloaded=_bytesDownloaded - In the implementation block
@property (assign) unsigned long long connections;                                            //@synthesize connections=_connections - In the implementation block
@property (assign) unsigned long long connectionsCreated;                                     //@synthesize connectionsCreated=_connectionsCreated - In the implementation block
@property (assign) unsigned long long recordsUploaded;                                        //@synthesize recordsUploaded=_recordsUploaded - In the implementation block
@property (assign) unsigned long long recordsDownloaded;                                      //@synthesize recordsDownloaded=_recordsDownloaded - In the implementation block
@property (assign) unsigned long long recordsDeleted;                                         //@synthesize recordsDeleted=_recordsDeleted - In the implementation block
@property (assign) unsigned long long assetsUploaded;                                         //@synthesize assetsUploaded=_assetsUploaded - In the implementation block
@property (assign) unsigned long long assetsUploadedFileSize;                                 //@synthesize assetsUploadedFileSize=_assetsUploadedFileSize - In the implementation block
@property (assign) unsigned long long assetsDownloaded;                                       //@synthesize assetsDownloaded=_assetsDownloaded - In the implementation block
@property (assign) unsigned long long assetsDownloadedFileSize;                               //@synthesize assetsDownloadedFileSize=_assetsDownloadedFileSize - In the implementation block
@property (assign) unsigned long long requestCount;                                           //@synthesize requestCount=_requestCount - In the implementation block
@property (assign) unsigned long long retries;                                                //@synthesize retries=_retries - In the implementation block
@property (readonly) NSMutableSet * requestUUIDs;                                             //@synthesize requestUUIDs=_requestUUIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestOperationCountsByType;              //@synthesize requestOperationCountsByType=_requestOperationCountsByType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * totalBytesByChunkProfile;                  //@synthesize totalBytesByChunkProfile=_totalBytesByChunkProfile - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * chunkCountByChunkProfile;                  //@synthesize chunkCountByChunkProfile=_chunkCountByChunkProfile - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fileCountByChunkProfile;                   //@synthesize fileCountByChunkProfile=_fileCountByChunkProfile - In the implementation block
@property (readonly) NSArray * rangesCopy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setConnections:(unsigned long long)arg1 ;
-(void)setRequestCount:(unsigned long long)arg1 ;
-(void)setRecordsDeleted:(unsigned long long)arg1 ;
-(unsigned long long)assetsDownloaded;
-(void)setTotalBytesByChunkProfile:(NSMutableDictionary *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setRecordsUploaded:(unsigned long long)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setChunkCountByChunkProfile:(NSMutableDictionary *)arg1 ;
-(id)init;
-(NSMutableArray *)ranges;
-(unsigned long long)connections;
-(unsigned long long)bytesDownloaded;
-(id)newRangeWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3 ;
-(unsigned long long)recordsUploaded;
-(void)setAssetsDownloadedFileSize:(unsigned long long)arg1 ;
-(NSDate *)startDate;
-(id)CKPropertiesDescription;
-(void)setAssetsUploaded:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAssetsDownloaded:(unsigned long long)arg1 ;
-(void)setConnectionsCreated:(unsigned long long)arg1 ;
-(unsigned long long)assetsUploadedFileSize;
-(void)setQueueing:(double)arg1 ;
-(void)setAssetsUploadedFileSize:(unsigned long long)arg1 ;
-(NSArray *)rangesCopy;
-(NSMutableSet *)requestUUIDs;
-(NSMutableDictionary *)fileCountByChunkProfile;
-(void)setExecuting:(double)arg1 ;
-(void)setRetries:(unsigned long long)arg1 ;
-(unsigned long long)connectionsCreated;
-(unsigned long long)requestCount;
-(NSString *)description;
-(NSMutableDictionary *)requestOperationCountsByType;
-(unsigned long long)recordsDeleted;
-(void)addCKSpecificMetricsFromMetrics:(id)arg1 ;
-(void)addRequestOperationCountsByOperationType:(id)arg1 ;
-(void)setBytesDownloaded:(unsigned long long)arg1 ;
-(unsigned long long)bytesUploaded;
-(void)setRecordsDownloaded:(unsigned long long)arg1 ;
-(NSMutableDictionary *)chunkCountByChunkProfile;
-(unsigned long long)retries;
-(void)addRange:(id)arg1 ;
-(unsigned long long)assetsUploaded;
-(double)queueing;
-(id)initWithCoder:(id)arg1 ;
-(void)setFileCountByChunkProfile:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)totalBytesByChunkProfile;
-(void)setRanges:(NSMutableArray *)arg1 ;
-(void)setRequestOperationCountsByType:(NSMutableDictionary *)arg1 ;
-(unsigned long long)recordsDownloaded;
-(id)_initWithStartDate:(id)arg1 ;
-(void)setBytesUploaded:(unsigned long long)arg1 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)assetsDownloadedFileSize;
-(double)executing;
@end

