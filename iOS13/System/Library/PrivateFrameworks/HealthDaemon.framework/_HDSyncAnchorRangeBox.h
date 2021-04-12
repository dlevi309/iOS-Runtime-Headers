/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _HDSyncAnchorRangeBox : NSObject <NSSecureCoding> {

	HDSyncAnchorRange _anchorRange;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithHDSyncAnchorRange:(HDSyncAnchorRange)arg1 ;
-(HDSyncAnchorRange)anchorRange;
@end

