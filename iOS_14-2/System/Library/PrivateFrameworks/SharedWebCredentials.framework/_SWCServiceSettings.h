/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
*/

#import <libobjc.A.dylib/SWCRedactedDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, _SWCServiceSpecifier, _SWCGeneration, NSDictionary;

@interface _SWCServiceSettings : NSObject <SWCRedactedDescription, NSSecureCoding> {

	NSMutableDictionary* _dict;
	unsigned _hasChanges : 1;
	_SWCServiceSpecifier* _serviceSpecifier;
	_SWCGeneration* _generation;

}

@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) _SWCGeneration * generation;                          //@synthesize generation=_generation - In the implementation block
@property (readonly) _SWCServiceSpecifier * serviceSpecifier;              //@synthesize serviceSpecifier=_serviceSpecifier - In the implementation block
@property (readonly) BOOL hasChanges; 
+(BOOL)supportsSecureCoding;
+(id)serviceSettingsWithServiceSpecifier:(id)arg1 error:(id*)arg2 ;
+(BOOL)removeObjectsForKeys:(id)arg1 serviceSpecifier:(id)arg2 error:(id*)arg3 ;
+(BOOL)removeObjectsForKeys:(id)arg1 serviceType:(id)arg2 error:(id*)arg3 ;
+(id)notificationCenter;
+(void)serviceSettingsDidChange:(id)arg1 ;
+(void)postChangeNotificationForServiceSpecifier:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(_SWCGeneration *)generation;
-(BOOL)commitReturningError:(id*)arg1 ;
-(_SWCServiceSpecifier *)serviceSpecifier;
-(id)objectForKey:(id)arg1 ofClass:(Class)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)objectForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3 ;
-(BOOL)hasChanges;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithServiceSpecifier:(id)arg1 dictionary:(id)arg2 generation:(id)arg3 ;
-(id)redactedDescription;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

