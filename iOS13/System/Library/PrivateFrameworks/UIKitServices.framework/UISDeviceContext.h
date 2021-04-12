/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
*/

#import <UIKitServices/UIKitServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSDictionary, NSString;

@interface UISDeviceContext : NSObject <BSXPCCoding, NSCopying, NSMutableCopying> {

	NSDictionary* _deviceInfoKeysToValues;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultContext;
+(id)_allKeys;
+(id)_keysToValueTypes;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(long long)deviceInfoIntegerValueForKey:(id)arg1 ;
-(double)deviceInfoFloatValueForKey:(id)arg1 ;
-(id)initWithDeviceInfoValues:(id)arg1 ;
-(id)_dictionaryWithOnlyValidKeysFromDictionary:(id)arg1 ;
-(BOOL)_isDeviceInfoType:(long long)arg1 appropriateForKey:(id)arg2 ;
-(id)_rawDeviceInfoKeysToValues;
-(long long)_valueTypeForKey:(id)arg1 ;
-(long long)_valueTypeForValue:(id)arg1 ;
-(BOOL)_isDeviceInfoValue:(id)arg1 appropriateForKey:(id)arg2 ;
-(BOOL)hasDeviceInfoValueForKey:(id)arg1 ;
-(BOOL)deviceInfoBoolValueForKey:(id)arg1 ;
-(id)deviceInfoStringValueForKey:(id)arg1 ;
@end

