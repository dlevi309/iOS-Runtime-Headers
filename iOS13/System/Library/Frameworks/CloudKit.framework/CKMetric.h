/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface CKMetric : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _startDate;
	double _duration;
	double _queueing;
	double _executing;
	unsigned long long _bytesUploaded;
	unsigned long long _bytesDownloaded;
	unsigned long long _connections;
	unsigned long long _connectionsCreated;

}

@property (nonatomic,retain) NSDate * startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (assign) double duration;                                    //@synthesize duration=_duration - In the implementation block
@property (assign) double queueing;                                    //@synthesize queueing=_queueing - In the implementation block
@property (assign) double executing;                                   //@synthesize executing=_executing - In the implementation block
@property (assign) unsigned long long bytesUploaded;                   //@synthesize bytesUploaded=_bytesUploaded - In the implementation block
@property (assign) unsigned long long bytesDownloaded;                 //@synthesize bytesDownloaded=_bytesDownloaded - In the implementation block
@property (assign) unsigned long long connections;                     //@synthesize connections=_connections - In the implementation block
@property (assign) unsigned long long connectionsCreated;              //@synthesize connectionsCreated=_connectionsCreated - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(double)duration;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(unsigned long long)bytesDownloaded;
-(void)setExecuting:(double)arg1 ;
-(id)CKPropertiesDescription;
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
-(void)unionMetric:(id)arg1 ;
@end

