/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
*/

#import <CarPlayServices/CarPlayServices-Structs.h>
#import <libobjc.A.dylib/CRSInCallServerToClientInterface.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString, BSServiceConnection;

@interface CRSInCallAssertion : NSObject <CRSInCallServerToClientInterface, BSInvalidatable> {

	os_unfair_lock_s _lock;
	BOOL _lock_pendingPresent;
	BOOL _lock_presented;
	BOOL _lock_activated;
	BOOL _lock_invalidated;
	BOOL _lock_allowsBanners;
	NSString* _reason;
	BSServiceConnection* _connection;

}

@property (nonatomic,copy) NSString * reason;                               //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) BSServiceConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL allowsBanners; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(NSString *)reason;
-(BSServiceConnection *)connection;
-(void)setConnection:(BSServiceConnection *)arg1 ;
-(id)initWithReason:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(void)activate;
-(void)_handleConnectionInterrupted;
-(void)setAllowsBanners:(BOOL)arg1 ;
-(void)_handleConnectionActivated;
-(BOOL)allowsBanners;
@end

