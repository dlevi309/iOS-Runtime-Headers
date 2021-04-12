/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, HMFUnfairLock, HMFClassRegistry, NSArray, NSString;

@interface HMFPreferences : HMFObject <HMFObject> {

	NSMutableDictionary* _preferences;
	HMFUnfairLock* _lock;
	HMFClassRegistry* _classRegistry;

}

@property (nonatomic,readonly) HMFUnfairLock * lock;                              //@synthesize lock=_lock - In the implementation block
@property (readonly) HMFClassRegistry * classRegistry;                            //@synthesize classRegistry=_classRegistry - In the implementation block
@property (copy,readonly) NSArray * preferences; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)sharedPreferences;
+(id)classRegistry;
+(id)defaultValues;
+(Class)preferenceClassForPreferenceKey:(id)arg1 ;
+(id)defaultValueForPreferenceKey:(id)arg1 ;
+(void)setPreferenceClass:(Class)arg1 forPreferenceKey:(id)arg2 ;
+(void)setDefaultValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(id)init;
-(HMFUnfairLock *)lock;
-(NSArray *)preferences;
-(NSString *)propertyDescription;
-(HMFClassRegistry *)classRegistry;
-(Class)preferenceClassForPreferenceKey:(id)arg1 ;
-(void)setPreferenceClass:(Class)arg1 forPreferenceKey:(id)arg2 ;
-(id)preferenceForKey:(id)arg1 ;
@end

