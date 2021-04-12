/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/

#import <HearingUtilities/HearingUtilities-Structs.h>
#import <libobjc.A.dylib/HUIDCManagerSecurityDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSString;

@interface AXHASecurityHelper : NSObject <HUIDCManagerSecurityDelegate> {

	SecIdentityRef _appleIDIdentity;
	NSObject*<OS_dispatch_queue> _securityQueue;
	NSArray* _certificateDescription;

}

@property (nonatomic,retain) NSArray * certificateDescription;              //@synthesize certificateDescription=_certificateDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedHelper;
-(id)init;
-(void)dealloc;
-(id)securityTrustChainForStream:(id)arg1 ;
-(BOOL)shouldTrustStream:(id)arg1 ;
-(void)appleIDDidChange:(id)arg1 ;
-(BOOL)trustChainAvailable;
-(void)setCertificateDescription:(NSArray *)arg1 ;
-(void)prepareHelper;
-(NSArray *)certificateDescription;
-(id)trustChain;
-(id)certificateChainForIdentity:(SecIdentityRef)arg1 ;
-(id)certificateChainFromTrust:(SecTrustRef)arg1 ;
@end

