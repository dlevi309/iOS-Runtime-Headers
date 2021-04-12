/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFPreference.h>
#import <libobjc.A.dylib/HMFObject.h>

@class HMFSystemPreference, HMFPreference, NSString, NSArray;

@interface HMDMediaPreference : HMFPreference <HMFObject> {

	HMFSystemPreference* _homeKitPreference;

}

@property (copy,readonly) HMFPreference * appleMediaPreference; 
@property (copy,readonly) HMFPreference * airPlay2Preference; 
@property (readonly) HMFSystemPreference * homeKitPreference;                     //@synthesize homeKitPreference=_homeKitPreference - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
-(id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3 ;
-(id)numberValue;
-(BOOL)boolValue;
-(id)stringValue;
-(NSString *)propertyDescription;
-(HMFSystemPreference *)homeKitPreference;
-(HMFPreference *)appleMediaPreference;
-(HMFPreference *)airPlay2Preference;
@end

