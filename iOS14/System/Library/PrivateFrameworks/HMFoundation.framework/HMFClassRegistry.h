/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary;

@interface HMFClassRegistry : HMFObject {

	hmf_unfair_data_lock_s _lock;
	NSMutableDictionary* _classes;
	Class _defaultClass;

}

@property (nonatomic,readonly) Class defaultClass;              //@synthesize defaultClass=_defaultClass - In the implementation block
-(id)init;
-(id)initWithDefaultClass:(Class)arg1 ;
-(void)setClass:(Class)arg1 forKey:(id)arg2 ;
-(Class)classForKey:(id)arg1 ;
-(Class)defaultClass;
@end

