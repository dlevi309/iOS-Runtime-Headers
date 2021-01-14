/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
*/

#import <CoreIDV/DIAttributeImageCaptureRequirements.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DIAttributeDocumentScanRequirements : DIAttributeImageCaptureRequirements <NSSecureCoding> {

	NSString* _type;
	NSString* _countryCode;

}

@property (nonatomic,copy) NSString * type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * countryCode;              //@synthesize countryCode=_countryCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)countryCode;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(id)description;
-(NSString *)type;
-(id)initWithCoder:(id)arg1 ;
@end

