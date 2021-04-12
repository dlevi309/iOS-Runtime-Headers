/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)majorVersion;
-(NSNumber *)minorVersion;
-(NSNumber *)releaseVersion;
-(void)setMajorVersion:(NSNumber *)arg1 ;
-(void)setMinorVersion:(NSNumber *)arg1 ;
-(void)setReleaseVersion:(NSNumber *)arg1 ;
@end

