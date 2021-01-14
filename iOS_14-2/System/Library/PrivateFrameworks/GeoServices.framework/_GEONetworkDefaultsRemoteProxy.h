/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/_GEONetworkDefaultsServerProxy.h>

@protocol _GEONetworkDefaultsServerProxyDelegate;
@class geo_isolater, NSMutableArray, NSString;

@interface _GEONetworkDefaultsRemoteProxy : NSObject <_GEONetworkDefaultsServerProxy> {

	id<_GEONetworkDefaultsServerProxyDelegate> _delegate;
	geo_isolater* _isolation;
	NSMutableArray* _updateCompletionHandlers;
	int _configChangedToken;

}

@property (assign,nonatomic,__weak) id<_GEONetworkDefaultsServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<_GEONetworkDefaultsServerProxyDelegate>)delegate;
-(void)_networkDefaultsDidChange;
-(void)updateNetworkDefaults:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<_GEONetworkDefaultsServerProxyDelegate>)arg1 ;
-(void)dealloc;
@end

