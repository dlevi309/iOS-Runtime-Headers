/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)ownershipTokenIdentifier;
-(id)_wrapperWithType:(unsigned long long)arg1 identifier:(id)arg2 ;
-(void)_readFromKeychain;
-(void)_writeToKeychain;
-(void)deleteTokenFromLocalKeychain;
-(id)initWithOwnershipToken:(id)arg1 identifier:(id)arg2 ;
-(NSString *)ownershipToken;
-(void)setOwnershipToken:(NSString *)arg1 ;
-(void)deleteTokenFromKeychain;
@end

