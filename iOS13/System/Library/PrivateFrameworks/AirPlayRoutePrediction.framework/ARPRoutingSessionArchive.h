/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
*/

#import <AirPlayRoutePrediction/AirPlayRoutePrediction-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface ARPRoutingSessionArchive : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _sessions;
	double _routingSessionTimeout;

}

@property (nonatomic,readonly) NSArray * sessions;                        //@synthesize sessions=_sessions - In the implementation block
@property (nonatomic,readonly) double routingSessionTimeout;              //@synthesize routingSessionTimeout=_routingSessionTimeout - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)sessions;
-(id)initWithSessions:(id)arg1 routingSessionTimeout:(double)arg2 ;
-(double)routingSessionTimeout;
@end

