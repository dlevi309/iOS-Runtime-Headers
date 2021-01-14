/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
*/

#import <AssertionServices/AssertionServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BKSProcessExitContext : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _exitReason;

}

@property (nonatomic,readonly) unsigned long long exitReason; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)exitReason;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

