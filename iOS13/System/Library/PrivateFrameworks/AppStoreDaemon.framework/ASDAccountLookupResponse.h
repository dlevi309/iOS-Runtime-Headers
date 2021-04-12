/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)accountID;
-(id)initWithAccountID:(id)arg1 ;
-(void)setAccountID:(NSNumber *)arg1 ;
-(BOOL)askToBuyEnabled;
-(void)setAskToBuyEnabled:(BOOL)arg1 ;
@end

