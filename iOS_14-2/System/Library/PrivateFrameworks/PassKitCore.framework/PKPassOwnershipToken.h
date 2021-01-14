/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString;

@interface PKPassOwnershipToken : NSObject {

	NSString* _ownershipToken;
	NSString* _ownershipTokenIdentifier;

}

@property (nonatomic,copy,readonly) NSString * ownershipTokenIdentifier;              //@synthesize ownershipTokenIdentifier=_ownershipTokenIdentifier - In the implementation block
@property (nonatomic,copy) NSString * ownershipToken; 
+(void)queryKeychainForOwnershipTokens:(/*^block*/id)arg1 ;
+(void)deleteAllLocalKeychainOwnershipTokens;
-(NSString *)ownershipTokenIdentifier;
-(id)description;
-(id)_wrapperWithType:(unsigned long long)arg1 identifier:(id)arg2 ;
-(void)_readFromKeychain;
-(void)_writeToKeychain;
-(void)deleteTokenFromLocalKeychain;
-(NSString *)ownershipToken;
-(id)initWithOwnershipToken:(id)arg1 identifier:(id)arg2 ;
-(void)setOwnershipToken:(NSString *)arg1 ;
-(void)deleteTokenFromKeychain;
-(id)initWithIdentifier:(id)arg1 ;
@end

