/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@class NSString;

@interface SKStorefront : NSObject {

	NSString* _countryCode;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * countryCode;              //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
-(id)description;
-(NSString *)countryCode;
-(NSString *)identifier;
-(id)_initWithIdentifier:(id)arg1 countryCode:(id)arg2 ;
@end

