/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>

@protocol NSObject;
@class NSString, NSNumber, NSData;

@interface HMFPreference : HMFObject {

	NSString* _key;
	unsigned long long _options;
	id<NSObject> _value;
	HMFPreference* _parent;

}

@property (readonly) NSString * key;                                     //@synthesize key=_key - In the implementation block
@property (readonly) unsigned long long options;                         //@synthesize options=_options - In the implementation block
@property (copy) id<NSObject> value;                                     //@synthesize value=_value - In the implementation block
@property (__weak,readonly) HMFPreference * parent;                      //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) BOOL boolValue; 
@property (nonatomic,copy,readonly) NSNumber * numberValue; 
@property (nonatomic,copy,readonly) NSString * stringValue; 
@property (nonatomic,copy,readonly) NSData * dataValue; 
+(id)shortDescription;
-(id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3 ;
-(id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3 parent:(id)arg4 ;
-(NSNumber *)numberValue;
-(BOOL)boolValue;
-(NSData *)dataValue;
-(HMFPreference *)parent;
-(id)init;
-(id)shortDescription;
-(unsigned long long)options;
-(NSString *)stringValue;
-(void)setValue:(id<NSObject>)arg1 ;
-(NSString *)key;
-(id<NSObject>)value;
@end

