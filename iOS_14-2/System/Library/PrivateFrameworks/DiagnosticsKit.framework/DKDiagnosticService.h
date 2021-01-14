/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSMutableArray, NSString;

@interface DKDiagnosticService : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	Class _principalClass;
	NSMutableArray* _connections;

}

@property (nonatomic,retain) NSXPCListener * listener;                  //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) Class principalClass;                      //@synthesize principalClass=_principalClass - In the implementation block
@property (nonatomic,retain) NSMutableArray * connections;              //@synthesize connections=_connections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setConnections:(NSMutableArray *)arg1 ;
-(id)init;
-(NSMutableArray *)connections;
-(void)setPrincipalClass:(Class)arg1 ;
-(Class)principalClass;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)resume;
@end

