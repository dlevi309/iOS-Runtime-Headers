/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MapsSuggestionsETARequirements : NSObject <NSCopying> {

	double _maxAge;
	double _maxDistance;
	double _minAccuracy;

}

@property (nonatomic,readonly) double maxAge;                   //@synthesize maxAge=_maxAge - In the implementation block
@property (nonatomic,readonly) double maxDistance;              //@synthesize maxDistance=_maxDistance - In the implementation block
@property (nonatomic,readonly) double minAccuracy;              //@synthesize minAccuracy=_minAccuracy - In the implementation block
-(double)maxAge;
-(id)initWithMaxAge:(double)arg1 maxDistance:(double)arg2 minAccuracy:(double)arg3 ;
-(double)minAccuracy;
-(double)maxDistance;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

