/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PPConnectionsCriteria : NSObject <NSSecureCoding> {

	unsigned char _locationField;
	NSString* _bundleIdentifier;

}

@property (assign,nonatomic) unsigned char locationField;              //@synthesize locationField=_locationField - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setLocationField:(unsigned char)arg1 ;
-(id)initWithLocationField:(unsigned char)arg1 bundleIdentifier:(id)arg2 ;
-(id)description;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)locationField;
@end

