/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface GEORequestCounterProactiveTileDownloadPolicyInfo : NSObject <NSSecureCoding> {

	unsigned char _policy;
	NSDate* _startTimestamp;
	NSDate* _endTimestamp;
	unsigned long long _tilesConsidered;
	unsigned long long _successCount;
	unsigned long long _failureCount;
	unsigned long long _bytesDownloaded;

}

@property (nonatomic,readonly) unsigned char policy;                            //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) NSDate * startTimestamp;                         //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (nonatomic,readonly) NSDate * endTimestamp;                           //@synthesize endTimestamp=_endTimestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long tilesConsidered;              //@synthesize tilesConsidered=_tilesConsidered - In the implementation block
@property (nonatomic,readonly) unsigned long long successCount;                 //@synthesize successCount=_successCount - In the implementation block
@property (nonatomic,readonly) unsigned long long failureCount;                 //@synthesize failureCount=_failureCount - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesDownloaded;              //@synthesize bytesDownloaded=_bytesDownloaded - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithPolicy:(unsigned char)arg1 startTimestamp:(id)arg2 endTimestamp:(id)arg3 tilesConsidered:(unsigned long long)arg4 successCount:(unsigned long long)arg5 failureCount:(unsigned long long)arg6 bytesDownloaded:(unsigned long long)arg7 ;
-(unsigned char)policy;
-(unsigned long long)bytesDownloaded;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)startTimestamp;
-(NSDate *)endTimestamp;
-(unsigned long long)tilesConsidered;
-(unsigned long long)successCount;
-(unsigned long long)failureCount;
-(id)initWithCoder:(id)arg1 ;
@end

