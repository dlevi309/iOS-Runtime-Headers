/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
*/

#import <CoreAudio/CoreAudio-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSXPCListenerEndpoint, NSString;

@interface Core_Audio_Gateway : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	NSXPCListenerEndpoint* _endpoint;
	shared_ptr<HAL::Client::ObjectIDMap>* _clientObjectMap;

}

@property (nonatomic,retain) NSXPCListenerEndpoint * endpoint;                                     //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                                             //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) shared_ptr<HAL::Client::ObjectIDMap>* clientObjectMap;              //@synthesize clientObjectMap=_clientObjectMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSXPCListener *)listener;
-(NSXPCListenerEndpoint *)endpoint;
-(void)setEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(id)initWithObjectMap:(shared_ptr<HAL::Client::ObjectIDMap>*)arg1 ;
-(void)handle_server_disconnected;
-(void)handle_server_reconnected;
-(BOOL)has_endpoint;
-(void)create_endpoint;
-(void)destroy_endpoint;
-(void)setListener:(NSXPCListener *)arg1 ;
-(shared_ptr<HAL::Client::ObjectIDMap>*)clientObjectMap;
@end

