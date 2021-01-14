/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <libobjc.A.dylib/_TPSXPCExportable.h>

@class _TPSXPCConnection, NSXPCInterface, NSString;

@interface TPSServiceConnection : NSObject <_TPSXPCExportable> {

	_TPSXPCConnection* _connection;
	NSXPCInterface* _remoteInterfaceInstance;
	NSXPCInterface* _exportedInterfaceInstance;

}

@property (nonatomic,retain) NSXPCInterface * remoteInterfaceInstance;                //@synthesize remoteInterfaceInstance=_remoteInterfaceInstance - In the implementation block
@property (nonatomic,retain) NSXPCInterface * exportedInterfaceInstance;              //@synthesize exportedInterfaceInstance=_exportedInterfaceInstance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)connectionInvalidated;
-(id)exportedInterface;
-(void)connectionInterrupted;
-(void)setRemoteInterfaceInstance:(NSXPCInterface *)arg1 ;
-(id)remoteInterface;
-(NSXPCInterface *)exportedInterfaceInstance;
-(NSXPCInterface *)remoteInterfaceInstance;
-(void)setExportedInterfaceInstance:(NSXPCInterface *)arg1 ;
-(id)connection;
-(void)invalidate;
@end

