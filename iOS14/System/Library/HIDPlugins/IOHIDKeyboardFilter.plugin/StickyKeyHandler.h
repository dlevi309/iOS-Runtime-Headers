/*
* Generated on Thursday, January 14, 2021 at 2:29:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

