/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
*/

#import <ExposureNotification/ExposureNotification-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ENRegion : NSObject <NSSecureCoding, NSCopying> {

	NSString* _countryCode;
	NSString* _subdivisionCode;

}

@property (nonatomic,copy,readonly) NSString * countryCode;                  //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * subdivisionCode;              //@synthesize subdivisionCode=_subdivisionCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * regionCode; 
+(BOOL)supportsSecureCoding;
+(BOOL)validSubdivisionCode:(id)arg1 forCountryCode:(id)arg2 ;
+(id)regionFromServerResponseDictionary:(id)arg1 ;
+(id)regionWithCode:(id)arg1 ;
-(NSString *)regionCode;
-(NSString *)countryCode;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCountryCode:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCountryCode:(id)arg1 subdivisionCode:(id)arg2 ;
-(NSString *)subdivisionCode;
-(BOOL)isCountryCodeEqualToRegion:(id)arg1 ;
-(BOOL)isSubdivisionCodeEqualToRegion:(id)arg1 ;
-(BOOL)validSubdivisionCode;
@end

