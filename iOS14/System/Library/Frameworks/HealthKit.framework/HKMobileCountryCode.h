/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@class NSString;

@interface HKMobileCountryCode : NSObject {

	NSString* _code;
	NSString* _ISOCode;

}

@property (nonatomic,copy,readonly) NSString * code;                 //@synthesize code=_code - In the implementation block
@property (nonatomic,copy,readonly) NSString * ISOCode;              //@synthesize ISOCode=_ISOCode - In the implementation block
-(NSString *)ISOCode;
-(id)initWithMobileCountryCode:(id)arg1 ISOCode:(id)arg2 ;
-(NSString *)code;
@end

