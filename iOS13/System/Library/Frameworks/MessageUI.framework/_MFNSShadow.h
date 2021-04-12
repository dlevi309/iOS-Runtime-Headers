/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSShadow;

@interface _MFNSShadow : NSObject <NSSecureCoding> {

	NSShadow* _shadow;

}

@property (nonatomic,retain) NSShadow * shadow;              //@synthesize shadow=_shadow - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSShadow *)shadow;
-(id)initWithShadow:(id)arg1 ;
-(void)setShadow:(NSShadow *)arg1 ;
@end

