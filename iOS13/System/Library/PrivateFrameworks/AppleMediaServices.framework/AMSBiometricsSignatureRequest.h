/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@class ACAccount, NSString, AMSProcessInfo, AMSKeychainOptions, LAContext, NSDictionary;

@interface AMSBiometricsSignatureRequest : NSObject {

	SecAccessControlRef _localAuthAccessControlRef;
	ACAccount* _account;
	NSString* _challenge;
	AMSProcessInfo* _clientInfo;
	AMSKeychainOptions* _keychainOptions;
	LAContext* _localAuthContext;
	NSDictionary* _localAuthOptions;

}

@property (nonatomic,copy,readonly) ACAccount * account;                                   //@synthesize account=_account - In the implementation block
@property (nonatomic,copy,readonly) NSString * challenge;                                  //@synthesize challenge=_challenge - In the implementation block
@property (nonatomic,copy,readonly) AMSProcessInfo * clientInfo;                           //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,readonly) AMSKeychainOptions * keychainOptions;                       //@synthesize keychainOptions=_keychainOptions - In the implementation block
@property (nonatomic,readonly) SecAccessControlRef localAuthAccessControlRef;              //@synthesize localAuthAccessControlRef=_localAuthAccessControlRef - In the implementation block
@property (nonatomic,readonly) LAContext * localAuthContext;                               //@synthesize localAuthContext=_localAuthContext - In the implementation block
@property (nonatomic,readonly) NSDictionary * localAuthOptions;                            //@synthesize localAuthOptions=_localAuthOptions - In the implementation block
-(void)dealloc;
-(ACAccount *)account;
-(NSString *)challenge;
-(AMSProcessInfo *)clientInfo;
-(AMSKeychainOptions *)keychainOptions;
-(id)initWithAccount:(id)arg1 clientInfo:(id)arg2 challenge:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
-(id)_localAuthOptions;
-(SecAccessControlRef)localAuthAccessControlRef;
-(void)setLocalAuthAccessControlRef:(SecAccessControlRef)arg1 ;
-(LAContext *)localAuthContext;
-(NSDictionary *)localAuthOptions;
@end

