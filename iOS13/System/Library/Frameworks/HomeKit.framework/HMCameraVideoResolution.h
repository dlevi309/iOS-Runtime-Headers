/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMCameraVideoResolution : NSObject <NSSecureCoding> {

	unsigned long long _videoResolution;

}

@property (nonatomic,readonly) unsigned long long videoResolution;              //@synthesize videoResolution=_videoResolution - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isValid:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)videoResolution;
-(id)initWithVideoResolutionType:(unsigned long long)arg1 ;
@end

