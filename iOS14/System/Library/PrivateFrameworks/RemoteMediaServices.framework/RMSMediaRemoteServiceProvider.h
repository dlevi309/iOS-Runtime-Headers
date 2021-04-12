/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign,nonatomic,__weak) id<RMSServiceProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)beginDiscovery;
-(id<RMSServiceProviderDelegate>)delegate;
-(void)setDelegate:(id<RMSServiceProviderDelegate>)arg1 ;
-(void)endDiscovery;
-(void)dealloc;
-(void)_didDiscoverTelevision:(void*)arg1 ;
-(void)_didRemoveTelevision:(void*)arg1 ;
-(id)_serviceWithTelevision:(void*)arg1 ;
@end

