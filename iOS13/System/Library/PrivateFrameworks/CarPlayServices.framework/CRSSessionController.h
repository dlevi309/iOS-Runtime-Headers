/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
*/

#import <CarPlayServices/CarPlayServices-Structs.h>
#import <libobjc.A.dylib/CRSSessionServerToClientInterface.h>

@class RBSProcessHandle, BSServiceConnection, NSString;

@interface CRSSessionController : NSObject <CRSSessionServerToClientInterface> {

	os_unfair_lock_s _lock;
	BOOL _lock_invalidated;
	RBSProcessHandle* _process;
	BSServiceConnection* _connection;

}

@property (nonatomic,retain) RBSProcessHandle * process;                    //@synthesize process=_process - In the implementation block
@property (nonatomic,retain) BSServiceConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(BSServiceConnection *)connection;
-(void)setConnection:(BSServiceConnection *)arg1 ;
-(RBSProcessHandle *)process;
-(void)setProcess:(RBSProcessHandle *)arg1 ;
@end

