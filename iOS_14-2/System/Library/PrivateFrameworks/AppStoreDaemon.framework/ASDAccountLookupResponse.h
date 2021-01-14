/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestResponse.h>

@class NSNumber, NSError;

@interface ASDAccountLookupResponse : ASDRequestResponse {

	BOOL _askToBuyEnabled;
	NSNumber* _accountID;

}

@property (copy) NSNumber * accountID;                //@synthesize accountID=_accountID - In the implementation block
@property (assign) BOOL askToBuyEnabled;              //@synthesize askToBuyEnabled=_askToBuyEnabled - In the implementation block
@property (copy) NSError * error; 
+(BOOL)supportsSecureCoding;
-(NSNumber *)accountID;
-(void)setAccountID:(NSNumber *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)askToBuyEnabled;
-(void)setAskToBuyEnabled:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAccountID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

