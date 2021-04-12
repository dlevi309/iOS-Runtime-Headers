/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithReason:(id)arg1 ;
-(void)activate;
-(BSServiceConnection *)connection;
-(NSString *)reason;
-(void)invalidate;
-(void)setAllowsBanners:(BOOL)arg1 ;
-(void)setConnection:(BSServiceConnection *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(void)_handleConnectionInterrupted;
-(void)_handleConnectionActivated;
-(BOOL)allowsBanners;
@end

