/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOProtobufSessionTaskDelegate.h>

@protocol GEOServiceRequestConfiguring;
@class GEOProtobufSessionTask, PBRequest, NSString, GEOApplicationAuditToken, GEOMapServiceTraits, GEODataRequestThrottlerToken;

@interface _GEODataSessionTaskRequesterOp : NSObject <GEOProtobufSessionTaskDelegate> {

	GEOProtobufSessionTask* _task;
	BOOL _canceled;
	PBRequest* _request;
	NSString* _debugRequestName;
	/*^block*/id _completionHandler;
	/*^block*/id _validationHandler;
	id<GEOServiceRequestConfiguring> _config;
	NSString* _appIdentifier;
	GEOApplicationAuditToken* _auditToken;
	SCD_Struct_GE94 _dataRequestKind;
	GEOMapServiceTraits* _traits;
	double _timeout;
	GEODataRequestThrottlerToken* _throttleToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)cancel;
-(void)_cleanup;
-(void)protobufSession:(id)arg1 didCompleteTask:(id)arg2 ;
-(id)protobufSession:(id)arg1 validateResponse:(id)arg2 ;
-(id)initWithRequest:(id)arg1 auditToken:(id)arg2 config:(id)arg3 timeout:(double)arg4 dataRequestKind:(SCD_Struct_GE94)arg5 traits:(id)arg6 throttleToken:(id)arg7 ;
-(void)startWithValidationHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_fullURL;
-(id)_userInfoForTask:(id)arg1 ;
@end

