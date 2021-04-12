/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/

#import <DialogEngine/DEVariable.h>

@class NSString;

@interface DEVariableString : DEVariable

@property (readonly) NSString * printValue; 
@property (readonly) NSString * speakValue; 
-(id)init;
-(id)initWithName:(id)arg1 string:(id)arg2 ;
-(id)initWithName:(id)arg1 print:(id)arg2 speak:(id)arg3 ;
-(NSString *)printValue;
-(NSString *)speakValue;
-(void)setValuePrint:(id)arg1 speak:(id)arg2 ;
@end

