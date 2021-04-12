/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/


@class MobileCalDAVAccount, NSURL;

@interface MobileCalUserAddress : NSObject {

	MobileCalDAVAccount* _account;
	NSURL* _address;

}

@property (nonatomic,copy) NSURL * address;                                     //@synthesize address=_address - In the implementation block
@property (assign,nonatomic,__weak) MobileCalDAVAccount * account;              //@synthesize account=_account - In the implementation block
+(id)userAddress:(id)arg1 forAccount:(id)arg2 ;
+(id)userAddressFromDictionaryRepresentation:(id)arg1 forAccount:(id)arg2 ;
-(id)description;
-(id)dictionaryRepresentation;
-(NSURL *)address;
-(MobileCalDAVAccount *)account;
-(void)setAccount:(MobileCalDAVAccount *)arg1 ;
-(void)setAddress:(NSURL *)arg1 ;
-(id)initWithAddress:(id)arg1 account:(id)arg2 ;
@end

