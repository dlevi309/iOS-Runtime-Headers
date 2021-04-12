/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

