/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


#import <CryptoTokenKit/CryptoTokenKit-Structs.h>
@class TKClientTokenSession, NSDictionary, NSData, NSString;

@interface TKClientTokenAdvertisedItem : NSObject {

	id _secRef;
	TKClientTokenSession* _session;
	NSDictionary* _keychainAttributes;

}

@property (nonatomic,readonly) TKClientTokenSession * session;                 //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) unsigned long long keyUsage; 
@property (nonatomic,readonly) NSDictionary * keychainAttributes;              //@synthesize keychainAttributes=_keychainAttributes - In the implementation block
@property (nonatomic,readonly) NSData * objectID; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) id keychainClass; 
@property (nonatomic,readonly) SecKeyRef keyRef; 
@property (nonatomic,readonly) SecCertificateRef certificateRef; 
@property (nonatomic,readonly) SecIdentityRef identityRef; 
-(NSString *)localizedName;
-(SecKeyRef)keyRef;
-(SecCertificateRef)certificateRef;
-(SecIdentityRef)identityRef;
-(NSDictionary *)keychainAttributes;
-(TKClientTokenSession *)session;
-(id)initWithSession:(id)arg1 keychainAttributes:(id)arg2 secRef:(id)arg3 ;
-(id)keychainClass;
-(NSData *)objectID;
-(unsigned long long)keyUsage;
@end

