/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>

@protocol NSObject;
@class NSString, NSFormatter, NSArray;

@interface HMFAttributeDescription : NSObject <HMFObject> {

	NSString* _name;
	id<NSObject> _value;
	unsigned long long _options;
	NSFormatter* _formatter;

}

@property (nonatomic,copy,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) id<NSObject> value;                                //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                        //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSFormatter * formatter;                      //@synthesize formatter=_formatter - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
-(NSString *)privateDescription;
-(NSFormatter *)formatter;
-(id)init;
-(NSString *)shortDescription;
-(NSString *)debugDescription;
-(unsigned long long)options;
-(NSString *)name;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
-(id)initWithName:(id)arg1 value:(id)arg2 options:(unsigned long long)arg3 formatter:(id)arg4 ;
-(id<NSObject>)value;
-(BOOL)isEqual:(id)arg1 ;
@end

