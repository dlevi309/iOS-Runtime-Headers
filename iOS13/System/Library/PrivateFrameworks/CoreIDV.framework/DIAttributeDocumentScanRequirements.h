/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
@end

