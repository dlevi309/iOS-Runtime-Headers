/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <ProactiveSupport/_PASDomainSelection.h>

@class NSMutableDictionary;

@interface _PASMutableDomainSelection : _PASDomainSelection {

	NSMutableDictionary* _domains;
	unsigned long long _count;
	BOOL _taintedByDeepDomain;

}
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(BOOL)isEmpty;
-(id)_initWithNonOverlappingDomainSet:(id)arg1 ;
-(BOOL)containsDomain:(id)arg1 ;
-(id)allDomains;
-(BOOL)isEqualToDomainSelection:(id)arg1 ;
-(BOOL)addDomainsFromSelection:(id)arg1 ;
-(BOOL)addDomain:(id)arg1 ;
-(BOOL)addDomainsFromArray:(id)arg1 ;
-(BOOL)addDomainsFromSet:(id)arg1 ;
-(BOOL)_addDomainsFrom:(id)arg1 ;
-(BOOL)_addDomainsFromOtherDictionary:(id)arg1 toOwnDictionary:(id)arg2 ownDictionaryIsPlaceholder:(BOOL)arg3 ;
-(void)_decrementCountAndMaybePruneItems:(id)arg1 ;
@end

