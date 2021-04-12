/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <Catalyst/CATMessage.h>

@class NSUUID;

@interface CATTaskMessage : CATMessage {

	NSUUID* _taskUUID;

}

@property (nonatomic,copy) NSUUID * taskUUID;              //@synthesize taskUUID=_taskUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)taskUUID;
-(void)setTaskUUID:(NSUUID *)arg1 ;
-(id)initWithTaskUUID:(id)arg1 ;
@end

