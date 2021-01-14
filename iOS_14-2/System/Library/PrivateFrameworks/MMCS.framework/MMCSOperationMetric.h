/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
*/

#import <MMCS/MMCSOperationMetric.h>
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


@class NSDate, NSMutableDictionary, NSMutableSet, NSArray, NSMutableArray, NSString;

@interface MMCSOperationMetric : NSObject <MMCSOperationMetric> {

	double _queueing;
	double _executing;
	unsigned long long _bytesUploaded;
	unsigned long long _bytesDownloaded;
	unsigned long long _connections;
	unsigned long long _connectionsCreated;
	NSMutableDictionary* _totalBytesByChunkProfile;
	NSMutableDictionary* _chunkCountByChunkProfile;
	NSMutableDictionary* _fileCountByChunkProfile;
	NSMutableSet* _requestUUIDs;
	NSDate* _startDate;
	double _duration;
	NSMutableArray* _ranges;

}

@property (nonatomic,retain) NSDate * startDate;                                  //@synthesize startDate=_startDate - In the implementation block
@property (assign) double duration;                                               //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSMutableArray * ranges;                             //@synthesize ranges=_ranges - In the implementation block
@property (assign) double queueing;                                               //@synthesize queueing=_queueing - In the implementation block
@property (assign) double executing;                                              //@synthesize executing=_executing - In the implementation block
@property (assign) unsigned long long bytesUploaded;                              //@synthesize bytesUploaded=_bytesUploaded - In the implementation block
@property (assign) unsigned long long bytesDownloaded;                            //@synthesize bytesDownloaded=_bytesDownloaded - In the implementation block
@property (assign) unsigned long long connections;                                //@synthesize connections=_connections - In the implementation block
@property (assign) unsigned long long connectionsCreated;                         //@synthesize connectionsCreated=_connectionsCreated - In the implementation block
@property (readonly) NSMutableDictionary * totalBytesByChunkProfile;              //@synthesize totalBytesByChunkProfile=_totalBytesByChunkProfile - In the implementation block
@property (readonly) NSMutableDictionary * chunkCountByChunkProfile;              //@synthesize chunkCountByChunkProfile=_chunkCountByChunkProfile - In the implementation block
@property (readonly) NSMutableDictionary * fileCountByChunkProfile;               //@synthesize fileCountByChunkProfile=_fileCountByChunkProfile - In the implementation block
@property (readonly) NSMutableSet * requestUUIDs;                                 //@synthesize requestUUIDs=_requestUUIDs - In the implementation block
@property (readonly) NSArray * rangesCopy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setConnections:(unsigned long long)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSMutableArray *)ranges;
-(unsigned long long)connections;
-(unsigned long long)bytesDownloaded;
-(id)newRangeWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3 ;
-(NSDate *)startDate;
-(void)setConnectionsCreated:(unsigned long long)arg1 ;
-(void)setQueueing:(double)arg1 ;
-(long long)compareStartTime:(id)arg1 ;
-(NSArray *)rangesCopy;
-(NSMutableSet *)requestUUIDs;
-(NSMutableDictionary *)fileCountByChunkProfile;
-(void)setExecuting:(double)arg1 ;
-(unsigned long long)connectionsCreated;
-(double)absoluteStop;
-(NSString *)description;
-(void)setBytesDownloaded:(unsigned long long)arg1 ;
-(unsigned long long)bytesUploaded;
-(double)other;
-(NSMutableDictionary *)chunkCountByChunkProfile;
-(void)addRange:(id)arg1 ;
-(double)queueing;
-(NSMutableDictionary *)totalBytesByChunkProfile;
-(void)setRanges:(NSMutableArray *)arg1 ;
-(double)absoluteStart;
-(void)setBytesUploaded:(unsigned long long)arg1 ;
-(double)duration;
-(double)executing;
-(void)rangesCompleted;
-(id)describeRanges;
-(long long)compareExecutingStartTime:(id)arg1 ;
@end

