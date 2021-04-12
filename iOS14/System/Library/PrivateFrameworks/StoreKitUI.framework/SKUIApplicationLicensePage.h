/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SKUIApplicationLicensePage : NSObject <NSCopying> {

	NSString* _licenseAgreementHTML;
	NSString* _title;

}

@property (nonatomic,copy) NSString * licenseAgreementHTML;              //@synthesize licenseAgreementHTML=_licenseAgreementHTML - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(void)setLicenseAgreementHTML:(NSString *)arg1 ;
-(NSString *)licenseAgreementHTML;
@end

