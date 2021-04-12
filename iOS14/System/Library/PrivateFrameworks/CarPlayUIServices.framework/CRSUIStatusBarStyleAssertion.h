/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
*/

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
#import <libobjc.A.dylib/CRSUIStatusBarStyleServerToClientInterface.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class BKSAnimationFenceHandle, BSAnimationSettings, BSServiceConnection, NSUUID, NSString;

@interface CRSUIStatusBarStyleAssertion : NSObject <CRSUIStatusBarStyleServerToClientInterface, BSInvalidatable> {

	os_unfair_lock_s _lock;
	BOOL _lock_acquired;
	BOOL _lock_connectionActivated;
	BOOL _lock_invalidated;
	BOOL _lock_pendingAcquire;
	BKSAnimationFenceHandle* _lock_pendingAcquireFence;
	BSAnimationSettings* _lock_pendingAcquireAnimationSettings;
	BOOL _siriPresentation;
	BSServiceConnection* _connection;
	NSUUID* _identifier;
	long long _interfaceStyle;
	long long _contrast;

}

@property (nonatomic,retain) BSServiceConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long interfaceStyle;                      //@synthesize interfaceStyle=_interfaceStyle - In the implementation block
@property (assign,nonatomic) long long contrast;                            //@synthesize contrast=_contrast - In the implementation block
@property (assign,nonatomic) BOOL siriPresentation;                         //@synthesize siriPresentation=_siriPresentation - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInterfaceStyle:(long long)arg1 ;
-(void)setContrast:(long long)arg1 ;
-(long long)contrast;
-(long long)interfaceStyle;
-(BOOL)isValid;
-(BSServiceConnection *)connection;
-(void)invalidate;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(void)setConnection:(BSServiceConnection *)arg1 ;
-(id)initForSiriPresentation;
-(void)acquireWithAnimationSettings:(id)arg1 ;
-(void)reliquishWithAnimationSettings:(id)arg1 ;
-(void)_handleConnectionActivated;
-(id)initWithInterfaceStyle:(long long)arg1 contrast:(long long)arg2 siriPresentation:(BOOL)arg3 ;
-(BOOL)siriPresentation;
-(id)initWithInterfaceStyle:(long long)arg1 contrast:(long long)arg2 ;
-(void)setSiriPresentation:(BOOL)arg1 ;
@end

