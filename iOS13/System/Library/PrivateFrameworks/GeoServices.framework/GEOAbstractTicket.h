/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOMapServiceTraits, NSDictionary, GEODataRequestThrottlerToken;

@interface GEOAbstractTicket : NSObject {

	GEOMapServiceTraits* _traits;
	unsigned long long _cachePolicy;
	NSDictionary* _responseUserInfo;
	BOOL _cancelled;
	GEODataRequestThrottlerToken* _throttlerToken;

}

@property (nonatomic,readonly) GEOMapServiceTraits * traits;                 //@synthesize traits=_traits - In the implementation block
@property (assign,nonatomic) unsigned long long cachePolicy;                 //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseUserInfo;              //@synthesize responseUserInfo=_responseUserInfo - In the implementation block
@property (getter=isCancelled,readonly) BOOL cancelled; 
-(id)init;
-(id)description;
-(void)cancel;
-(BOOL)isCancelled;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(unsigned long long)cachePolicy;
-(GEOMapServiceTraits *)traits;
-(id)initWithTraits:(id)arg1 ;
-(void)setThrottlerToken:(id)arg1 ;
-(NSDictionary *)responseUserInfo;
@end

