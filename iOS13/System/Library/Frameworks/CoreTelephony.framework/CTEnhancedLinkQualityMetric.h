/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface CTEnhancedLinkQualityMetric : NSObject <NSCopying, NSSecureCoding> {

	NSData* _enhancedLinkQuality;

}

@property (nonatomic,retain) NSData * enhancedLinkQuality;              //@synthesize enhancedLinkQuality=_enhancedLinkQuality - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)enhancedLinkQuality;
-(void)setEnhancedLinkQuality:(NSData *)arg1 ;
-(id)initWithEnhancedLinkQuality:(id)arg1 ;
@end

