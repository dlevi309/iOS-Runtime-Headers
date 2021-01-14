/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface ASDAccountStatusResponse : NSObject <NSSecureCoding> {

	BOOL _hasCachedFamilyInfo;
	NSNumber* _accountID;
	long long _accountStatus;

}

@property (retain) NSNumber * accountID;                  //@synthesize accountID=_accountID - In the implementation block
@property (assign) long long accountStatus;               //@synthesize accountStatus=_accountStatus - In the implementation block
@property (assign) BOOL hasCachedFamilyInfo;              //@synthesize hasCachedFamilyInfo=_hasCachedFamilyInfo - In the implementation block
@property (readonly) BOOL hasErrorStatus; 
+(BOOL)supportsSecureCoding;
-(NSNumber *)accountID;
-(void)setAccountID:(NSNumber *)arg1 ;
-(void)setHasCachedFamilyInfo:(BOOL)arg1 ;
-(long long)accountStatus;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAccountStatus:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAccountID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasCachedFamilyInfo;
-(BOOL)hasErrorStatus;
-(BOOL)hasResponseFlag:(long long)arg1 ;
@end

