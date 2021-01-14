/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreServicesStore.framework/CoreServicesStore
*/

#import <CoreServicesStore/CoreServicesStore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface _CSVisualizer : NSObject <NSCopying> {

	NSMutableDictionary* _functions;
	NSRecursiveLock* _lock;
	const CSStoreRef _store;
	NSMutableDictionary* _userInfo;

}

@property (readonly) const CSStoreRef store;                      //@synthesize store=_store - In the implementation block
@property (readonly) NSMutableDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(id)new;
+(void)enumerateValuesForTitlesInDescription:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)URLForUnit:(unsigned)arg1 inTable:(unsigned)arg2 ;
+(NSRange)rangeOfValueForTitle:(id)arg1 inDescription:(id)arg2 ;
+(BOOL)unitDescription:(id)arg1 referencesUnit:(unsigned)arg2 inTable:(unsigned)arg3 ;
+(void)breakDownTable:(const Table*)arg1 inStore:(const Store*)arg2 buffer:(char*)arg3 ;
+(id)predicateForSearchingDescriptionWithString:(id)arg1 error:(id*)arg2 ;
+(void)enumerateReferencesToUnitsInUnitDescription:(id)arg1 block:(/*^block*/id)arg2 ;
+(BOOL)getUnit:(unsigned*)arg1 inTable:(unsigned*)arg2 fromURL:(id)arg3 ;
-(id)initWithStore:(CSStoreRef)arg1 useStandardTableFunctions:(BOOL)arg2 ;
-(void)setFunctions:(id)arg1 forTable:(unsigned)arg2 ;
-(id)descriptionOfUnit:(unsigned)arg1 inTable:(unsigned)arg2 ;
-(NSMutableDictionary *)userInfo;
-(id)init;
-(const CSStoreRef)store;
-(id)initWithStore:(CSStoreRef)arg1 ;
-(id)summaryOfUnit:(unsigned)arg1 inTable:(unsigned)arg2 ;
-(id)functionsForTable:(unsigned)arg1 ;
-(id)breakDownUsage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)functionsForTableNoCopy:(unsigned)arg1 ;
-(void)setStandardTableFunctions;
-(void)enumerateReferencesToUnit:(unsigned)arg1 inTable:(unsigned)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithStore:(CSStoreRef)arg1 useStandardTableHandlers:(BOOL)arg2 ;
-(/*^block*/id)handlerForTable:(unsigned)arg1 ;
-(void)setHandler:(/*^block*/id)arg1 forTable:(unsigned)arg2 ;
-(void)setStandardTableHandlers;
@end

