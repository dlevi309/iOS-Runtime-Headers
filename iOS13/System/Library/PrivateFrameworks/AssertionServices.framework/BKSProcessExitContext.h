/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
*/

#import <AssertionServices/AssertionServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BKSProcessExitContext : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _exitReason;

}

@property (assign,nonatomic) unsigned long long exitReason;              //@synthesize exitReason=_exitReason - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contextWithRBSContext:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setExitReason:(unsigned long long)arg1 ;
-(unsigned long long)exitReason;
@end

