/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<_GEONetworkDefaultsServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<_GEONetworkDefaultsServerProxyDelegate>)delegate;
-(void)setDelegate:(id<_GEONetworkDefaultsServerProxyDelegate>)arg1 ;
-(void)updateNetworkDefaults:(/*^block*/id)arg1 ;
-(void)_networkDefaultsDidChange;
@end

