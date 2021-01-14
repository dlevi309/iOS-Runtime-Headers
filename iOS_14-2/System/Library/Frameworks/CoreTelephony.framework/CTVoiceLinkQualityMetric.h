/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface CTVoiceLinkQualityMetric : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _linkQuality;

}

@property (nonatomic,retain) NSNumber * linkQuality;              //@synthesize linkQuality=_linkQuality - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)linkQuality;
-(void)setLinkQuality:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithLinkQuality:(id)arg1 ;
@end

