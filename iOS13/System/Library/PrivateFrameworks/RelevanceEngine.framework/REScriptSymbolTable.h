/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class NSMutableDictionary;

@interface REScriptSymbolTable : NSObject {

	REScriptSymbolTable* _parentTable;
	NSMutableDictionary* _definitions;

}
-(BOOL)typeForDefinition:(id)arg1 type:(unsigned long long*)arg2 ;
-(id)objectValueForDefinition:(id)arg1 ;
-(id)nodeValueForDefinition:(id)arg1 ;
-(void)_enumerateObjectsOfType:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithParentScope:(id)arg1 ;
-(BOOL)define:(id)arg1 type:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)setNodeValue:(id)arg1 forDefinition:(id)arg2 error:(id*)arg3 ;
-(BOOL)setObjectValue:(id)arg1 forDefinition:(id)arg2 error:(id*)arg3 ;
-(void)enumerateFeatures:(/*^block*/id)arg1 ;
-(void)enumerateRules:(/*^block*/id)arg1 ;
@end

