/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSRecord.h>

@class NSDictionary, NSString;

@interface _LSLocalizedStringRecord : LSRecord

@property (readonly) NSDictionary * _allUnsanitizedStringValues; 
@property (readonly) NSString * stringValue; 
@property (readonly) NSDictionary * allStringValues; 
@property (readonly) NSString * defaultStringValue; 
+(BOOL)supportsSecureCoding;
+(id)_propertyClasses;
+(id)sanitizeString:(id)arg1 ;
-(id)_propertyClassesForCoding;
-(const vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)> > >*)_resolvingMethods;
-(id)_allUnsanitizedStringValuesWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LocalizedString*)arg4 ;
-(NSDictionary *)allStringValues;
-(NSString *)defaultStringValue;
-(void)_LSRecord_resolve__allUnsanitizedStringValues;
-(void)_detachFromContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(NSDictionary *)_allUnsanitizedStringValues;
-(id)stringValueWithPreferredLocalizations:(id)arg1 ;
-(id)_initWithContext:(LSContext*)arg1 unitID:(unsigned)arg2 ;
-(id)debugDescription;
-(NSString *)stringValue;
-(id)description;
@end

