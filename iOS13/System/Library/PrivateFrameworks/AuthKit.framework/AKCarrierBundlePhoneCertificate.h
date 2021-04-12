/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@class NSString;

@interface AKCarrierBundlePhoneCertificate : NSObject {

	NSString* _phoneCertificate;
	long long _slotID;

}

@property (nonatomic,retain) NSString * phoneCertificate;              //@synthesize phoneCertificate=_phoneCertificate - In the implementation block
@property (assign,nonatomic) long long slotID;                         //@synthesize slotID=_slotID - In the implementation block
-(long long)slotID;
-(void)setSlotID:(long long)arg1 ;
-(NSString *)phoneCertificate;
-(void)setPhoneCertificate:(NSString *)arg1 ;
@end

