/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol AMSBagProtocol;
@class ACAccount, NSString, AMSProcessInfo, AMSKeychainOptions, LAContext, NSDictionary;

@interface AMSBiometricsSignatureRequest : NSObject <NSSecureCoding> {

	BOOL _dualAction;
	SecAccessControlRef _localAuthAccessControlRef;
	ACAccount* _account;
	id<AMSBagProtocol> _bag;
	NSString* _challenge;
	AMSProcessInfo* _clientInfo;
	AMSKeychainOptions* _keychainOptions;
	LAContext* _localAuthContext;
	NSDictionary* _localAuthOptions;

}

@property (nonatomic,copy,readonly) ACAccount * account;                                   //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) id<AMSBagProtocol> bag;                                       //@synthesize bag=_bag - In the implementation block
@property (nonatomic,copy,readonly) NSString * challenge;                                  //@synthesize challenge=_challenge - In the implementation block
@property (nonatomic,copy,readonly) AMSProcessInfo * clientInfo;                           //@synthesize clientInfo=_clientInfo - In the implementation block
@property (assign,getter=isDualAction,nonatomic) BOOL dualAction;                          //@synthesize dualAction=_dualAction - In the implementation block
@property (nonatomic,readonly) AMSKeychainOptions * keychainOptions;                       //@synthesize keychainOptions=_keychainOptions - In the implementation block
@property (nonatomic,readonly) SecAccessControlRef localAuthAccessControlRef;              //@synthesize localAuthAccessControlRef=_localAuthAccessControlRef - In the implementation block
@property (nonatomic,readonly) LAContext * localAuthContext;                               //@synthesize localAuthContext=_localAuthContext - In the implementation block
@property (nonatomic,readonly) NSDictionary * localAuthOptions;                            //@synthesize localAuthOptions=_localAuthOptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(ACAccount *)account;
-(AMSKeychainOptions *)keychainOptions;
-(AMSProcessInfo *)clientInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)challenge;
-(BOOL)isDualAction;
-(void)setDualAction:(BOOL)arg1 ;
-(id)initWithAccount:(id)arg1 clientInfo:(id)arg2 challenge:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
-(id)_localAuthOptions;
-(SecAccessControlRef)localAuthAccessControlRef;
-(void)setLocalAuthAccessControlRef:(SecAccessControlRef)arg1 ;
-(LAContext *)localAuthContext;
-(NSDictionary *)localAuthOptions;
-(void)dealloc;
@end

