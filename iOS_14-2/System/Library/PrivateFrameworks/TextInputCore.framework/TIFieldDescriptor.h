/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSString, NSObject;

@interface TIFieldDescriptor : NSObject {

	NSString* _fieldName;
	NSString* _fieldDescription;
	NSString* _metricName;
	NSString* _metricType;
	NSObject* _inactiveValue;

}

@property (nonatomic,readonly) NSString * fieldName;                     //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,readonly) NSString * fieldDescription;              //@synthesize fieldDescription=_fieldDescription - In the implementation block
@property (nonatomic,readonly) NSString * metricName;                    //@synthesize metricName=_metricName - In the implementation block
@property (nonatomic,readonly) NSString * metricType;                    //@synthesize metricType=_metricType - In the implementation block
@property (nonatomic,readonly) NSObject * inactiveValue;                 //@synthesize inactiveValue=_inactiveValue - In the implementation block
+(id)fieldDescriptorWithFieldName:(id)arg1 fieldDescription:(id)arg2 metricName:(id)arg3 metricType:(id)arg4 inactiveValue:(id)arg5 ;
-(NSString *)metricType;
-(NSString *)fieldName;
-(NSString *)metricName;
-(id)initWithFieldName:(id)arg1 fieldDescription:(id)arg2 metricName:(id)arg3 metricType:(id)arg4 inactiveValue:(id)arg5 ;
-(NSString *)fieldDescription;
-(NSObject *)inactiveValue;
@end

