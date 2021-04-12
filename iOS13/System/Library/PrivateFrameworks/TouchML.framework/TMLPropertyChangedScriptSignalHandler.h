/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <TouchML/TMLScriptSignalHandler.h>
#import <libobjc.A.dylib/TMLBinder.h>

@class TMLBinding, NSString;

@interface TMLPropertyChangedScriptSignalHandler : TMLScriptSignalHandler <TMLBinder> {

	TMLBinding* _binding;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long bindingOrder; 
-(void)detach;
-(void)attach;
-(void)bindingValueChanged:(id)arg1 ;
-(long long)bindingOrder;
-(id)initWithFunctionName:(id)arg1 context:(id)arg2 binding:(id)arg3 ;
@end

