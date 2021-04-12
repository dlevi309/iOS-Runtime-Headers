/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSQuery.h>

@interface _UTTypeQuery : _LSQuery {

	unsigned long long _flags;
	void* _context;
	unsigned long long _propertyFlags;

}

@property (assign,setter=_setContext:,nonatomic) LSContext* _context; 
@property (assign,setter=_setPropertiesToResolve:,nonatomic) unsigned long long _propertiesToResolve; 
@property (assign,setter=_setResolveInactiveDeclarations:,nonatomic) BOOL _resolveInactiveDeclarations; 
+(id)typeQueryWithIdentifier:(id)arg1 ;
+(id)typeQueryWithTag:(id)arg1 ofClass:(id)arg2 conformsTo:(id)arg3 limit:(long long)arg4 ;
+(id)typeQueryForAllDeclaredIdentifiers;
+(id)typeQueryWithDescendantsOfIdentifier:(id)arg1 searchDepthLimit:(unsigned long long)arg2 ;
+(void)_precacheTypesForIdentifiers:(id)arg1 ;
+(id)typeQueryWithTag:(id)arg1 ofClass:(id)arg2 conformsTo:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)_setContext:(LSContext*)arg1 ;
-(id)_init;
-(LSContext*)_context;
-(BOOL)_resolveInactiveDeclarations;
-(void)_setResolveInactiveDeclarations:(BOOL)arg1 ;
-(unsigned long long)_propertiesToResolve;
-(void)_setPropertiesToResolve:(unsigned long long)arg1 ;
-(id)resolve;
@end

