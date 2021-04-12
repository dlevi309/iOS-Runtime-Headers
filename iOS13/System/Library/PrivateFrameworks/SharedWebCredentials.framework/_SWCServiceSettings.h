/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/SWCRedactedDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, _SWCServiceSpecifier, _SWCGeneration, NSString, NSDictionary;

@interface _SWCServiceSettings : NSObject <NSXPCListenerDelegate, SWCRedactedDescription, NSSecureCoding> {

	NSMutableDictionary* _dict;
	unsigned _hasChanges : 1;
	_SWCServiceSpecifier* _serviceSpecifier;
	_SWCGeneration* _generation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) _SWCGeneration * generation;                          //@synthesize generation=_generation - In the implementation block
@property (readonly) _SWCServiceSpecifier * serviceSpecifier;              //@synthesize serviceSpecifier=_serviceSpecifier - In the implementation block
@property (readonly) BOOL hasChanges; 
+(BOOL)supportsSecureCoding;
+(id)_log;
+(id)serviceSettingsWithServiceSpecifier:(id)arg1 error:(id*)arg2 ;
+(BOOL)removeObjectsForKeys:(id)arg1 serviceSpecifier:(id)arg2 error:(id*)arg3 ;
+(BOOL)removeObjectsForKeys:(id)arg1 serviceType:(id)arg2 error:(id*)arg3 ;
+(id)notificationCenter;
+(void)serviceSettingsDidChange:(id)arg1 ;
+(void)postChangeNotificationForServiceSpecifier:(id)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSDictionary *)dictionaryRepresentation;
-(BOOL)hasChanges;
-(BOOL)commitReturningError:(id*)arg1 ;
-(id)objectForKey:(id)arg1 ofClass:(Class)arg2 ;
-(id)objectForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3 ;
-(_SWCServiceSpecifier *)serviceSpecifier;
-(_SWCGeneration *)generation;
-(id)_initWithServiceSpecifier:(id)arg1 dictionary:(id)arg2 generation:(id)arg3 ;
@end

