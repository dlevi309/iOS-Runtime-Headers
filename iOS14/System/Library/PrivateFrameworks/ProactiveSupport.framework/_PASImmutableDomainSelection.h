/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/

#import <ProactiveSupport/_PASDomainSelection.h>

@class NSSet;

@interface _PASImmutableDomainSelection : _PASDomainSelection {

	NSSet* _domains;

}
-(id)_initWithNonOverlappingDomainSet:(id)arg1 ;
-(BOOL)containsDomain:(id)arg1 ;
-(id)allDomains;
-(BOOL)isEmpty;
-(BOOL)isEqualToDomainSelection:(id)arg1 ;
@end

