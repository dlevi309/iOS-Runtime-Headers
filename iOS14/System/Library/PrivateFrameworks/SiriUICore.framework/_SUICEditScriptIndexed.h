/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
*/

#import <SiriUICore/_SUICEditScript.h>

@class _SUICAtomIndexed;

@interface _SUICEditScriptIndexed : _SUICEditScript {

	_SUICAtomIndexed* _currentScriptAtom;

}
+(id)editScriptFromArray:(id)arg1 toArray:(id)arg2 orderAtomsAscending:(BOOL)arg3 operationPrecedence:(long long)arg4 ;
+(id)editScriptFromArray:(id)arg1 toArray:(id)arg2 ;
-(id)initWithOperationPrecedence:(long long)arg1 dataClass:(Class)arg2 fromArray:(id)arg3 toArray:(id)arg4 orderAtomsAscending:(BOOL)arg5 ;
-(void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4 ;
-(void)initializeCurrentScriptAtom;
-(void)finalizeCurrentScriptAtom;
-(id)applyToArray:(id)arg1 ;
@end

