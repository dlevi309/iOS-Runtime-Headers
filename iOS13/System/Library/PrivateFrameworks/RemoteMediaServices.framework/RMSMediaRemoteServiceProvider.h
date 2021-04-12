/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/

#import <libobjc.A.dylib/RMSServiceProvider.h>

@protocol RMSServiceProviderDelegate;
@class NSMapTable, NSString;

@interface RMSMediaRemoteServiceProvider : NSObject <RMSServiceProvider> {

	void* _televisionController;
	NSMapTable* _services;
	id<RMSServiceProviderDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<RMSServiceProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<RMSServiceProviderDelegate>)delegate;
-(void)setDelegate:(id<RMSServiceProviderDelegate>)arg1 ;
-(void)endDiscovery;
-(void)beginDiscovery;
-(void)_didDiscoverTelevision:(void*)arg1 ;
-(void)_didRemoveTelevision:(void*)arg1 ;
-(id)_serviceWithTelevision:(void*)arg1 ;
@end

