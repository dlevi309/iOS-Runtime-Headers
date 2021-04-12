/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(unsigned long long)identifier;
-(unsigned long long)timestamp;
-(GEOOrientedPosition)position;
-(unsigned)buildId;
-(unsigned)dataFormatVersion;
-(unsigned short)bucketId;
-(id)initWithPhotoPosition:(id)arg1 ;
-(double)groundAltitude;
-(NSArray *)cameras;
@end

