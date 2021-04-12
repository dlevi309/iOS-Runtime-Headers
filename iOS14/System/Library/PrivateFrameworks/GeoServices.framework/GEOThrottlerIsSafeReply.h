/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeToXPCDictionary:(id)arg1 ;
-(GEODataRequestThrottlerToken *)throttlerToken;
-(int)availableRequestCount;
-(BOOL)isValid;
-(void)setAvailableRequestCount:(int)arg1 ;
-(void)setNextSafeRequestTime:(double)arg1 ;
-(void)setThrottlerToken:(GEODataRequestThrottlerToken *)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
-(double)nextSafeRequestTime;
@end

