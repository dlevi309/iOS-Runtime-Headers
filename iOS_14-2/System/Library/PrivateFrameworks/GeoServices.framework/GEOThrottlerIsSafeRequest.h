/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOXPCRequest.h>
#import <libobjc.A.dylib/GEOXPCRequest.h>

@class GEODataRequestThrottlerToken, NSString;

@interface GEOThrottlerIsSafeRequest : GEOXPCRequest <GEOXPCRequest> {

	int _requestKindType;
	int _requestKindSubtype;
	BOOL _nextSafeRequestTime;
	BOOL _availableRequestCount;
	BOOL _includeToken;
	GEODataRequestThrottlerToken* _throttlerToken;

}

@property (assign,nonatomic) int requestKindType;                                        //@synthesize requestKindType=_requestKindType - In the implementation block
@property (assign,nonatomic) int requestKindSubtype;                                     //@synthesize requestKindSubtype=_requestKindSubtype - In the implementation block
@property (assign,nonatomic) BOOL nextSafeRequestTime;                                   //@synthesize nextSafeRequestTime=_nextSafeRequestTime - In the implementation block
@property (assign,nonatomic) BOOL availableRequestCount;                                 //@synthesize availableRequestCount=_availableRequestCount - In the implementation block
@property (assign,nonatomic) BOOL includeToken;                                          //@synthesize includeToken=_includeToken - In the implementation block
@property (nonatomic,retain) GEODataRequestThrottlerToken * throttlerToken;              //@synthesize throttlerToken=_throttlerToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)replyClass;
-(int)requestKindSubtype;
-(BOOL)includeToken;
-(void)encodeToXPCDictionary:(id)arg1 ;
-(GEODataRequestThrottlerToken *)throttlerToken;
-(BOOL)availableRequestCount;
-(BOOL)expectsReply;
-(BOOL)isValid;
-(void)setAvailableRequestCount:(BOOL)arg1 ;
-(void)setIncludeToken:(BOOL)arg1 ;
-(void)setRequestKindType:(int)arg1 ;
-(void)setNextSafeRequestTime:(BOOL)arg1 ;
-(void)setThrottlerToken:(GEODataRequestThrottlerToken *)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
-(void)setRequestKindSubtype:(int)arg1 ;
-(BOOL)nextSafeRequestTime;
-(int)requestKindType;
@end

