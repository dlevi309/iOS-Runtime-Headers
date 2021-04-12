/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDate *)startDate;
-(double)duration;
-(unsigned long long)bytesDownloaded;
-(void)setExecuting:(double)arg1;
-(NSMutableSet *)requestUUIDs;
-(unsigned long long)bytesUploaded;
-(double)queueing;
-(double)executing;
-(unsigned long long)connections;
-(unsigned long long)connectionsCreated;
-(void)setQueueing:(double)arg1;
-(void)setBytesUploaded:(unsigned long long)arg1;
-(void)setBytesDownloaded:(unsigned long long)arg1;
-(void)setConnections:(unsigned long long)arg1;
-(void)setConnectionsCreated:(unsigned long long)arg1;
-(void)addRange:(id)arg1;
-(id)newRangeWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3;
-(NSMutableDictionary *)totalBytesByChunkProfile;
-(NSMutableDictionary *)chunkCountByChunkProfile;
-(NSMutableDictionary *)fileCountByChunkProfile;
-(NSArray *)rangesCopy;

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * rangesCopy; 
-(NSString *)description;
-(id)initWithDate:(id)arg1 ;
-(NSDate *)startDate;
-(double)duration;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(unsigned long long)bytesDownloaded;
-(void)setExecuting:(double)arg1 ;
-(NSMutableSet *)requestUUIDs;
-(unsigned long long)bytesUploaded;
-(double)queueing;
-(double)executing;
-(unsigned long long)connections;
-(unsigned long long)connectionsCreated;
-(void)setQueueing:(double)arg1 ;
-(void)setBytesUploaded:(unsigned long long)arg1 ;
-(void)setBytesDownloaded:(unsigned long long)arg1 ;
-(void)setConnections:(unsigned long long)arg1 ;
-(void)setConnectionsCreated:(unsigned long long)arg1 ;
-(void)addRange:(id)arg1 ;
-(void)setRanges:(NSMutableArray *)arg1 ;
-(NSMutableArray *)ranges;
-(double)other;
-(id)newRangeWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3 ;
-(NSMutableDictionary *)totalBytesByChunkProfile;
-(NSMutableDictionary *)chunkCountByChunkProfile;
-(NSMutableDictionary *)fileCountByChunkProfile;
-(NSArray *)rangesCopy;
-(double)absoluteStart;
-(double)absoluteStop;
-(long long)compareStartTime:(id)arg1 ;
-(void)rangesCompleted;
-(id)describeRanges;
-(long long)compareExecutingStartTime:(id)arg1 ;
@end

