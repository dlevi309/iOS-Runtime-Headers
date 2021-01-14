/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSArray;

@interface GEOStorefrontImagery : NSObject {

	unsigned long long _identifier;
	unsigned _buildId;
	unsigned short _bucketId;
	unsigned long long _timestamp;
	double _groundAltitude;
	GEOOrientedPosition _position;
	NSArray* _cameras;
	unsigned _dataFormatVersion;

}

@property (nonatomic,readonly) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned short bucketId;                    //@synthesize bucketId=_bucketId - In the implementation block
@property (nonatomic,readonly) unsigned buildId;                           //@synthesize buildId=_buildId - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) double groundAltitude;                      //@synthesize groundAltitude=_groundAltitude - In the implementation block
@property (nonatomic,readonly) GEOOrientedPosition position;               //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) NSArray * cameras;                          //@synthesize cameras=_cameras - In the implementation block
@property (nonatomic,readonly) unsigned dataFormatVersion;                 //@synthesize dataFormatVersion=_dataFormatVersion - In the implementation block
-(GEOOrientedPosition)position;
-(id)init;
-(unsigned)dataFormatVersion;
-(unsigned long long)timestamp;
-(NSArray *)cameras;
-(unsigned short)bucketId;
-(unsigned)buildId;
-(unsigned long long)identifier;
-(double)groundAltitude;
-(id)initWithPhotoPosition:(id)arg1 ;
@end

