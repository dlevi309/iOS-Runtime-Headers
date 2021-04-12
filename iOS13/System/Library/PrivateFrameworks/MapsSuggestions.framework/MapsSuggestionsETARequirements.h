/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)maxDistance;
-(double)maxAge;
-(double)minAccuracy;
-(id)initWithMaxAge:(double)arg1 maxDistance:(double)arg2 minAccuracy:(double)arg3 ;
@end

