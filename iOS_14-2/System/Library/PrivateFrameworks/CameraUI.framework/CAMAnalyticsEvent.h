/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class NSString, NSMutableDictionary;

@interface CAMAnalyticsEvent : NSObject {

	NSString* _uuid;
	NSMutableDictionary* __eventMap;

}

@property (nonatomic,readonly) NSMutableDictionary * _eventMap;              //@synthesize _eventMap=__eventMap - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * eventName; 
-(NSString *)uuid;
-(id)init;
-(id)initWithEvent:(id)arg1 ;
-(NSString *)eventName;
-(void)publish;
-(NSMutableDictionary *)_eventMap;
@end

