/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetadataUtilities.framework/MetadataUtilities
*/


#import <MetadataUtilities/MetadataUtilities-Structs.h>
@class NSMutableDictionary, NSMutableArray, NSDictionary;

@interface MDPathFilterGenerator : NSObject {

	NSMutableDictionary* _namedRoots;
	NSMutableArray* _namedRootArray;
	NSMutableDictionary* _namedRootIndexes;
	NSMutableArray* _auxValueArray;
	int _nextAuxValueIndex;
	BOOL _processExtensions;
	int _auxValueCount;
	NSMutableDictionary* _namedLinkExtensionsDictionary;
	NSDictionary* _namedLinkPrefixesDictionary;
	unsigned long long _atBundleMask;
	unsigned long long _inBundleMask;
	unsigned long long _inheritMask;
	unsigned long long _defaultRule;
	unsigned long long _defaultMask;
	unsigned long long _ignoreMask;

}
-(void)dump;
-(void)addNamed:(id)arg1 auxValue:(unsigned long long)arg2 forPath:(id)arg3 ;
-(id)filterDataForMountDepth:(int)arg1 ;
-(void)dealloc;
-(void)addNamed:(id)arg1 field:(int)arg2 value:(int)arg3 hasAuxValue:(BOOL)arg4 auxValue:(unsigned long long)arg5 forPath:(id)arg6 permitLink:(BOOL)arg7 copyParentWildcardLink:(BOOL)arg8 ;
-(void)addRules:(SCD_Struct_MD11*)arg1 withPrefix:(id)arg2 tableMapping:(id)arg3 ;
-(void)addNamed:(id)arg1 field:(int)arg2 value:(int)arg3 forPath:(id)arg4 permitLink:(BOOL)arg5 ;
-(MDPlistContainerRef)copyFilterMDPlistForMountDepth:(int)arg1 ;
-(id)initWithDefaultFieldsAndValues:(int*)arg1 ignoreFields:(int*)arg2 mappedPrefixes:(id)arg3 hiddenExtensions:(id)arg4 mappedExtensions:(id)arg5 ;
-(void)addMappedExtensions:(id)arg1 ;
-(void)setAtBundleField:(unsigned)arg1 inBundleField:(unsigned)arg2 ;
-(void)addRules:(SCD_Struct_MD11*)arg1 withPrefix:(id)arg2 ;
@end

