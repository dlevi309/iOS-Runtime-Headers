/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEODataSession;
#import <GeoServices/GeoServices-Structs.h>
@interface GEOProtobufSession : NSObject {

	id<GEODataSession> _dataSession;

}

@property (nonatomic,readonly) id<GEODataSession> dataSession;              //@synthesize dataSession=_dataSession - In the implementation block
+(id)sharedDelegateQueue;
+(id)sharedProtobufSession;
-(id)init;
-(id)taskWithRequest:(id)arg1 requestTypeCode:(unsigned)arg2 responseClass:(Class)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 ;
-(id)initWithDataSession:(id)arg1 ;
-(id)taskWithRequestKind:(SCD_Struct_GE91)arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 needsProxy:(BOOL)arg5 auditToken:(id)arg6 traits:(id)arg7 delegate:(id)arg8 delegateQueue:(id)arg9 requestCounterTicket:(id)arg10 multipathServiceType:(unsigned long long)arg11 multipathAlternatePort:(unsigned long long)arg12 throttleToken:(id)arg13 ;
-(id<GEODataSession>)dataSession;
@end

