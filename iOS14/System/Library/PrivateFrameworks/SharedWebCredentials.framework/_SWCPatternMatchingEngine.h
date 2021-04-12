/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
*/


#import <SharedWebCredentials/SharedWebCredentials-Structs.h>
@class _SWCPatternList, _SWCSubstitutionVariableList;

@interface _SWCPatternMatchingEngine : NSObject {

	_SWCPatternList* _patternList;
	_SWCSubstitutionVariableList* _subVarList;

}
+(id)new;
-(id)init;
-(id)initWithPatternDictionaries:(id)arg1 ;
-(id)evaluateURLComponents:(id)arg1 ;
-(id)evaluateURLComponents:(id)arg1 auditToken:(SCD_Struct_SW0)arg2 ;
-(id)initWithPatternDictionaries:(id)arg1 substitutionVariables:(id)arg2 ;
-(id)_evaluateURLComponents:(id)arg1 auditToken:(const SCD_Struct_SW0*)arg2 ;
@end

