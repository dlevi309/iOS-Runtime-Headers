/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@class FBKVOController, NSString;

@interface _FBKVOInfo : NSObject {

	FBKVOController* _controller;
	NSString* _keyPath;
	unsigned long long _options;
	SEL _action;
	void* _context;
	/*^block*/id _block;
	unsigned char _state;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(/*^block*/id)arg4 action:(SEL)arg5 context:(void*)arg6 ;
-(id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4 ;
-(id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(id)initWithController:(id)arg1 keyPath:(id)arg2 ;
@end

