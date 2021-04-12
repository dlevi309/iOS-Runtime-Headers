/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomPresentationFeed.framework/SymptomPresentationFeed
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface NWNetworkPredictions : NSObject <NSSecureCoding> {

	NSDate* _changePointAt;
	long long _toQuality;
	double _confidence;
	long long _resolutionSeconds;

}

@property (readonly) NSDate * changePointAt;                   //@synthesize changePointAt=_changePointAt - In the implementation block
@property (readonly) long long toQuality;                      //@synthesize toQuality=_toQuality - In the implementation block
@property (readonly) double confidence;                        //@synthesize confidence=_confidence - In the implementation block
@property (readonly) long long resolutionSeconds;              //@synthesize resolutionSeconds=_resolutionSeconds - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)confidence;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSpec:(id)arg1 toQuality:(long long)arg2 withConfidence:(double)arg3 resolutionSeconds:(unsigned)arg4 ;
-(NSDate *)changePointAt;
-(long long)toQuality;
-(long long)resolutionSeconds;
@end

