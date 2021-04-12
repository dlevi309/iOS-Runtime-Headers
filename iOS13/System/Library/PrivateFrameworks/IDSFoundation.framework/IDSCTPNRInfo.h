/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setIMSI:(NSString *)arg1 ;
-(NSString *)phoneBookNumber;
-(void)setPhoneBookNumber:(NSString *)arg1 ;
-(id)initWithIMSI:(id)arg1 PLMN:(id)arg2 PNRPhoneNumber:(id)arg3 phoneBookNumber:(id)arg4 ;
-(NSString *)PLMN;
-(void)setPLMN:(NSString *)arg1 ;
-(NSString *)PNRPhoneNumber;
-(void)setPNRPhoneNumber:(NSString *)arg1 ;
@end

