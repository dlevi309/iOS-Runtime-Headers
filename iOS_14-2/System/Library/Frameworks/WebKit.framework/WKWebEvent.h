/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <WebCore/WebEvent.h>

@class UIEvent;

@interface WKWebEvent : WebEvent {

	RetainPtr<UIEvent>* _uiEvent;

}

@property (nonatomic,retain,readonly) UIEvent * uiEvent; 
-(id)initWithEvent:(id)arg1 ;
-(UIEvent *)uiEvent;
@end

