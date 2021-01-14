/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSDictionary;

@interface CKMetric : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _startDate;
	double _duration;
	double _queueing;
	double _executing;
	unsigned long long _bytesUploaded;
	unsigned long long _bytesDownloaded;
	unsigned long long _connections;
	unsigned long long _connectionsCreated;
	NSDictionary* _totalBytesByChunkProfile;
	NSDictionary* _chunkCountByChunkProfile;
	NSDictionary* _fileCountByChunkProfile;

}

@property (nonatomic,copy) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (assign) double duration;                                    //@synthesize duration=_duration - In the implementation block
@property (assign) double queueing;                                    //@synthesize queueing=_queueing - In the implementation block
@property (assign) double executing;                                   //@synthesize executing=_executing - In the implementation block
@property (assign) unsigned long long bytesUploaded;                   //@synthesize bytesUploaded=_bytesUploaded - In the implementation block
@property (assign) unsigned long long bytesDownloaded;                 //@synthesize bytesDownloaded=_bytesDownloaded - In the implementation block
@property (assign) unsigned long long connections;                     //@synthesize connections=_connections - In the implementation block
@property (assign) unsigned long long connectionsCreated;              //@synthesize connectionsCreated=_connectionsCreated - In the implementation block
@property (copy) NSDictionary * totalBytesByChunkProfile;              //@synthesize totalBytesByChunkProfile=_totalBytesByChunkProfile - In the implementation block
@property (copy) NSDictionary * chunkCountByChunkProfile;              //@synthesize chunkCountByChunkProfile=_chunkCountByChunkProfile - In the implementation block
@property (copy) NSDictionary * fileCountByChunkProfile;               //@synthesize fileCountByChunkProfile=_fileCountByChunkProfile - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)unionDictionary:(id)arg1 with:(id)arg2 ;
-(void)setConnections:(unsigned long long)arg1 ;
-(void)setTotalBytesByChunkProfile:(NSDictionary *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setChunkCountByChunkProfile:(NSDictionary *)arg1 ;
-(unsigned long long)connections;
-(unsigned long long)bytesDownloaded;
-(NSDate *)startDate;
-(id)CKPropertiesDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setConnectionsCreated:(unsigned long long)arg1 ;
-(void)setQueueing:(double)arg1 ;
-(id)ckPropertyDescriptionForChunkProfileDictionary:(id)arg1 ;
-(void)unionMetric:(id)arg1 ;
-(NSDictionary *)fileCountByChunkProfile;
-(void)setExecuting:(double)arg1 ;
-(unsigned long long)connectionsCreated;
-(id)description;
-(void)setBytesDownloaded:(unsigned long long)arg1 ;
-(unsigned long long)bytesUploaded;
-(NSDictionary *)chunkCountByChunkProfile;
-(double)queueing;
-(id)initWithCoder:(id)arg1 ;
-(void)setFileCountByChunkProfile:(NSDictionary *)arg1 ;
-(NSDictionary *)totalBytesByChunkProfile;
-(void)setBytesUploaded:(unsigned long long)arg1 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)executing;
@end

