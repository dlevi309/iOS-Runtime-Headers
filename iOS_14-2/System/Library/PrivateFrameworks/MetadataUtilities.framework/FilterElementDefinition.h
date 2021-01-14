/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetadataUtilities.framework/MetadataUtilities
*/


#import <MetadataUtilities/MetadataUtilities-Structs.h>
@class NSString, NSMutableDictionary;

@interface FilterElementDefinition : NSObject {

	NSString* _rootName;
	unsigned long long _rule;
	unsigned long long _mask;
	unsigned long long _subRule;
	unsigned long long _subMask;
	int _subAuxValueCount;
	BOOL _hasAuxValue;
	unsigned long long _auxValue;
	NSMutableDictionary* _setOfMatches;
	NSString* _namedLink;
	FilterElementDefinition* _wildCard;
	FilterElementDefinition* _superWildCard;

}
-(void)dump:(int)arg1 ;
-(void)dealloc;
-(BOOL)isBottomValue;
-(SCD_Struct_MD2)encodeInto:(MDPlistContainerRef)arg1 auxArray:(id)arg2 namedRootMap:(id)arg3 ;
-(id)initAsRoot:(id)arg1 ;
-(void)addRuleField:(int)arg1 value:(int)arg2 hasAuxValue:(BOOL)arg3 auxValue:(unsigned long long)arg4 inside:(BOOL)arg5 forPathComponents:(id)arg6 permitLink:(BOOL)arg7 componentIndex:(int)arg8 parentElement:(id)arg9 copyParentWildcardLink:(BOOL)arg10 ;
-(void)dumpAttributesInto:(char*)arg1 forLevel:(int)arg2 ;
@end

