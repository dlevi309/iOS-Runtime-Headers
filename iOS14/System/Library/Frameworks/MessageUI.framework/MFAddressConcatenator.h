/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@class NSString;

@interface MFAddressConcatenator : NSObject {

	NSString* _andNMoreFormat;
	NSString* _andNMoreNoEllipsisFormat;
	NSString* _oneAddressFormat;
	NSString* _nAddressesFormat;
	NSString* _truncatedAddressFormat;

}

@property (nonatomic,retain) NSString * andNMoreFormat;                        //@synthesize andNMoreFormat=_andNMoreFormat - In the implementation block
@property (nonatomic,retain) NSString * andNMoreNoEllipsisFormat;              //@synthesize andNMoreNoEllipsisFormat=_andNMoreNoEllipsisFormat - In the implementation block
@property (nonatomic,retain) NSString * oneAddressFormat;                      //@synthesize oneAddressFormat=_oneAddressFormat - In the implementation block
@property (nonatomic,retain) NSString * nAddressesFormat;                      //@synthesize nAddressesFormat=_nAddressesFormat - In the implementation block
@property (nonatomic,retain) NSString * truncatedAddressFormat;                //@synthesize truncatedAddressFormat=_truncatedAddressFormat - In the implementation block
+(id)defaultRecipientListConcatenator;
-(NSString *)oneAddressFormat;
-(void)setOneAddressFormat:(NSString *)arg1 ;
-(void)setAndNMoreFormat:(NSString *)arg1 ;
-(void)setAndNMoreNoEllipsisFormat:(NSString *)arg1 ;
-(void)setNAddressesFormat:(NSString *)arg1 ;
-(void)setTruncatedAddressFormat:(NSString *)arg1 ;
-(void)getCommaSeparatedAddressList:(out id*)arg1 andListSuffix:(out id*)arg2 withAddressCount:(unsigned long long)arg3 prefixForAddressAtIndex:(/*^block*/id)arg4 stringForAddressAtIndex:(/*^block*/id)arg5 lengthValidationBlock:(/*^block*/id)arg6 ;
-(NSString *)andNMoreFormat;
-(id)commaSeparatedAddressListWithAddressCount:(unsigned long long)arg1 prefixForAddressAtIndex:(/*^block*/id)arg2 stringForAddressAtIndex:(/*^block*/id)arg3 lengthValidationBlock:(/*^block*/id)arg4 ;
-(NSString *)andNMoreNoEllipsisFormat;
-(NSString *)nAddressesFormat;
-(NSString *)truncatedAddressFormat;
@end

