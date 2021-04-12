/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


#import <CryptoTokenKit/CryptoTokenKit-Structs.h>
@class TKClientTokenSession, NSDictionary, NSString;

@interface TKClientTokenAdvertisedItem : NSObject {

	id _secRef;
	TKClientTokenSession* _session;
	NSDictionary* _keychainAttributes;

}

@property (nonatomic,readonly) TKClientTokenSession * session;                 //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) unsigned long long keyUsage; 
@property (nonatomic,readonly) NSDictionary * keychainAttributes;              //@synthesize keychainAttributes=_keychainAttributes - In the implementation block
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) id keychainClass; 
@property (nonatomic,readonly) SecKeyRef keyRef; 
@property (nonatomic,readonly) SecCertificateRef certificateRef; 
@property (nonatomic,readonly) SecIdentityRef identityRef; 
-(NSString *)localizedName;
-(NSDictionary *)keychainAttributes;
-(SecCertificateRef)certificateRef;
-(SecKeyRef)keyRef;
-(unsigned long long)keyUsage;
-(SecIdentityRef)identityRef;
-(TKClientTokenSession *)session;
-(id)initWithSession:(id)arg1 keychainAttributes:(id)arg2 secRef:(id)arg3 ;
-(id)keychainClass;
@end

