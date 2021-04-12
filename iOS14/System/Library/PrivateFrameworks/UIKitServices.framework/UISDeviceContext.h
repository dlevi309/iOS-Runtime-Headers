/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
*/

#import <UIKitServices/UIKitServices-Structs.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSDictionary, NSString;

@interface UISDeviceContext : NSObject <BSXPCSecureCoding, NSCopying, NSMutableCopying> {

	NSDictionary* _deviceInfoKeysToValues;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultContext;
+(id)_keysToValueTypes;
+(id)_allKeys;
+(BOOL)supportsBSXPCSecureCoding;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_dictionaryWithOnlyValidKeysFromDictionary:(id)arg1 ;
-(BOOL)_isDeviceInfoType:(long long)arg1 appropriateForKey:(id)arg2 ;
-(BOOL)deviceInfoBoolValueForKey:(id)arg1 ;
-(id)initWithDeviceInfoValues:(id)arg1 ;
-(NSString *)description;
-(id)deviceInfoStringValueForKey:(id)arg1 ;
-(BOOL)_isDeviceInfoValue:(id)arg1 appropriateForKey:(id)arg2 ;
-(long long)deviceInfoIntegerValueForKey:(id)arg1 ;
-(long long)_valueTypeForKey:(id)arg1 ;
-(id)_rawDeviceInfoKeysToValues;
-(unsigned long long)hash;
-(double)deviceInfoFloatValueForKey:(id)arg1 ;
-(BOOL)hasDeviceInfoValueForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)_valueTypeForValue:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
@end

