/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <Catalyst/CATMessage.h>

@class NSUUID;

@interface CATTaskMessage : CATMessage {

	NSUUID* _taskUUID;

}

@property (nonatomic,copy) NSUUID * taskUUID;              //@synthesize taskUUID=_taskUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithTaskUUID:(id)arg1 ;
-(void)setTaskUUID:(NSUUID *)arg1 ;
-(NSUUID *)taskUUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

