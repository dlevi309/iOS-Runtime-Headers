/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface CTPriVersion : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _majorVersion;
	NSNumber* _minorVersion;
	NSNumber* _releaseVersion;

}

@property (nonatomic,retain) NSNumber * majorVersion;                //@synthesize majorVersion=_majorVersion - In the implementation block
@property (nonatomic,retain) NSNumber * minorVersion;                //@synthesize minorVersion=_minorVersion - In the implementation block
@property (nonatomic,retain) NSNumber * releaseVersion;              //@synthesize releaseVersion=_releaseVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)releaseVersion;
-(void)setMajorVersion:(NSNumber *)arg1 ;
-(void)setMinorVersion:(NSNumber *)arg1 ;
-(void)setReleaseVersion:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSNumber *)majorVersion;
-(NSNumber *)minorVersion;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

