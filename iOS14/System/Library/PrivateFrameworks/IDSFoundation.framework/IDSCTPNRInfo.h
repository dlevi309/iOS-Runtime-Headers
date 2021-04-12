/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@class NSString;

@interface IDSCTPNRInfo : NSObject {

	NSString* _PLMN;
	NSString* _IMSI;
	NSString* _PNRPhoneNumber;
	NSString* _phoneBookNumber;

}

@property (nonatomic,retain) NSString * PLMN;                         //@synthesize PLMN=_PLMN - In the implementation block
@property (nonatomic,retain) NSString * IMSI;                         //@synthesize IMSI=_IMSI - In the implementation block
@property (nonatomic,retain) NSString * PNRPhoneNumber;               //@synthesize PNRPhoneNumber=_PNRPhoneNumber - In the implementation block
@property (nonatomic,retain) NSString * phoneBookNumber;              //@synthesize phoneBookNumber=_phoneBookNumber - In the implementation block
-(NSString *)IMSI;
-(NSString *)PLMN;
-(NSString *)phoneBookNumber;
-(void)setPhoneBookNumber:(NSString *)arg1 ;
-(NSString *)PNRPhoneNumber;
-(id)initWithIMSI:(id)arg1 PLMN:(id)arg2 PNRPhoneNumber:(id)arg3 phoneBookNumber:(id)arg4 ;
-(void)setPNRPhoneNumber:(NSString *)arg1 ;
-(void)setPLMN:(NSString *)arg1 ;
-(void)setIMSI:(NSString *)arg1 ;
@end

