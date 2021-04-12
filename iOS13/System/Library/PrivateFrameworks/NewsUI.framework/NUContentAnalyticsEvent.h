/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(SXAnalyticsEvent *)event;
-(id)initWithEvent:(id)arg1 ;
@end

