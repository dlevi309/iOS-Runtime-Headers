/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(MobileCalDAVAccount *)account;
-(void)setAccount:(MobileCalDAVAccount *)arg1 ;
-(id)description;
-(NSURL *)address;
-(void)setAddress:(NSURL *)arg1 ;
-(id)initWithAddress:(id)arg1 account:(id)arg2 ;
@end

