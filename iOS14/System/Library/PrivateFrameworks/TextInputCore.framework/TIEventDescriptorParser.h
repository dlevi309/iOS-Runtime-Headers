/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TIDescriptorParser.h>

@interface TIEventDescriptorParser : TIDescriptorParser
-(id)init;
-(void)parseEventDescriptors:(id)arg1 andEventSpecs:(id)arg2 fromConfig:(id)arg3 errors:(id)arg4 ;
-(void)parseEventDescriptor:(id*)arg1 andEventSpec:(id*)arg2 withName:(id)arg3 fromConfig:(id)arg4 errors:(id)arg5 ;
-(void)parseFieldDescriptor:(id*)arg1 andFieldSpec:(id*)arg2 withName:(id)arg3 fromConfig:(id)arg4 errors:(id)arg5 ;
-(id)parseStringFieldSpecWithName:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3 ;
-(id)parseIntegerFieldSpecWithName:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3 ;
-(id)parseFloatFieldSpecWithName:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3 ;
-(id)parseBooleanFieldSpecWithName:(id)arg1 fromConfig:(id)arg2 errors:(id)arg3 ;
@end

