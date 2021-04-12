/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(void)load;
-(BOOL)boolValue;
-(id)stringValue;
-(NSString *)propertyDescription;
-(id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3 ;
-(id)numberValue;
-(HMFSystemPreference *)homeKitPreference;
-(HMFPreference *)appleMediaPreference;
-(HMFPreference *)airPlay2Preference;
@end

