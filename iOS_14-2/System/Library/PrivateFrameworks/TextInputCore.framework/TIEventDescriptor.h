/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSString, NSArray;

@interface TIEventDescriptor : NSObject {

	BOOL _includeTestingParameters;
	NSString* _eventName;
	NSString* _eventDescription;
	NSArray* _fieldDescriptors;

}

@property (nonatomic,readonly) NSString * eventName;                       //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,readonly) NSString * eventDescription;                //@synthesize eventDescription=_eventDescription - In the implementation block
@property (nonatomic,readonly) NSArray * fieldDescriptors;                 //@synthesize fieldDescriptors=_fieldDescriptors - In the implementation block
@property (nonatomic,readonly) BOOL includeTestingParameters;              //@synthesize includeTestingParameters=_includeTestingParameters - In the implementation block
+(id)eventDescriptorWithEventName:(id)arg1 eventDescription:(id)arg2 fieldDescriptors:(id)arg3 includeTestingParameters:(BOOL)arg4 ;
-(NSString *)eventName;
-(NSString *)eventDescription;
-(id)initWithEventName:(id)arg1 eventDescription:(id)arg2 fieldDescriptors:(id)arg3 includeTestingParameters:(BOOL)arg4 ;
-(NSArray *)fieldDescriptors;
-(BOOL)includeTestingParameters;
@end

