/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOXPCReply.h>
#import <libobjc.A.dylib/GEOXPCReply.h>

@class GEODataRequestThrottlerToken, NSString;

@interface GEOThrottlerIsSafeReply : GEOXPCReply <GEOXPCReply> {

	double _nextSafeRequestTime;
	int _availableRequestCount;
	GEODataRequestThrottlerToken* _throttlerToken;

}

@property (assign,nonatomic) double nextSafeRequestTime;                                 //@synthesize nextSafeRequestTime=_nextSafeRequestTime - In the implementation block
@property (assign,nonatomic) int availableRequestCount;                                  //@synthesize availableRequestCount=_availableRequestCount - In the implementation block
@property (nonatomic,retain) GEODataRequestThrottlerToken * throttlerToken;              //@synthesize throttlerToken=_throttlerToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)nextSafeRequestTime;
-(void)setNextSafeRequestTime:(double)arg1 ;
-(int)availableRequestCount;
-(void)setAvailableRequestCount:(int)arg1 ;
-(GEODataRequestThrottlerToken *)throttlerToken;
-(void)setThrottlerToken:(GEODataRequestThrottlerToken *)arg1 ;
@end

