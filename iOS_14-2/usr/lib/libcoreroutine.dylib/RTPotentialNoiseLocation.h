/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class RTLocation;

@interface RTPotentialNoiseLocation : NSObject {

	BOOL _isNoise;
	RTLocation* _location;

}

@property (nonatomic,readonly) RTLocation * location;                    //@synthesize location=_location - In the implementation block
@property (assign,setter=setNoise:,nonatomic) BOOL isNoise;              //@synthesize isNoise=_isNoise - In the implementation block
-(RTLocation *)location;
-(id)initWithLocation:(id)arg1 ;
-(void)setNoise:(BOOL)arg1 ;
-(BOOL)isNoise;
@end

