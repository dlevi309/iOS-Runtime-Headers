/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface APLocationInfo : NSObject <NSSecureCoding> {

	NSString* _locality;
	NSString* _administrativeArea;
	NSString* _subAdministrativeArea;
	NSString* _isoCountryCode;
	NSString* _postalCode;

}

@property (retain) NSString * locality;                           //@synthesize locality=_locality - In the implementation block
@property (retain) NSString * administrativeArea;                 //@synthesize administrativeArea=_administrativeArea - In the implementation block
@property (retain) NSString * subAdministrativeArea;              //@synthesize subAdministrativeArea=_subAdministrativeArea - In the implementation block
@property (retain) NSString * isoCountryCode;                     //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (retain) NSString * postalCode;                         //@synthesize postalCode=_postalCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)postalCode;
-(void)setLocality:(NSString *)arg1 ;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(NSString *)subAdministrativeArea;
-(void)setPostalCode:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)isoCountryCode;
-(NSString *)locality;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(BOOL)isEmpty;
-(NSString *)administrativeArea;
@end

