/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateInterval;

@interface GEORoutePreloaderStatistics : NSObject <NSSecureCoding> {

	NSDateInterval* _dateInterval;
	long long _transportType;
	unsigned long long _tilesPreloaded;
	unsigned long long _tilesUsed;
	unsigned long long _tilesMissed;

}

@property (nonatomic,copy,readonly) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (assign,nonatomic) long long transportType;                           //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) unsigned long long tilesPreloaded;                 //@synthesize tilesPreloaded=_tilesPreloaded - In the implementation block
@property (assign,nonatomic) unsigned long long tilesUsed;                      //@synthesize tilesUsed=_tilesUsed - In the implementation block
@property (assign,nonatomic) unsigned long long tilesMissed;                    //@synthesize tilesMissed=_tilesMissed - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDateInterval *)dateInterval;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTransportType:(long long)arg1 ;
-(long long)transportType;
-(unsigned long long)tilesUsed;
-(unsigned long long)tilesPreloaded;
-(unsigned long long)tilesMissed;
-(id)initWithDateInterval:(id)arg1 transportType:(long long)arg2 tilesPreloaded:(unsigned long long)arg3 tilesUsed:(unsigned long long)arg4 tilesMissed:(unsigned long long)arg5 ;
-(void)setTilesUsed:(unsigned long long)arg1 ;
-(void)setTilesPreloaded:(unsigned long long)arg1 ;
-(void)setTilesMissed:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

