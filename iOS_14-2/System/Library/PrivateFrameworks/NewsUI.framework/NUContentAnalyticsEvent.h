/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUAnalyticsEvent.h>

@class SXAnalyticsEvent, NSString;

@interface NUContentAnalyticsEvent : NSObject <NUAnalyticsEvent> {

	SXAnalyticsEvent* _event;

}

@property (nonatomic,readonly) SXAnalyticsEvent * event;              //@synthesize event=_event - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEvent:(id)arg1 ;
-(SXAnalyticsEvent *)event;
@end

