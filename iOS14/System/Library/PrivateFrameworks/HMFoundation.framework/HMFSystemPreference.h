/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFPreference.h>
#import <HMFoundation/HMFObject.h>

@class NSString, NSArray;

@interface HMFSystemPreference : HMFPreference <HMFObject> {

	NSString* _domain;

}

@property (copy,readonly) NSString * domain;                                      //@synthesize domain=_domain - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3 parent:(id)arg4 ;
-(id)initWithKey:(id)arg1 options:(unsigned long long)arg2 domain:(id)arg3 defaultValue:(id)arg4 parent:(id)arg5 ;
-(NSString *)domain;
-(id)initWithKey:(id)arg1 options:(unsigned long long)arg2 domain:(id)arg3 defaultValue:(id)arg4 ;
-(NSString *)propertyDescription;
@end

