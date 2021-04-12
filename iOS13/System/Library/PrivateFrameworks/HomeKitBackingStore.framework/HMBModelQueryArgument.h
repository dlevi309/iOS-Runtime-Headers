/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>

@protocol HMBQueryableModelFieldCoder;
@class NSString;

@interface HMBModelQueryArgument : HMFObject {

	NSString* _propertyName;
	id<HMBQueryableModelFieldCoder> _defaultValue;

}

@property (nonatomic,readonly) NSString * propertyName;                                   //@synthesize propertyName=_propertyName - In the implementation block
@property (nonatomic,readonly) id<HMBQueryableModelFieldCoder> defaultValue;              //@synthesize defaultValue=_defaultValue - In the implementation block
+(id)argumentWithPropertyName:(id)arg1 ;
+(id)argumentWithPropertyName:(id)arg1 defaultValue:(id)arg2 ;
-(id<HMBQueryableModelFieldCoder>)defaultValue;
-(NSString *)propertyName;
-(id)initWithPropertyName:(id)arg1 defaultValue:(id)arg2 ;
@end

