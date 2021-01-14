/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(RBSProcessHandle *)process;
-(void)setProcess:(RBSProcessHandle *)arg1 ;
-(id)init;
-(BSServiceConnection *)connection;
-(void)invalidate;
-(void)setConnection:(BSServiceConnection *)arg1 ;
@end

