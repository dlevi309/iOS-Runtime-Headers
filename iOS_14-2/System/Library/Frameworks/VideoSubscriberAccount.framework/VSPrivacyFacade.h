/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/VSPrivacyServiceProtocol.h>

@class VSPrivacyVoucherLockbox, NSString, NSOperationQueue, NSArray;

@interface VSPrivacyFacade : NSObject <VSPrivacyServiceProtocol> {

	VSPrivacyVoucherLockbox* _voucherLockbox;
	NSString* _service;
	NSOperationQueue* _privateQueue;

}

@property (nonatomic,retain) VSPrivacyVoucherLockbox * voucherLockbox;              //@synthesize voucherLockbox=_voucherLockbox - In the implementation block
@property (nonatomic,copy) NSString * service;                                      //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;                       //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,copy,readonly) NSArray * knownAppBundles; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSOperationQueue *)privateQueue;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(BOOL)reset;
-(NSString *)service;
-(void)preflightCheckForProcessIdentifier:(int)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)requestAccessForAuditToken:(SCD_Struct_VS3)arg1 processIdentifier:(int)arg2 identityProviderDisplayName:(id)arg3 providerIsSupported:(BOOL)arg4 identityProviderID:(id)arg5 allowUI:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)initWithService:(id)arg1 voucherLockbox:(id)arg2 ;
-(VSPrivacyVoucherLockbox *)voucherLockbox;
-(id)_voucherForProcess:(int)arg1 providerID:(id)arg2 ;
-(BOOL)setAccessGranted:(BOOL)arg1 forAuditToken:(SCD_Struct_VS3)arg2 ;
-(void)_promptForAccessUsingAuditToken:(SCD_Struct_VS3)arg1 processIdentifier:(int)arg2 identityProviderDisplayName:(id)arg3 providerIsSupported:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)initWithVoucherLockbox:(id)arg1 ;
-(BOOL)isAccessGrantedForAuditToken:(SCD_Struct_VS3)arg1 ;
-(BOOL)isAccessGrantedForBundle:(CFBundleRef)arg1 ;
-(BOOL)setAccessGranted:(BOOL)arg1 forBundle:(CFBundleRef)arg2 ;
-(NSArray *)knownAppBundles;
-(void)setVoucherLockbox:(VSPrivacyVoucherLockbox *)arg1 ;
@end

