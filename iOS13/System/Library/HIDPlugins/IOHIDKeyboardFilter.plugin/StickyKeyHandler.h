/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/HIDPlugins/IOHIDKeyboardFilter.plugin/IOHIDKeyboardFilter
*/


#import <IOHIDKeyboardFilter/IOHIDKeyboardFilter-Structs.h>
@interface StickyKeyHandler : NSObject {

	IOHIDKeyboardFilter* _filter;
	IOHIDServiceRef _service;

}
-(void)removeObserver;
-(id)initWithFilter:(IOHIDKeyboardFilter*)arg1 service:(IOHIDServiceRef)arg2 ;
-(void)StickyKeyNotification:(id)arg1 ;
@end

