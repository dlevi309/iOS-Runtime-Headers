/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)shortDescription;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(NSString *)name;
-(unsigned long long)options;
-(id<NSObject>)value;
-(NSFormatter *)formatter;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
-(NSString *)shortDescription;
-(NSString *)privateDescription;
-(id)initWithName:(id)arg1 value:(id)arg2 options:(unsigned long long)arg3 formatter:(id)arg4 ;
@end

