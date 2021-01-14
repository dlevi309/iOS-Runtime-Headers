/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@interface CRKWaitForUnlockRequest : CATTaskRequest {

	BOOL _shouldBecomeExclusive;

}

@property (assign,nonatomic) BOOL shouldBecomeExclusive;              //@synthesize shouldBecomeExclusive=_shouldBecomeExclusive - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldBecomeExclusive;
-(void)setShouldBecomeExclusive:(BOOL)arg1 ;
@end

