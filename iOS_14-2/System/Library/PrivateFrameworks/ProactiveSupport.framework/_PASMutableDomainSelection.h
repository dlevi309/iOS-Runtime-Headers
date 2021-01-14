/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)addDomain:(id)arg1 ;
-(id)init;
-(void)_decrementCountAndMaybePruneItems:(id)arg1 ;
-(BOOL)addDomainsFromArray:(id)arg1 ;
-(id)_initWithNonOverlappingDomainSet:(id)arg1 ;
-(BOOL)_addDomainsFrom:(id)arg1 ;
-(unsigned long long)count;
-(BOOL)containsDomain:(id)arg1 ;
-(BOOL)_addDomainsFromOtherDictionary:(id)arg1 toOwnDictionary:(id)arg2 ownDictionaryIsPlaceholder:(BOOL)arg3 ;
-(id)allDomains;
-(BOOL)addDomainsFromSelection:(id)arg1 ;
-(BOOL)addDomainsFromSet:(id)arg1 ;
-(BOOL)isEmpty;
-(BOOL)isEqualToDomainSelection:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

