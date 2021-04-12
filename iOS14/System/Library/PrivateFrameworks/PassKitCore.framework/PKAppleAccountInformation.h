/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSString* _aaDSID;
	NSString* _aaAlternateDSID;
	NSString* _appleID;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _primaryEmailAddress;

}

@property (nonatomic,copy) NSString * aidaAlternateDSID;                //@synthesize aidaAlternateDSID=_aidaAlternateDSID - In the implementation block
@property (nonatomic,copy) NSString * aidaToken;                        //@synthesize aidaToken=_aidaToken - In the implementation block
@property (nonatomic,copy) NSString * aaDSID;                           //@synthesize aaDSID=_aaDSID - In the implementation block
@property (nonatomic,copy) NSString * aaAlternateDSID;                  //@synthesize aaAlternateDSID=_aaAlternateDSID - In the implementation block
@property (nonatomic,copy) NSString * appleID;                          //@synthesize appleID=_appleID - In the implementation block
@property (assign,nonatomic) BOOL isSandboxAccount;                     //@synthesize isSandboxAccount=_isSandboxAccount - In the implementation block
@property (nonatomic,copy) NSString * firstName;                        //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                         //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSString * primaryEmailAddress;              //@synthesize primaryEmailAddress=_primaryEmailAddress - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setLastName:(NSString *)arg1 ;
-(void)setIsSandboxAccount:(BOOL)arg1 ;
-(NSString *)aidaAlternateDSID;
-(void)setFirstName:(NSString *)arg1 ;
-(id)primaryAppleAccountHash;
-(void)setAidaToken:(NSString *)arg1 ;
-(NSString *)aaAlternateDSID;
-(id)authorizationHeader;
-(NSString *)aidaToken;
-(void)setAaAlternateDSID:(NSString *)arg1 ;
-(BOOL)aidaAccountAvailable;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAaDSID:(NSString *)arg1 ;
-(NSString *)aaDSID;
-(void)setAidaAlternateDSID:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPrimaryEmailAddress:(NSString *)arg1 ;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(BOOL)isSandboxAccount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)primaryEmailAddress;
@end

