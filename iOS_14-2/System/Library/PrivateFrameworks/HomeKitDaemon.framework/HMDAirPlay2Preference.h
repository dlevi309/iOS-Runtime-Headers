/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFPreference.h>
#import <libobjc.A.dylib/HMFObject.h>

@class HMFSystemPreference, NSString, NSArray;

@interface HMDAirPlay2Preference : HMFPreference <HMFObject> {

	HMFSystemPreference* _airPlayPreference;
	HMFSystemPreference* _homeKitPreference;

}

@property (readonly) HMFSystemPreference * airPlayPreference;                     //@synthesize airPlayPreference=_airPlayPreference - In the implementation block
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
-(HMFSystemPreference *)airPlayPreference;
@end

