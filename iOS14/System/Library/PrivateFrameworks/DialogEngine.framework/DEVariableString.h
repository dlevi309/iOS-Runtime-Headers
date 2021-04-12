/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/

#import <DialogEngine/DialogEngine-Structs.h>
#import <DialogEngine/DEVariable.h>

@class NSString;

@interface DEVariableString : DEVariable

@property (readonly) NSString * printValue; 
@property (readonly) NSString * speakValue; 
-(id)init;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Variable>*)arg1 ;
-(id)initWithName:(id)arg1 string:(id)arg2 ;
-(id)initWithName:(id)arg1 print:(id)arg2 speak:(id)arg3 ;
-(NSString *)printValue;
-(NSString *)speakValue;
-(void)setValuePrint:(id)arg1 speak:(id)arg2 ;
@end

