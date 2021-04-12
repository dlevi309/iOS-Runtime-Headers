/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/


@class NSString;

@interface CNComposeAddressConcatenator : NSObject {

	NSString* _andNMoreFormat;
	NSString* _andNMoreNoEllipsisFormat;
	NSString* _nAddressesFormat;
	NSString* _truncatedAddressFormat;

}

@property (nonatomic,retain) NSString * andNMoreFormat;                        //@synthesize andNMoreFormat=_andNMoreFormat - In the implementation block
@property (nonatomic,retain) NSString * andNMoreNoEllipsisFormat;              //@synthesize andNMoreNoEllipsisFormat=_andNMoreNoEllipsisFormat - In the implementation block
@property (nonatomic,retain) NSString * nAddressesFormat;                      //@synthesize nAddressesFormat=_nAddressesFormat - In the implementation block
@property (nonatomic,retain) NSString * truncatedAddressFormat;                //@synthesize truncatedAddressFormat=_truncatedAddressFormat - In the implementation block
+(id)defaultRecipientListConcatenator;
-(void)getCommaSeparatedAddressList:(out id*)arg1 andListSuffix:(out id*)arg2 withAddressCount:(unsigned long long)arg3 prefixForAddressAtIndex:(/*^block*/id)arg4 stringForAddressAtIndex:(/*^block*/id)arg5 lengthValidationBlock:(/*^block*/id)arg6 ;
-(void)setAndNMoreFormat:(NSString *)arg1 ;
-(void)setAndNMoreNoEllipsisFormat:(NSString *)arg1 ;
-(void)setNAddressesFormat:(NSString *)arg1 ;
-(void)setTruncatedAddressFormat:(NSString *)arg1 ;
-(id)commaSeparatedAddressListWithAddressCount:(unsigned long long)arg1 prefixForAddressAtIndex:(/*^block*/id)arg2 stringForAddressAtIndex:(/*^block*/id)arg3 lengthValidationBlock:(/*^block*/id)arg4 ;
-(NSString *)andNMoreFormat;
-(NSString *)andNMoreNoEllipsisFormat;
-(NSString *)nAddressesFormat;
-(NSString *)truncatedAddressFormat;
@end

