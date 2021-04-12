/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface HMCameraStreamVideoPreferences : NSObject <NSSecureCoding> {

	NSSet* _resolutions;

}

@property (nonatomic,readonly) NSSet * resolutions;              //@synthesize resolutions=_resolutions - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)resolutions;
-(id)initWithResolutions:(id)arg1 ;
@end

