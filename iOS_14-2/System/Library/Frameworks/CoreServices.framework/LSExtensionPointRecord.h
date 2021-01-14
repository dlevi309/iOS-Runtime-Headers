/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSRecord.h>

@class LSPropertyList, LSExtensionPoint, NSString;

@interface LSExtensionPointRecord : LSRecord

@property (readonly) LSPropertyList * SDKDictionary; 
@property (nonatomic,readonly) LSExtensionPoint * compatibilityObject; 
@property (readonly) NSString * identifier; 
@property (readonly) NSString * name; 
@property (readonly) NSString * version; 
@property (readonly) unsigned platform; 
+(BOOL)supportsSecureCoding;
+(id)_propertyClasses;
+(id)extensionPointRecordForCurrentProcess;
+(id)identifierForCurrentProcess;
+(id)enumerator;
+(BOOL)isCurrentProcessAnApplicationExtension;
+(void)setExtensionPointRecordForCurrentProcess:(id)arg1 ;
-(id)_propertyClassesForCoding;
-(const vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)> > >*)_resolvingMethods;
-(id)SDKDictionaryWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSExtensionPointData*)arg4 ;
-(id)identifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSExtensionPointData*)arg4 ;
-(id)nameWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSExtensionPointData*)arg4 ;
-(id)_compatibilityObjectWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(id)versionWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSExtensionPointData*)arg4 ;
-(unsigned)platform;
-(void)_LSRecord_resolve_identifier;
-(LSPropertyList *)SDKDictionary;
-(void)_LSRecord_resolve_version;
-(void)_LSRecord_resolve_name;
-(id)initWithIdentifier:(id)arg1 platform:(unsigned)arg2 error:(id*)arg3 ;
-(void)_detachFromContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(void)_LSRecord_resolve_SDKDictionary;
-(unsigned)platformWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSExtensionPointData*)arg4 ;
-(void)_LSRecord_resolve_platform;
-(id)initWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(NSString *)name;
-(NSString *)identifier;
-(NSString *)version;
@end

