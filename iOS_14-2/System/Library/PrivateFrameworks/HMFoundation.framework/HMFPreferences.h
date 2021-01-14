/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, HMFClassRegistry, NSArray, NSString;

@interface HMFPreferences : HMFObject <HMFObject> {

	os_unfair_recursive_lock_s _lock;
	NSMutableDictionary* _preferences;
	HMFClassRegistry* _classRegistry;

}

@property (readonly) HMFClassRegistry * classRegistry;                            //@synthesize classRegistry=_classRegistry - In the implementation block
@property (copy,readonly) NSArray * preferences; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
+(id)classRegistry;
+(Class)preferenceClassForPreferenceKey:(id)arg1 ;
+(void)setPreferenceClass:(Class)arg1 forPreferenceKey:(id)arg2 ;
+(id)sharedPreferences;
+(id)defaultValues;
+(void)setDefaultValue:(id)arg1 forPreferenceKey:(id)arg2 ;
+(id)defaultValueForPreferenceKey:(id)arg1 ;
-(id)init;
-(HMFClassRegistry *)classRegistry;
-(NSArray *)preferences;
-(id)preferenceForKey:(id)arg1 ;
-(Class)preferenceClassForPreferenceKey:(id)arg1 ;
-(NSString *)propertyDescription;
-(void)setPreferenceClass:(Class)arg1 forPreferenceKey:(id)arg2 ;
@end

