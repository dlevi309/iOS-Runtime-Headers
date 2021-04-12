/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AXPathWrapper : NSObject <NSSecureCoding> {

	CGPathRef _path;

}

@property (assign,nonatomic) CGPathRef path;              //@synthesize path=_path - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)currentSharedInstance;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPath:(CGPathRef)arg1 ;
-(CGPathRef)path;
-(id)initWithCoder:(id)arg1 ;
@end

