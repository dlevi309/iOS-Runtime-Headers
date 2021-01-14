/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSShadow;

@interface _MFNSShadow : NSObject <NSSecureCoding> {

	NSShadow* _shadow;

}

@property (nonatomic,retain) NSShadow * shadow;              //@synthesize shadow=_shadow - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSShadow *)shadow;
-(id)initWithShadow:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setShadow:(NSShadow *)arg1 ;
@end

