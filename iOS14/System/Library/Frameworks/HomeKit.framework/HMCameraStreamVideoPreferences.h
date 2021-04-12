/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface HMCameraStreamVideoPreferences : NSObject <NSSecureCoding> {

	NSSet* _resolutions;

}

@property (nonatomic,readonly) NSSet * resolutions;              //@synthesize resolutions=_resolutions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSSet *)resolutions;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithResolutions:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

