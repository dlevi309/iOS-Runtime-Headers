/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/

#import <DialogEngine/DialogEngine-Structs.h>
#import <DialogEngine/DEVariable.h>

@interface DEVariableNumber : DEVariable
-(id)init;
-(void)setValue:(double)arg1 ;
-(id)initWithName:(id)arg1 value:(double)arg2 ;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Variable>*)arg1 ;
-(double)getValue;
@end

