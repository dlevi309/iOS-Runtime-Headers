/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDecimalNumber, NSDate, NSDictionary;

@interface PKSelectedItemActionItem : NSObject <NSSecureCoding> {

	BOOL _serviceProviderDataRequiresLocalBalance;
	NSString* _identifier;
	NSString* _title;
	NSDecimalNumber* _amount;
	NSString* _currency;
	NSDate* _newExpirationDate;
	NSDictionary* _serviceProviderData;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * amount;                             //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy,readonly) NSString * currency;                                  //@synthesize currency=_currency - In the implementation block
@property (nonatomic,copy,readonly) NSDate * newExpirationDate;                           //@synthesize newExpirationDate=_newExpirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * serviceProviderData;                   //@synthesize serviceProviderData=_serviceProviderData - In the implementation block
@property (nonatomic,readonly) BOOL serviceProviderDataRequiresLocalBalance;              //@synthesize serviceProviderDataRequiresLocalBalance=_serviceProviderDataRequiresLocalBalance - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)currency;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDecimalNumber *)amount;
-(NSDictionary *)serviceProviderData;
-(void)_processLocalizableStrings:(/*^block*/id)arg1 ;
-(NSDate *)newExpirationDate;
-(id)serviceProviderDataWithCurrentLocalBalance:(id)arg1 ;
-(BOOL)serviceProviderDataRequiresLocalBalance;
-(NSString *)identifier;
-(NSString *)title;
@end

