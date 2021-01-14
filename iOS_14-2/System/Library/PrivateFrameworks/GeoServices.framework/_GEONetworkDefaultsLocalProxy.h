/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/_GEONetworkDefaultsServerProxy.h>
#import <libobjc.A.dylib/GEOPListStateCapturing.h>

@protocol _GEONetworkDefaultsServerProxyDelegate;
@class geo_isolater, NSMutableArray, NSString;

@interface _GEONetworkDefaultsLocalProxy : NSObject <_GEONetworkDefaultsServerProxy, GEOPListStateCapturing> {

	id<_GEONetworkDefaultsServerProxyDelegate> _delegate;
	geo_isolater* _isolation;
	NSMutableArray* _updateCompletionHandlers;
	unsigned long long _stateCaptureHandle;

}

@property (assign,nonatomic,__weak) id<_GEONetworkDefaultsServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)captureStatePlistWithHints:(os_state_hints_s*)arg1 ;
-(id<_GEONetworkDefaultsServerProxyDelegate>)delegate;
-(void)_processNetworkDefaultsResponse:(id)arg1 data:(id)arg2 error:(id)arg3 request:(id)arg4 ;
-(void)updateNetworkDefaults:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<_GEONetworkDefaultsServerProxyDelegate>)arg1 ;
-(void)_updateNetworkDefaults;
-(id)_urlRequestForNetworkDefaults;
-(void)_updateWithNewConfig:(id)arg1 error:(id)arg2 request:(id)arg3 response:(id)arg4 ;
@end

