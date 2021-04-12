/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(id)initWithAppleID:(id)arg1 altDSID:(id)arg2 ;
-(void)_setSessionKey:(id)arg1 ;
-(void)_setEncryptedSessionKey:(id)arg1 ;
-(NSData *)externalizedVersion;
-(BOOL)updateWithHTTPURLResponse:(id)arg1 ;
-(NSData *)sessionKey;
-(NSData *)encryptedSessionKey;
-(NSString *)externalizedVersionString;
@end

