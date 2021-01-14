/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <AuthKit/AKToken.h>

@class NSMutableDictionary, NSData, NSString;

@interface AKMasterToken : AKToken {

	NSMutableDictionary* _properties;

}

@property (nonatomic,readonly) NSData * sessionKey; 
@property (nonatomic,readonly) NSData * encryptedSessionKey; 
@property (nonatomic,readonly) NSData * externalizedVersion; 
@property (nonatomic,readonly) NSString * externalizedVersionString; 
+(id)tokenWithExternalizedVersionString:(id)arg1 ;
+(id)tokenWithExternalizedVersion:(id)arg1 lifetime:(id)arg2 ;
-(id)init;
-(NSData *)sessionKey;
-(id)stringValue;
-(void)_setSessionKey:(id)arg1 ;
-(void)_setEncryptedSessionKey:(id)arg1 ;
-(id)initWithAppleID:(id)arg1 altDSID:(id)arg2 ;
-(NSData *)externalizedVersion;
-(BOOL)updateWithHTTPURLResponse:(id)arg1 ;
-(NSData *)encryptedSessionKey;
-(NSString *)externalizedVersionString;
-(void)setStringValue:(id)arg1 ;
@end

