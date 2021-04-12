/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isNoise;
-(void)setNoise:(BOOL)arg1 ;
@end

