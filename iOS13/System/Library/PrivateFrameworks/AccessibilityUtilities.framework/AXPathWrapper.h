/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(CGPathRef)path;
-(void)setPath:(CGPathRef)arg1 ;
@end

