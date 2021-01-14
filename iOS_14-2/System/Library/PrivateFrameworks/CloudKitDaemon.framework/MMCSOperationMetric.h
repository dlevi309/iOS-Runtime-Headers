/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

@class NSDate, NSMutableDictionary, NSMutableSet, NSArray;


@protocol MMCSOperationMetric <NSObject>
@property (readonly) NSDate * startDate; 
@property (readonly) double duration; 
@property (assign) double queueing; 
@property (assign) double executing; 
@property (assign) unsigned long long bytesUploaded; 
@property (assign) unsigned long long bytesDownloaded; 
@property (assign) unsigned long long connections; 
@property (assign) unsigned long long connectionsCreated; 
@property (readonly) NSMutableDictionary * totalBytesByChunkProfile; 
@property (readonly) NSMutableDictionary * chunkCountByChunkProfile; 
@property (readonly) NSMutableDictionary * fileCountByChunkProfile; 
@property (readonly) NSMutableSet * requestUUIDs; 
@property (readonly) NSArray * rangesCopy; 
@required
-(void)setConnections:(unsigned long long)arg1;
-(unsigned long long)connections;
-(unsigned long long)bytesDownloaded;
-(id)newRangeWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3;
-(NSDate *)startDate;
-(void)setConnectionsCreated:(unsigned long long)arg1;
-(void)setQueueing:(double)arg1;
-(NSArray *)rangesCopy;
-(NSMutableSet *)requestUUIDs;
-(NSMutableDictionary *)fileCountByChunkProfile;
-(void)setExecuting:(double)arg1;
-(unsigned long long)connectionsCreated;
-(void)setBytesDownloaded:(unsigned long long)arg1;
-(unsigned long long)bytesUploaded;
-(NSMutableDictionary *)chunkCountByChunkProfile;
-(void)addRange:(id)arg1;
-(double)queueing;
-(NSMutableDictionary *)totalBytesByChunkProfile;
-(void)setBytesUploaded:(unsigned long long)arg1;
-(double)duration;
-(double)executing;

@end

