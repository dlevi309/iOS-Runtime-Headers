/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKAppleAccountInformation : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isSandboxAccount;
	NSString* _aidaAlternateDSID;
	NSString* _aidaToken;
	NSString* _aaAlternateDSID;
	NSString* _appleID;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _primaryEmailAddress;

}

@property (nonatomic,copy) NSString * aidaAlternateDSID;                //@synthesize aidaAlternateDSID=_aidaAlternateDSID - In the implementation block
@property (nonatomic,copy) NSString * aidaToken;                        //@synthesize aidaToken=_aidaToken - In the implementation block
@property (nonatomic,copy) NSString * aaAlternateDSID;                  //@synthesize aaAlternateDSID=_aaAlternateDSID - In the implementation block
@property (nonatomic,copy) NSString * appleID;                          //@synthesize appleID=_appleID - In the implementation block
@property (assign,nonatomic) BOOL isSandboxAccount;                     //@synthesize isSandboxAccount=_isSandboxAccount - In the implementation block
@property (nonatomic,copy) NSString * firstName;                        //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                         //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSString * primaryEmailAddress;              //@synthesize primaryEmailAddress=_primaryEmailAddress - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)appleID;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setAppleID:(NSString *)arg1 ;
-(BOOL)isSandboxAccount;
-(id)authorizationHeader;
-(BOOL)aidaAccountAvailable;
-(id)primaryAppleAccountHash;
-(NSString *)aidaAlternateDSID;
-(void)setAidaAlternateDSID:(NSString *)arg1 ;
-(NSString *)aidaToken;
-(void)setAidaToken:(NSString *)arg1 ;
-(NSString *)aaAlternateDSID;
-(void)setAaAlternateDSID:(NSString *)arg1 ;
-(void)setIsSandboxAccount:(BOOL)arg1 ;
-(NSString *)primaryEmailAddress;
-(void)setPrimaryEmailAddress:(NSString *)arg1 ;
@end

