/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/LSDetachable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSDiscardableContent.h>

@class NSURL, NSData;

@interface LSRecord : NSObject <LSDetachable, NSSecureCoding, NSCopying, NSDiscardableContent> {

	unordered_map<SEL *, id, std::__1::hash<SEL *>, std::__1::equal_to<SEL *>, std::__1::allocator<std::__1::pair<SEL *const, id> > >* _resolvedProperties;
	LSContext _context;
	unsigned _unitID;
	unsigned _tableID : 16;
	unsigned _discardableContentCounter : 14;
	unsigned _intentionallyInvalid : 1;
	unsigned _shared : 1;

}

@property (nonatomic,readonly) NSURL * visualizerURL; 
@property (assign,setter=_setShared:,getter=_isShared,nonatomic) BOOL _shared; 
@property (nonatomic,readonly) id compatibilityObject; 
@property (readonly) NSData * persistentIdentifier; 
+(id)new;
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(BOOL)hasDatabaseAccess;
+(void)resolveAllPropertiesOfRecords:(const id*)arg1 count:(unsigned long long)arg2 andDetachOnQueue:(id)arg3 ;
+(void)resolveAllPropertiesOfRecords:(id)arg1 andDetachOnQueue:(id)arg2 ;
+(id)_propertyClasses;
-(BOOL)_isShared;
-(id)_initInvalid;
-(void)_setShared:(BOOL)arg1 ;
-(id)_compatibilityObjectWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(NSURL *)visualizerURL;
-(const vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)> > >*)_resolvingMethods;
-(id)compatibilityObject;
-(id)_initWithContext:(LSContext*)arg1 persistentIdentifierData:(const LSPersistentIdentifierData*)arg2 length:(unsigned long long)arg3 ;
-(id)_replacementObjectForResolvedPropertyValue:(id)arg1 forGetter:(SEL)arg2 encoder:(id)arg3 ;
-(id)_initWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 ;
-(id)_resolvedPropertyValueForGetter:(SEL)arg1 ;
-(void)_resolveAllProperties;
-(id)_resolvedPropertyValueForGetter:(SEL)arg1 nullPlaceholder:(id)arg2 ;
-(void)_detachFromContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(id)_persistentIdentifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(void)_setResolvedPropertyValue:(id)arg1 forGetter:(SEL)arg2 ;
-(void)detach;
-(void)resolveAllPropertiesAndDetachOnQueue:(id)arg1 ;
-(void)_performBlockWithContext:(/*^block*/id)arg1 ;
-(id)initWithPersistentIdentifier:(id)arg1 ;
-(id)_attributedDescription;
-(id)_propertyClassesForCoding;
-(void)_removeResolvedPropertyValueForGetter:(SEL)arg1 ;
-(void)_ifAttached:(/*^block*/id)arg1 else:(/*^block*/id)arg2 ;
-(id)init;
-(BOOL)isContentDiscarded;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSData *)persistentIdentifier;
-(id)description;
-(void)endContentAccess;
-(void)discardContentIfPossible;
-(BOOL)beginContentAccess;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

