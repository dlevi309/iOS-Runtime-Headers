/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/

#import <VoiceShortcutClient/VoiceShortcutClient-Structs.h>
#import <VoiceShortcutClient/WFObservableResult.h>

@class WFDatabaseObjectDescriptor;

@interface WFObservableObjectResult : WFObservableResult {

	id _value;
	WFDatabaseObjectDescriptor* _descriptor;

}

@property (nonatomic,readonly) WFDatabaseObjectDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) id value;                                             //@synthesize value=_value - In the implementation block
+(void)getResultWithDescriptor:(id)arg1 valueType:(Class)arg2 glyphSize:(CGSize)arg3 completionHandler:(/*^block*/id)arg4 ;
-(WFDatabaseObjectDescriptor *)descriptor;
-(id)description;
-(void)handleChangeNotification:(id)arg1 ;
-(id)initWithValueType:(Class)arg1 glyphSize:(CGSize)arg2 initialValue:(id)arg3 descriptor:(id)arg4 ;
-(id)value;
@end

