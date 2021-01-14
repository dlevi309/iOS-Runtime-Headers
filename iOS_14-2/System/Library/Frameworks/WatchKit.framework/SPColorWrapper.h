/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <WatchKit/WatchKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface SPColorWrapper : NSObject <NSSecureCoding, NSCopying> {

	UIColor* _color;

}

@property (nonatomic,readonly) UIColor * color;              //@synthesize color=_color - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)wrapperForColor:(id)arg1 ;
-(UIColor *)color;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

