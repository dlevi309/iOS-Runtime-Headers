/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTaskUUID:(id)arg1 taskError:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTaskError:(NSError *)arg1 ;
-(NSError *)taskError;
@end

