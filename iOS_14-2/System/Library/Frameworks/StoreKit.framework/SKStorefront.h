/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@class NSString;

@interface SKStorefront : NSObject {

	NSString* _countryCode;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * countryCode;              //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
-(NSString *)countryCode;
-(id)description;
-(NSString *)identifier;
-(id)_initWithIdentifier:(id)arg1 countryCode:(id)arg2 ;
@end

