/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/GEOAppleMediaServicesProtocol.h>

@class NSMutableSet, NSXPCListener, NSString;

@interface MSPAppleMediaServicesServer : NSObject <NSXPCListenerDelegate, GEOAppleMediaServicesProtocol> {

	NSMutableSet* _connections;
	NSXPCListener* _listener;

}

@property (nonatomic,retain) NSMutableSet * connections;              //@synthesize connections=_connections - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setConnections:(NSMutableSet *)arg1 ;
-(long long)AMSMediaTaskTypeFromGEOAppleMediaServicesMediaType:(long long)arg1 ;
-(id)init;
-(void)mediaResultWithIdentifiers:(id)arg1 bundleIdentifiers:(id)arg2 type:(long long)arg3 artworkSize:(CGSize)arg4 screenScale:(double)arg5 completion:(/*^block*/id)arg6 ;
-(NSMutableSet *)connections;
-(id)additionalParameterWithType:(long long)arg1 ;
-(NSXPCListener *)listener;
-(void)cleanConnections;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)dealloc;
@end

