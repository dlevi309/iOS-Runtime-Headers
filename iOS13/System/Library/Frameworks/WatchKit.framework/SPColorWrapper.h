/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)color;
@end

