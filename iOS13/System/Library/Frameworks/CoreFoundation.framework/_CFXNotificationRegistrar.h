/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/_CFXNotificationRegistrationContainer.h>

@interface _CFXNotificationRegistrar : _CFXNotificationRegistrationContainer {

	SCD_Struct_CF6* _wildcardNames;
	SCD_Struct_CF6* _wildcardObjects;
	SCD_Struct_CF6* _doubleWildcards;
	CFDictionaryRef _tokenRegistrations;
	unsigned long long _options;

}

@property (readonly) BOOL isEmpty; 
+(Class)childClass;
-(id)init;
-(void)invalidate;
-(void)addChild:(id)arg1 ;
-(BOOL)isEmpty;
-(void)removeChild:(id)arg1 token:(unsigned long long)arg2 ;
-(id)find:(unsigned long long)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(CFStringRef)_copyDebugDescription;
-(void)remove:(unsigned long long)arg1 ;
-(void)match:(CFStringRef)arg1 object:(void*)arg2 observer:(void*)arg3 enumerator:(/*^block*/id)arg4 ;
-(void)find:(CFStringRef)arg1 object:(void*)arg2 observer:(void*)arg3 enumerator:(/*^block*/id)arg4 ;
-(void)add:(CFStringRef)arg1 object:(void*)arg2 observer:(void*)arg3 tokenRegistration:(id)arg4 ;
-(id)registrar;
-(id)invalidate:(unsigned long long)arg1 ;
-(id)acquireDoubleWildcard:(void*)arg1 options:(unsigned long long)arg2 ;
-(id)acquireWildcardName:(void*)arg1 ;
-(id)acquireWildcardObject:(CFStringRef)arg1 ;
-(id)acquireName:(CFStringRef)arg1 ;
-(void)enumerateRegistrations:(/*^block*/id)arg1 ;
@end

