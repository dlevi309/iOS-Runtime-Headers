/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <Catalyst/CATTaskMessage.h>

@class NSError;

@interface CATTaskMessageError : CATTaskMessage {

	NSError* _taskError;

}

@property (nonatomic,retain) NSError * taskError;              //@synthesize taskError=_taskError - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)taskError;
-(id)initWithTaskUUID:(id)arg1 taskError:(id)arg2 ;
-(void)setTaskError:(NSError *)arg1 ;
@end

