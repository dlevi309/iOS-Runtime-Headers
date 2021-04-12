/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSString;

@interface NSKeyValueAccessor : NSObject {

	id _containerClassID;
	NSString* _key;
	unsigned long long _hash;
	/*function pointer*/void* _implementation;
	SEL _selector;
	unsigned long long _extraArgumentCount;
	void* _extraArgument1;
	void* _extraArgument2;
	void* _extraArgument3;

}
-(void)dealloc;
-(SEL)selector;
-(id)key;
-(id)initWithContainerClassID:(id)arg1 key:(id)arg2 implementation:(/*function pointer*/void*)arg3 selector:(SEL)arg4 extraArguments:(void**)arg5 count:(unsigned long long)arg6 ;
-(id)containerClassID;
-(unsigned long long)extraArgumentCount;
-(void*)extraArgument1;
-(void*)extraArgument2;
@end

