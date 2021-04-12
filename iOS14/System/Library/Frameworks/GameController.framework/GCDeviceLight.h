/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GCColor;

@interface GCDeviceLight : NSObject <NSSecureCoding> {

	GCColor* _color;

}

@property (nonatomic,copy) GCColor * color;              //@synthesize color=_color - In the implementation block
+(BOOL)supportsSecureCoding;
-(GCColor *)color;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithColor:(id)arg1 ;
-(id)description;
-(void)setColor:(GCColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

